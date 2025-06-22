#include "telacadastrarpaciente.h"
#include "ui_telacadastrarpaciente.h"

TelaCadastrarPaciente::TelaCadastrarPaciente(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaCadastrarPaciente)
{
    ui->setupUi(this);
}

TelaCadastrarPaciente::~TelaCadastrarPaciente()
{
    delete ui;
}

void TelaCadastrarPaciente::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaCadastrarPaciente::on_pushButtonCadastrar_clicked()
{

}

