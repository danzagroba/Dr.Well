#include "telainicialmedico.h"
#include "ui_telainicialmedico.h"

TelaInicialMedico::TelaInicialMedico(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaInicialMedico)
{
    ui->setupUi(this);
}

TelaInicialMedico::~TelaInicialMedico()
{
    delete ui;
}
