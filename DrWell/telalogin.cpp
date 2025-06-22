#include "telalogin.h"
#include "ui_telalogin.h"
#include "GerenciadorBanco.h"
#include <QMessageBox>

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
    int tipoUsuarioLogado = -1;
    std::shared_ptr<Usuario> usuario = nullptr;

    QString cpfouemail = ui->textEdit->toPlainText();
    QString senha = ui->textEdit_2->toPlainText();//da pra mudar pra lineedit depois
    if (cpfouemail.isEmpty()) {
        QMessageBox::warning(this, "Login Inválido", "Por favor, insira seu CPF ou E-mail.");
        return;
    }
    if (senha.isEmpty()) {
        QMessageBox::warning(this, "Login Inválido", "Por favor, insira sua senha.");
        return;
    }
    usuario = GerenciadorBanco::getInstance()->autenticarUsuario(cpfouemail, senha, tipoUsuarioLogado);
    if (tipoUsuarioLogado != -1 && usuario) {
        emit entrarRequisitado(tipoUsuarioLogado, usuario);

        ui->textEdit->clear();
        ui->textEdit_2->clear();

    } else {
        QMessageBox::critical(this, "Erro de Login", "Credenciais inválidas (CPF/E-mail ou senha incorretos), ou usuário inativo.");
    }
}

