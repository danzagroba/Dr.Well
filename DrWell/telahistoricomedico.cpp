#include "telahistoricomedico.h"
#include "ui_telahistoricomedico.h"

telaVisualizarPaciente::telaVisualizarPaciente(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::telaVisualizarPaciente)
{
    ui->setupUi(this);
}

telaVisualizarPaciente::~telaVisualizarPaciente()
{
    delete ui;
}
