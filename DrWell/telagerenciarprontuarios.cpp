#include "telagerenciarprontuarios.h"
#include "ui_telagerenciarprontuarios.h"

telaGerenciarProntuarios::telaGerenciarProntuarios(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::telaGerenciarProntuarios)
{
    ui->setupUi(this);
}

telaGerenciarProntuarios::~telaGerenciarProntuarios()
{
    delete ui;
}
