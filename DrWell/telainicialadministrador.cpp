#include "telainicialadministrador.h"
#include "ui_telainicialadministrador.h"
#include <string>

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
    QString id = QString::fromStdString(std::to_string(administrador->getId()));
    ui->labelNome->setText(nome);
    ui->labelID->setText("ID: " + id);
}
