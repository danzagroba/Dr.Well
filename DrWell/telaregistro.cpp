#include "telaregistro.h"
#include "ui_telaregistro.h"
#include "GerenciadorBanco.h"
#include <QVariantMap>
#include <QMessageBox>

TelaRegistro::TelaRegistro(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaRegistro)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);
    ui->especifico_1->hide();
    ui->especifico_2->hide();
    ui->texto_1->hide();
    ui->texto_2->hide();
}

TelaRegistro::~TelaRegistro()
{
    delete ui;
}

void TelaRegistro::on_pushButtonConfirmar_clicked()
{
    if(ui->senha->toPlainText() != ui->confirmarsenha->toPlainText())
    {
        QMessageBox::warning(this, "Registro inválido", "As senhas devem ser iguais.");
        return;
    }
    QVariantMap dadosUsuario;
    dadosUsuario["nome"] = ui->nome->toPlainText();
    dadosUsuario["sobrenome"] = ui->sobrenome->toPlainText();
    dadosUsuario["cpf"] = ui->cpf->toPlainText();
    dadosUsuario["email"] = ui->email->toPlainText();
    dadosUsuario["telefone"] = ui->telefone->toPlainText();
    dadosUsuario["data_nasc"] = ui->data->toPlainText();
    dadosUsuario["salario"] = ui->salario->toPlainText();
    dadosUsuario["senha_hash"] = ui->senha->toPlainText();

    bool flag = false;
    if(ui->comboBox->currentIndex() == 0)
    {
        QVariantMap dadosAdministrador;
        dadosAdministrador["super"] = false;
        flag = GerenciadorBanco::getInstance()->criarUsuario(dadosUsuario, dadosAdministrador, ui->comboBox->currentIndex());
    }
    else if(ui->comboBox->currentIndex() == 1)
    {
        QVariantMap dadosSecretario;
        dadosSecretario["ramal"] = ui->especifico_1->toPlainText();
        flag = GerenciadorBanco::getInstance()->criarUsuario(dadosUsuario, dadosSecretario, ui->comboBox->currentIndex());
    }
    else if(ui->comboBox->currentIndex() == 2)
    {
        QVariantMap dadosMedico;
        dadosMedico["crm"] = ui->especifico_1->toPlainText();
        dadosMedico["especialidade"] = ui->especifico_2->toPlainText();
        flag = GerenciadorBanco::getInstance()->criarUsuario(dadosUsuario, dadosMedico, ui->comboBox->currentIndex());
    }
    if(flag){
        emit confirmarRequisitado();
        ui->confirmarsenha->clear();
        ui->cpf->clear();
        ui->data->clear();
        ui->email->clear();
        ui->especifico_1->clear();
        ui->especifico_2->clear();
        ui->nome->clear();
        ui->salario->clear();
        ui->senha->clear();
        ui->sobrenome->clear();
        ui->telefone->clear();
        ui->comboBox->setCurrentIndex(0);
    }
    else{
        QMessageBox::warning(this, "Registro inválido", "Algo não ocorreu certo");
    }
}


void TelaRegistro::on_pushButtonConfirmar_2_clicked()
{
    emit confirmarRequisitado();
}


void TelaRegistro::on_comboBox_currentIndexChanged(int index)
{
    if(index == 0)
    {
        ui->especifico_1->hide();
        ui->especifico_2->hide();
        ui->texto_1->hide();
        ui->texto_2->hide();
    } else if(index == 1)
    {
        ui->texto_1->setText("Ramal");
        ui->especifico_1->show();
        ui->especifico_2->hide();
        ui->texto_1->show();
        ui->texto_2->hide();
    } else if(index == 2)
    {
        ui->texto_1->setText("CRM");
        ui->texto_2->setText("Especialidade");
        ui->especifico_1->show();
        ui->especifico_2->show();
        ui->texto_1->show();
        ui->texto_2->show();
    }
}

