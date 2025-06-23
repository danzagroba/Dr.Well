#include "telainicialmedico.h"
#include "ui_telainicialmedico.h"
#include "GerenciadorBanco.h"
#include <QStandardItemModel>

TelaInicialMedico::TelaInicialMedico(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaInicialMedico)
{
    ui->setupUi(this);
    m_agendaModel = new QStandardItemModel(this);
    m_agendaModel->setHorizontalHeaderLabels({"Numero", "Paciente", "Data/Hora", "Status", "Custo"});
    ui->tableView->setModel(m_agendaModel);
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
    carregarAgendaDoDia();

}

void TelaInicialMedico::atualizarLabels(){

    QString nome = QString::fromStdString(medico->getNome());
    QString crm = QString::fromStdString(medico->getCrm());

    ui->labelCRM->setText(crm);
    ui->labelNome->setText(nome);

}

void TelaInicialMedico::carregarAgendaDoDia() {

    if (!medico) {
        return;
    }

    m_agendaModel->removeRows(0, m_agendaModel->rowCount());

    QString medico_crm = QString::fromStdString(medico->getCrm());
    QList<Consulta> consultas = GerenciadorBanco::getInstance()->recuperarConsultasMedico(medico_crm, QDate::currentDate());

    for (const Consulta &consulta : consultas) {
        QList<QStandardItem *> rowItems;

        auto timePoint = consulta.getDataHora();
        qint64 secs = std::chrono::duration_cast<std::chrono::seconds>(timePoint.time_since_epoch()).count();
        QDateTime dataHora = QDateTime::fromSecsSinceEpoch(secs);

        rowItems.append(new QStandardItem(QString::number(consulta.getConsultaId())));
        rowItems.append(new QStandardItem(QString::fromStdString(consulta.getNomePaciente()))); // Obtém o nome direto do objeto Consulta
        rowItems.append(new QStandardItem(dataHora.toString("dd/MM/yyyy hh:mm")));
        rowItems.append(new QStandardItem(QString::fromStdString(consulta.getStatus())));
        rowItems.append(new QStandardItem(QString::number(consulta.getCusto(), 'f', 2)));

        m_agendaModel->appendRow(rowItems);
    }

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

