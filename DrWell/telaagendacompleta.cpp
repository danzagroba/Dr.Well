#include "telaagendacompleta.h"
#include "ui_telaagendacompleta.h"

telaAgendaCompleta::telaAgendaCompleta(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::telaAgendaCompleta)
{
    ui->setupUi(this);
}

telaAgendaCompleta::~telaAgendaCompleta()
{
    delete ui;
}
