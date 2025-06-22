#include "telagerenciarpacientes.h"
#include "ui_telagerenciarpacientes.h"

TelaGerenciarPacientes::TelaGerenciarPacientes(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaGerenciarPacientes)
{
    ui->setupUi(this);
    ui->lineEditPaciente->setPlaceholderText("CPF");
}

TelaGerenciarPacientes::~TelaGerenciarPacientes()
{
    delete ui;
}

void TelaGerenciarPacientes::setSecretario(std::shared_ptr<Secretario> s){
    if(s){
        secretario = s;
        atualizarLabels();
    }
}

void TelaGerenciarPacientes::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaGerenciarPacientes::on_pushButtonCadastrar_clicked()
{
    emit cadastrarRequisitado();
}

void TelaGerenciarPacientes::atualizarLabels(){

    QString nome = QString::fromStdString(secretario->getNome());
    ui->labelNome->setText(nome);

}

void TelaGerenciarPacientes::on_lineEditPaciente_editingFinished()
{
    std::string cpf = ui->lineEditPaciente->text().toStdString();
    if(cpf != ""){
        qDebug() << "Buscar paciente: " << cpf;
        //buscarPaciente(cpf);
    }
    ui->lineEditPaciente->clear();
}


void TelaGerenciarPacientes::on_pushButtonRemover_clicked()
{

}


void TelaGerenciarPacientes::on_pushButtonEditar_clicked()
{

}

