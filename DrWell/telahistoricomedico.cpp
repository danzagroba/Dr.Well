#include "telahistoricomedico.h"
#include "ui_telahistoricomedico.h"

TelaHistoricoMedico::TelaHistoricoMedico(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaHistoricoMedico)
{
    ui->setupUi(this);
}

TelaHistoricoMedico::~TelaHistoricoMedico()
{
    delete ui;
}

void TelaHistoricoMedico::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaHistoricoMedico::on_pushButtonAbrir_clicked()
{
    emit abrirRequisitado();
}

