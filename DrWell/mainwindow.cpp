#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "telalogin.h"
#include "telaregistro.h"
#include "telaagendacompleta.h"
#include "telagerenciarprontuarios.h"
#include "telahistoricomedico.h"
#include "telainicialadministrador.h"
#include "telainicialmedico.h"
#include "telainicialsecretario.h"

#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);

    //Inicializando Telas
    telaLogin = new TelaLogin(this);
    telaRegistro = new TelaRegistro(this);
    telaAgendaCompleta = new TelaAgendaCompleta(this);
    telaGerenciarProntuarios = new TelaGerenciarProntuarios(this);
    telaHistoricoMedico = new TelaHistoricoMedico(this);
    telaInicialAdministrador = new TelaInicialAdministrador(this);
    telaInicialMedico = new TelaInicialMedico(this);
    telaInicialSecretario = new TelaInicialSecretario(this);

    //Log-in
    ui->stackedWidget->addWidget(telaLogin);
    ui->stackedWidget->addWidget(telaRegistro);

    //Medico
    ui->stackedWidget->addWidget(telaInicialMedico);
    ui->stackedWidget->addWidget(telaAgendaCompleta);
    ui->stackedWidget->addWidget(telaGerenciarProntuarios);
    ui->stackedWidget->addWidget(telaHistoricoMedico);

    //Secretario
    ui->stackedWidget->addWidget(telaInicialSecretario);

    //Adm
    ui->stackedWidget->addWidget(telaInicialAdministrador);

    //Navegacao Telas do Login
    connect(telaLogin, &TelaLogin::registroRequisitado, this, &MainWindow::irParaTelaRegistro);

    //Navegacao Telas do Medico
    connect(telaInicialMedico, &TelaInicialMedico::agendaRequisitada, this, &MainWindow::irParaTelaAgendaCompleta);
    connect(telaInicialMedico, &TelaInicialMedico::historicoRequisitado, this, &MainWindow::irParaTelaHistoricoMedico);
    connect(telaInicialMedico, &TelaInicialMedico::prontuarioRequisitado, this, &MainWindow::irParaTelaGerenciarProntuarios);
    connect(telaInicialMedico, &TelaInicialMedico::sairRequisitado, this, &MainWindow::irParaTelaLogin);
    connect(telaAgendaCompleta, &TelaAgendaCompleta::voltarRequisitado, this, &MainWindow::irParaTelaInicialMedico);
    connect(telaGerenciarProntuarios, &TelaGerenciarProntuarios::voltarRequisitado, this, &MainWindow::irParaTelaInicialMedico);
    connect(telaHistoricoMedico, &TelaHistoricoMedico::voltarRequisitado, this, &MainWindow::irParaTelaInicialMedico);





    irParaTelaLogin();

    /*Clinica drWell("12.345.678/0001-99");

    // 2. Cria as pessoas usando ponteiros inteligentes
    auto medico1 = std::make_shared<Medico>("CRM123", "Dr. House", "111.222.333-44", "house@email.com");
    auto paciente1 = std::make_shared<Paciente>(1, "João Silva", "444.555.666-77", 987654321);
    auto secretario1 = std::make_shared<Secretario>("Maria", "777.888.999-00", "maria@email.com", 101);
    auto admin1 = std::make_shared<Administrador>(1, "Admin Chefe", "000.111.222-33", "admin@email.com", true);

    // 3. Adiciona as pessoas na clínica
    drWell.adicionarPessoa(medico1);
    drWell.adicionarPessoa(paciente1);
    drWell.adicionarPessoa(secretario1);
    drWell.adicionarPessoa(admin1);

    // 4. Lista todas as pessoas cadastradas na clínica
    drWell.listarPessoas();

    // 5. Cria uma consulta, ligando médico e paciente
    auto consulta1 = make_shared<Consulta>(101, medico1, paciente1, std::chrono::system_clock::now());

    // Adiciona a consulta ao histórico do paciente
    paciente1->adicionarConsulta(consulta1);

    // 6. Exibe o histórico do paciente
    cout << "\n" << paciente1->getHistorico() << std::endl;

    // O secretário agenda a consulta
    secretario1->agendarConsulta(consulta1);*/

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::irParaTelaRegistro() {
    ui->stackedWidget->setCurrentWidget(telaRegistro);
}

void MainWindow::irParaTelaLogin() {
    ui->stackedWidget->setCurrentWidget(telaLogin);
}

void MainWindow::irParaTelaInicialMedico(){
    ui->stackedWidget->setCurrentWidget(telaInicialMedico);
}

void MainWindow::irParaTelaGerenciarProntuarios(){
    ui->stackedWidget->setCurrentWidget(telaGerenciarProntuarios);
}

void MainWindow::irParaTelaHistoricoMedico(){
    ui->stackedWidget->setCurrentWidget(telaHistoricoMedico);
}

void MainWindow::irParaTelaAgendaCompleta(){
    ui->stackedWidget->setCurrentWidget(telaAgendaCompleta);
}


void MainWindow::irParaTelaInicialSecretario(){
    ui->stackedWidget->setCurrentWidget(telaInicialSecretario);
}

void MainWindow::irParaTelaInicialAdministrador(){
    ui->stackedWidget->setCurrentWidget(telaInicialAdministrador);
}
