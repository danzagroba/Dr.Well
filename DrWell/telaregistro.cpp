#include "telaregistro.h"
#include "ui_telaregistro.h"

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
