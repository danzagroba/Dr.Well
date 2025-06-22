#include "telagerenciarconsultas.h"
#include "ui_telagerenciarconsultas.h"

TelaGerenciarConsultas::TelaGerenciarConsultas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaGerenciarConsultas)
{
    ui->setupUi(this);
}

TelaGerenciarConsultas::~TelaGerenciarConsultas()
{
    delete ui;
}

void TelaGerenciarConsultas::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaGerenciarConsultas::on_pushButtonMarcar_clicked()
{
    emit marcarRequisitado();
}

