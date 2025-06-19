#include "telahistoricomedico.h"
#include "ui_telahistoricomedico.h"

TelaVisualizarPaciente::TelaVisualizarPaciente(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaHistoricoMedico)
{
    ui->setupUi(this);
}

TelaVisualizarPaciente::~TelaVisualizarPaciente()
{
    delete ui;
}
