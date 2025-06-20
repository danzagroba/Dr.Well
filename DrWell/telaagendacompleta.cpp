#include "telaagendacompleta.h"
#include "ui_telaagendacompleta.h"

TelaAgendaCompleta::TelaAgendaCompleta(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaAgendaCompleta)
{
    ui->setupUi(this);
}

TelaAgendaCompleta::~TelaAgendaCompleta()
{
    delete ui;
}

void TelaAgendaCompleta::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}

