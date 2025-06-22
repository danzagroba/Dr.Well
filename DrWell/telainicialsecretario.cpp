#include "telainicialsecretario.h"
#include "ui_telainicialsecretario.h"

TelaInicialSecretario::TelaInicialSecretario(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaInicialSecretario)
{
    ui->setupUi(this);
}

TelaInicialSecretario::~TelaInicialSecretario()
{
    delete ui;
}

void TelaInicialSecretario::setSecretario(std::shared_ptr<Secretario> s){
    if(s){
        secretario = s;
        atualizarLabels();
    }
}

void TelaInicialSecretario::on_pushButtonSair_clicked()
{
    emit sairRequisitado();
}


void TelaInicialSecretario::on_pushButtonConsultas_clicked()
{
    emit consultasRequisitado();
}


void TelaInicialSecretario::on_pushButtonPacientes_clicked()
{
    emit pacientesRequisitado();
}

void TelaInicialSecretario::atualizarLabels(){

    QString nome = QString::fromStdString(secretario->getNome());
    ui->labelNome->setText(nome);

}

