#include "telaagendacompleta.h"
#include "ui_telaagendacompleta.h"
#include "GerenciadorBanco.h"
#include <QStandardItemModel>

TelaAgendaCompleta::TelaAgendaCompleta(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaAgendaCompleta)
{
    ui->setupUi(this);
    ui->lineEditData->setPlaceholderText("aaaa-mm-dd");
    m_agendaModel = new QStandardItemModel(this);
    m_agendaModel->setHorizontalHeaderLabels({"Numero", "Paciente", "Data/Hora", "Status", "Custo"});
    ui->tableView->setModel(m_agendaModel);
}

TelaAgendaCompleta::~TelaAgendaCompleta()
{
    delete ui;
}

void TelaAgendaCompleta::setMedico(std::shared_ptr<Medico> m){
    if(m){
        medico = m;
        atualizarLabels();
        carregarAgendaCompletaMedico();
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
    ui->labelCRM->setText(crm);

    ui->labelNome->setText(nome);
}
void TelaAgendaCompleta::carregarAgendaCompletaMedico(){

    if (!medico) {
        return;
    }

    m_agendaModel->removeRows(0, m_agendaModel->rowCount());

    QString medico_crm = QString::fromStdString(medico->getCrm());
    QList<Consulta> consultas = GerenciadorBanco::getInstance()->recuperarConsultasMedico(medico_crm);

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
