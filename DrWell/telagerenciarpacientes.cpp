#include "telagerenciarpacientes.h"
#include "ui_telagerenciarpacientes.h"

TelaGerenciarPacientes::TelaGerenciarPacientes(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaGerenciarPacientes)
{
    ui->setupUi(this);
}

TelaGerenciarPacientes::~TelaGerenciarPacientes()
{
    delete ui;
}

void TelaGerenciarPacientes::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaGerenciarPacientes::on_pushButtonCadastrar_clicked()
{
    emit cadastrarRequisitado();
}

