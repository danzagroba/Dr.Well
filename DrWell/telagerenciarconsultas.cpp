#include "telagerenciarconsultas.h"
#include "ui_telagerenciarconsultas.h"
#include "GerenciadorBanco.h"
#include <QStandardItem>
#include <QDateTime>
#include <QMessageBox>
#include <QItemSelectionModel>

TelaGerenciarConsultas::TelaGerenciarConsultas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaGerenciarConsultas)
{
    ui->setupUi(this);
    ui->lineEditConsulta->setPlaceholderText("dd/mm/aaaa");

    // Configuração do modelo da tabela
    m_consultasModel = new QStandardItemModel(this);
    ui->tableView->setModel(m_consultasModel);
    m_consultasModel->setHorizontalHeaderLabels({"Numero", "Data/Hora", "Medico (CRM)", "Paciente", "Status"});
}

TelaGerenciarConsultas::~TelaGerenciarConsultas()
{
    delete ui;
}

void TelaGerenciarConsultas::setSecretario(std::shared_ptr<Secretario> s){
    if(s){
        secretario = s;
        atualizarLabels();
        carregarConsultas(); // Carrega as consultas ao definir o secretário
    }
}

// Nova função para carregar e exibir as consultas
void TelaGerenciarConsultas::carregarConsultas() {
    m_consultasModel->removeRows(0, m_consultasModel->rowCount());

    // Supondo que você adicionará uma função para buscar todas as consultas
    // ou usará uma existente que se adapte.
    QList<Consulta> consultas = GerenciadorBanco::getInstance()->recuperarTodasConsultas();

    for (const Consulta &consulta : consultas) {
        QList<QStandardItem *> rowItems;

        auto timePoint = consulta.getDataHora();
        qint64 secs = std::chrono::duration_cast<std::chrono::seconds>(timePoint.time_since_epoch()).count();
        QDateTime dataHora = QDateTime::fromSecsSinceEpoch(secs);

        rowItems.append(new QStandardItem(QString::number(consulta.getConsultaId())));
        rowItems.append(new QStandardItem(dataHora.toString("dd/MM/yyyy hh:mm")));
        rowItems.append(new QStandardItem(QString::fromStdString(consulta.getMedicoCpf())));
        rowItems.append(new QStandardItem(QString::fromStdString(consulta.getNomePaciente())));
        rowItems.append(new QStandardItem(QString::fromStdString(consulta.getStatus())));

        m_consultasModel->appendRow(rowItems);
    }
}


void TelaGerenciarConsultas::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaGerenciarConsultas::on_pushButtonMarcar_clicked()
{
    emit marcarRequisitado();
}

void TelaGerenciarConsultas::atualizarLabels(){
    QString nome = QString::fromStdString(secretario->getNome());
    ui->labelNome->setText(nome);
}

void TelaGerenciarConsultas::on_lineEditConsulta_editingFinished()
{
    QString dataTexto = ui->lineEditConsulta->text();
    QDate data = QDate::fromString(dataTexto, "dd/MM/yyyy");

    m_consultasModel->removeRows(0, m_consultasModel->rowCount());

    QList<Consulta> consultas;
    if (data.isValid()) {
        consultas = GerenciadorBanco::getInstance()->recuperarConsultasDia(data);
    } else {
        // Se a data for inválida ou o campo estiver vazio, carrega todas
        consultas = GerenciadorBanco::getInstance()->recuperarTodasConsultas();
    }

    for (const Consulta &consulta : consultas) {
        QList<QStandardItem *> rowItems;
        auto timePoint = consulta.getDataHora();
        qint64 secs = std::chrono::duration_cast<std::chrono::seconds>(timePoint.time_since_epoch()).count();
        QDateTime dataHora = QDateTime::fromSecsSinceEpoch(secs);

        rowItems.append(new QStandardItem(QString::number(consulta.getConsultaId())));
        rowItems.append(new QStandardItem(dataHora.toString("dd/MM/yyyy hh:mm")));
        rowItems.append(new QStandardItem(QString::fromStdString(consulta.getMedicoCpf())));
        rowItems.append(new QStandardItem(QString::fromStdString(consulta.getNomePaciente())));
        rowItems.append(new QStandardItem(QString::fromStdString(consulta.getStatus())));
        m_consultasModel->appendRow(rowItems);
    }
}

void TelaGerenciarConsultas::on_pushButtonConfirmar_clicked()
{
    QItemSelectionModel *selection = ui->tableView->selectionModel();
    if (!selection->hasSelection()) {
        QMessageBox::warning(this, "Nenhuma Seleção", "Por favor, selecione uma consulta para confirmar.");
        return;
    }

    QModelIndex index = selection->selectedIndexes().first();
    int consultaId = m_consultasModel->item(index.row(), 0)->text().toInt();

    if (GerenciadorBanco::getInstance()->atualizarStatusConsulta(consultaId, "Confirmada")) {
        QMessageBox::information(this, "Sucesso", "Consulta confirmada com sucesso!");
        carregarConsultas(); // Recarrega a lista para refletir a mudança
    } else {
        QMessageBox::critical(this, "Erro", "Não foi possível confirmar a consulta.");
    }
}

void TelaGerenciarConsultas::on_pushButtonCancelar_clicked()
{
    QItemSelectionModel *selection = ui->tableView->selectionModel();
    if (!selection->hasSelection()) {
        QMessageBox::warning(this, "Nenhuma Seleção", "Por favor, selecione uma consulta para cancelar.");
        return;
    }

    QModelIndex index = selection->selectedIndexes().first();
    int consultaId = m_consultasModel->item(index.row(), 0)->text().toInt();

    // Adiciona uma caixa de diálogo para confirmação do cancelamento
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Cancelar Consulta", "Tem certeza que deseja cancelar esta consulta?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        if (GerenciadorBanco::getInstance()->atualizarStatusConsulta(consultaId, "Cancelada")) {
            QMessageBox::information(this, "Sucesso", "Consulta cancelada com sucesso!");
            carregarConsultas(); // Recarrega a lista
        } else {
            QMessageBox::critical(this, "Erro", "Não foi possível cancelar a consulta.");
        }
    }
}

void TelaGerenciarConsultas::on_pushButtonEditar_clicked()
{
    // Lógica para editar uma consulta selecionada
}


