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
