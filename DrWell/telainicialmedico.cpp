#include "telainicialmedico.h"
#include "ui_telainicialmedico.h"

TelaInicialMedico::TelaInicialMedico(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaInicialMedico)
{
    ui->setupUi(this);
}

TelaInicialMedico::~TelaInicialMedico()
{
    delete ui;
}

void TelaInicialMedico::setMedico(std::shared_ptr<Medico> m){

    if(!m){
        return;
    }

    medico = m;

    atualizarLabels();

}

void TelaInicialMedico::atualizarLabels(){

    QString nome = QString::fromStdString(medico->getNome());
    QString crm = QString::fromStdString(medico->getCrm());

    ui->labelNome->setText(nome);
    ui->labelCRM->setText("CRM: " + crm);
}

void TelaInicialMedico::on_pushButtonAgenda_clicked()
{
    emit agendaRequisitada();
}

void TelaInicialMedico::on_pushButtonProntuario_clicked()
{
    emit prontuarioRequisitado();
}

void TelaInicialMedico::on_pushButtonHistorico_clicked()
{
    emit historicoRequisitado();
}

void TelaInicialMedico::on_pushButtonSair_clicked()
{
    emit sairRequisitado();
}

