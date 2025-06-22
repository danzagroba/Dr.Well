#include "telahistoricomedico.h"
#include "ui_telahistoricomedico.h"

TelaHistoricoMedico::TelaHistoricoMedico(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaHistoricoMedico)
{
    ui->setupUi(this);
    ui->lineEditPaciente->setPlaceholderText("CPF");
}

TelaHistoricoMedico::~TelaHistoricoMedico()
{
    delete ui;
}

void TelaHistoricoMedico::setMedico(std::shared_ptr<Medico> m){
    if(m){
        medico = m;
        atualizarLabels();
    }
}

void TelaHistoricoMedico::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaHistoricoMedico::on_pushButtonAbrir_clicked()
{
    emit abrirRequisitado();
}

void TelaHistoricoMedico::atualizarLabels(){

    QString nome = QString::fromStdString(medico->getNome());
    ui->labelNome->setText(nome);
    QString crm = QString::fromStdString(medico->getCrm());
    ui->labelCRM->setText(crm);

}

void TelaHistoricoMedico::on_lineEditPaciente_editingFinished()
{
    std::string cpf = ui->lineEditPaciente->text().toStdString();

    if(cpf != ""){
        qDebug() << "Buscar paciente: " << cpf;
        //buscarPaciente(cpf);
    }

    ui->lineEditPaciente->clear();
}

