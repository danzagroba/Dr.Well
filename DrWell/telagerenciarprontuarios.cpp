#include "telagerenciarprontuarios.h"
#include "ui_telagerenciarprontuarios.h"

#include <QDebug>
#include <string>

TelaGerenciarProntuarios::TelaGerenciarProntuarios(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaGerenciarProntuarios)
{
    ui->setupUi(this);
    ui->lineEditPaciente->setPlaceholderText("CPF");
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
void TelaGerenciarProntuarios::setMedico(std::shared_ptr<Medico> m){
    if(m){
        medico = m;
        atualizarLabels();
    }
}

void TelaGerenciarProntuarios::on_lineEditPaciente_editingFinished()
{
    std::string cpf = ui->lineEditPaciente->text().toStdString();

    if(cpf != ""){
        qDebug() << "Buscar paciente: " << cpf;
        //buscarPaciente(nomePaciente);
    }

    ui->lineEditPaciente->clear();
}

void TelaGerenciarProntuarios::atualizarLabels(){

    QString nome = QString::fromStdString(medico->getNome());
    ui->labelNome->setText(nome);
    QString crm = QString::fromStdString(medico->getCrm());
    // ui->labelCRM->setText(crm);
}



