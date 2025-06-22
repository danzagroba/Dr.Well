#include "telainicialadministrador.h"
#include "ui_telainicialadministrador.h"

TelaInicialAdministrador::TelaInicialAdministrador(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaInicialAdministrador)
{
    ui->setupUi(this);
}

TelaInicialAdministrador::~TelaInicialAdministrador()
{
    delete ui;
}

void TelaInicialAdministrador::setAdministrador(std::shared_ptr<Administrador> a){
    if(a){
        administrador= a;
        atualizarLabels();
    }
}

void TelaInicialAdministrador::on_pushButtonSair_clicked()
{
    emit sairRequisitado();
}

void TelaInicialAdministrador::atualizarLabels(){

    QString nome = QString::fromStdString(administrador->getNome());
    ui->labelNome->setText(nome);

}
