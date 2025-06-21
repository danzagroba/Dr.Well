#include "telamarcarconsulta.h"
#include "ui_telamarcarconsulta.h"

TelaMarcarConsulta::TelaMarcarConsulta(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaMarcarConsulta)
{
    ui->setupUi(this);
}

TelaMarcarConsulta::~TelaMarcarConsulta()
{
    delete ui;
}

void TelaMarcarConsulta::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}

