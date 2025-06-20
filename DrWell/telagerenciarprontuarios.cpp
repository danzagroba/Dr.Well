#include "telagerenciarprontuarios.h"
#include "ui_telagerenciarprontuarios.h"

#include <QDebug>
#include <string>

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
    int id_prontuario = -1;
    bool convertido;

    id_prontuario = ui->lineEditNumero->text().toInt(&convertido);

    if(convertido){
        qDebug() << "Numero:" << id_prontuario;
        emit abrirRequisitado();
    }
    
    ui->lineEditNumero->clear();

}


void TelaGerenciarProntuarios::on_lineEditPaciente_editingFinished()
{
    std::string nomePaciente = ui->lineEditPaciente->text().toStdString();

    if(nomePaciente != ""){
        qDebug() << "Buscar paciente: " << nomePaciente;
        //buscarPaciente(nomePaciente);
    }

    ui->lineEditPaciente->clear();
}

