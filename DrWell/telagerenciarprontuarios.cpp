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
