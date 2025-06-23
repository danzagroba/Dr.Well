#include "telaagendacompleta.h"
#include "ui_telaagendacompleta.h"

TelaAgendaCompleta::TelaAgendaCompleta(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaAgendaCompleta)
{
    ui->setupUi(this);
    ui->lineEditData->setPlaceholderText("mm/dd/aaaa");
}

TelaAgendaCompleta::~TelaAgendaCompleta()
{
    delete ui;
}

void TelaAgendaCompleta::setMedico(std::shared_ptr<Medico> m){
    if(m){
        medico = m;
        atualizarLabels();
    }
}

void TelaAgendaCompleta::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaAgendaCompleta::on_lineEditData_editingFinished()
{
    std::string data = ui->lineEditData->text().toStdString();

    ui->lineEditData->clear();
}

void TelaAgendaCompleta::atualizarLabels(){

    QString nome = QString::fromStdString(medico->getNome());
    QString crm = QString::fromStdString(medico->getCrm());
    // ui->labelCRM->setText(crm);

    ui->labelNome->setText(nome);
}
