#include "telalogin.h"
#include "ui_telalogin.h"

TelaLogin::TelaLogin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TelaLogin)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);
}

TelaLogin::~TelaLogin()
{
    delete ui;
}

void TelaLogin::on_pushButton_2_clicked()
{
    // Apenas emite o sinal
    emit registroRequisitado();
}


void TelaLogin::on_pushButton_clicked()
{
    emit entrarRequisitado(ui->comboBox->currentIndex());
}

