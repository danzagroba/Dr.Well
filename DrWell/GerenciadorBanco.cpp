#include "GerenciadorBanco.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDate>

GerenciadorBanco* GerenciadorBanco::m_instance = nullptr;

GerenciadorBanco* GerenciadorBanco::getInstance() {
    if (m_instance == nullptr) {
        m_instance = new GerenciadorBanco;
    }

    return m_instance;
}

GerenciadorBanco::GerenciadorBanco() {
    m_db = QSqlDatabase::addDatabase("QSQLITE", "drwell_connection");
}

GerenciadorBanco::~GerenciadorBanco() {
    if (m_db.isOpen()) m_db.close();
    QSqlDatabase::removeDatabase("drwell_connection");
}

bool GerenciadorBanco::abrir(const QString& caminho) {
    m_db.setDatabaseName(caminho);

    if (!m_db.open()) {
        qDebug() << "Erro ao conectar com base." << m_db.lastError().text();
        return false;
    }
    qDebug() << "Base de dados conectada com sucesso em" << caminho;
    return true;
}

void GerenciadorBanco::fechar()
{
    if (m_db.isOpen()) {
        m_db.close();
        qDebug() << "Base de dados desconectada.";
    }
}


void GerenciadorBanco::inicializar(){

    // QString query = R"(
    // CREATE TABLE IF NOT EXISTS pessoas (
    //     id INTEGER PRIMARY KEY AUTOINCREMENT,
    //     cpf VARCHAR(11) NOT NULL UNIQUE,
    //     nome VARCHAR(100) NOT NULL,
    //     sobrenome VARCHAR(150) NOT NULL,
    //     telefone VARCHAR(20),
    //     data_nasc DATE
    // )
    // )";

    // QString query1 = R"(
    //     INSERT INTO pessoas (cpf, nome, sobrenome, telefone, data_nasc)
    //     VALUES ('88833388899', 'Joao', 'Klug', '41882299372', '2004-01-24');
    // )";

    // comandoSQL(query1);
    // QString query = "SELECT * FROM pessoas;";
}

bool GerenciadorBanco::comandoSQL(const QString& comando) {
    // Tabela aberta
    if (!m_db.isOpen()) {
        qDebug() << "Erro -- Base de dados nao aberta";
        return false;
    }

    // Execução do comando
    QSqlQuery query(m_db);
    if (!query.exec(comando)) {
        qDebug() << "Erro ao executar " << comando << query.lastError().text();
        return false;
    }

    qDebug() << "Comando de tabela executado com sucesso!";
    return true;
}
