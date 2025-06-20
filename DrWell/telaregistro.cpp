#include "telaregistro.h"
#include "ui_telaregistro.h"

TelaRegistro::TelaRegistro(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaRegistro)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);
}

TelaRegistro::~TelaRegistro()
{
    delete ui;
}

void TelaRegistro::on_pushButtonConfirmar_clicked()
{
    emit confirmarRequisitado();
}

