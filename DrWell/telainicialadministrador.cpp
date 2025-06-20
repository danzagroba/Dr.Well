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

void TelaInicialAdministrador::on_pushButtonSair_clicked()
{
    emit sairRequisitado();
}

