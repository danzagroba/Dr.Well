#include "telagerenciarprontuarios.h"
#include "ui_telagerenciarprontuarios.h"

TelaGerenciarProntuarios::TelaGerenciarProntuarios(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaGerenciarProntuarios)
{
    ui->setupUi(this);
}

TelaGerenciarProntuarios::~TelaGerenciarProntuarios()
{
    delete ui;
}

void TelaGerenciarProntuarios::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaGerenciarProntuarios::on_pushButtonAbrir_clicked()
{
    emit abrirRequisitado();
}

