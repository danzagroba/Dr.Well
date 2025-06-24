#include "telamarcarconsulta.h"
#include "ui_telamarcarconsulta.h"
#include "GerenciadorBanco.h"
#include <QMessageBox>
#include <QDateTime>

TelaMarcarConsulta::TelaMarcarConsulta(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaMarcarConsulta)
{
    ui->setupUi(this);

    ui->lineEditData->setPlaceholderText("dd/MM/yyyy hh:mm");
    ui->lineEditMedico->setPlaceholderText("CRM do Médico");
    ui->lineEditPaciente->setPlaceholderText("CPF do Paciente");
    ui->lineEditCusto->setPlaceholderText("Ex: 150.00");

    connect(ui->pushButtonMarcar, &QPushButton::clicked, this, &TelaMarcarConsulta::on_pushButtonMarcar_clicked);
}

TelaMarcarConsulta::~TelaMarcarConsulta()
{
    delete ui;
}

void TelaMarcarConsulta::on_pushButtonVoltar_clicked()
{
    emit voltarRequisitado();
}


void TelaMarcarConsulta::on_pushButtonMarcar_clicked()
{
    // 1. Coletar os dados da UI
    QString dataHoraStr = ui->lineEditData->text();
    QString medicoCrm = ui->lineEditMedico->text();
    QString pacienteCpf = ui->lineEditPaciente->text();
    QString custoStr = ui->lineEditCusto->text();

    // 2. Validar os dados
    if (dataHoraStr.isEmpty() || medicoCrm.isEmpty() || pacienteCpf.isEmpty() || custoStr.isEmpty()) {
        QMessageBox::warning(this, "Campos Vazios", "Por favor, preencha todos os campos.");
        return;
    }

    QDateTime dataHora = QDateTime::fromString(dataHoraStr, "dd/MM/yyyy hh:mm");
    if (!dataHora.isValid()) {
        QMessageBox::warning(this, "Data Inválida", "Formato de data e hora inválido. Use dd/MM/yyyy hh:mm.");
        return;
    }

    bool custoOk;
    float custo = custoStr.toFloat(&custoOk);
    if (!custoOk) {
        QMessageBox::warning(this, "Custo Inválido", "O valor do custo é inválido.");
        return;
    }

    // 3. Chamar o GerenciadorBanco para marcar a consulta
    if (GerenciadorBanco::getInstance()->marcarConsulta(dataHora, custo, medicoCrm, pacienteCpf)) {
        QMessageBox::information(this, "Sucesso", "Consulta marcada com sucesso!");
        // Limpar os campos e emitir o sinal
        ui->lineEditData->clear();
        ui->lineEditMedico->clear();
        ui->lineEditPaciente->clear();
        ui->lineEditCusto->clear();
    } else {
        QMessageBox::critical(this, "Erro", "Não foi possível marcar a consulta. Verifique se o CRM do médico e o CPF do paciente estão corretos.");
    }
}

