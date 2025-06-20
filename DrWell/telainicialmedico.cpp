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

void TelaInicialMedico::on_pushButtonAgenda_clicked()
{
    emit agendaRequisitada();
}

void TelaInicialMedico::on_pushButtonProntuario_clicked()
{
    emit prontuarioRequisitado();
}

void TelaInicialMedico::on_pushButtonHistorico_clicked()
{
    emit historicoRequisitado();
}

void TelaInicialMedico::on_pushButtonSair_clicked()
{
    emit sairRequisitado();
}

