#include "telaantigaregistro.h"
#include "ui_telaantigaregistro.h"

TelaRegistro::TelaRegistro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TelaRegistro)
{
    ui->setupUi(this);
}

TelaRegistro::~TelaRegistro()
{
    delete ui;
}
