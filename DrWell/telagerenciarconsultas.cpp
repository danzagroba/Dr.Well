#include "telagerenciarconsultas.h"
#include "ui_telagerenciarconsultas.h"

TelaGerenciarConsultas::TelaGerenciarConsultas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaGerenciarConsultas)
{
    ui->setupUi(this);
    ui->lineEditConsulta->setPlaceholderText("dd/mm/aa");
}

TelaGerenciarConsultas::~TelaGerenciarConsultas()
{
    delete ui;
}

void TelaGerenciarConsultas::setSecretario(std::shared_ptr<Secretario> s){
    if(s){
        secretario = s;
        atualizarLabels();
    }
}

void TelaGerenciarConsultas::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaGerenciarConsultas::on_pushButtonMarcar_clicked()
{
    emit marcarRequisitado();
}

void TelaGerenciarConsultas::atualizarLabels(){

    QString nome = QString::fromStdString(secretario->getNome());
    ui->labelNome->setText(nome);

}


void TelaGerenciarConsultas::on_lineEditConsulta_editingFinished()
{
    td::string data = ui->lineEditConsulta->text().toStdString();

    ui->lineEditData->clear();
}


void TelaGerenciarConsultas::on_pushButtonEditar_clicked()
{

}


void TelaGerenciarConsultas::on_pushButtonConfirmar_clicked()
{

}


void TelaGerenciarConsultas::on_pushButtonCancelar_clicked()
{

}

