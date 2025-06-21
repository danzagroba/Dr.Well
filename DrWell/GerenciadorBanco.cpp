#include "GerenciadorBanco.h"
#include <QSqlError>
#include <QDebug>
#include <QDate>
#include <QSqlRecord>
#include <QSqlField>
#include <QVariant>

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


    QString query1 = R"(
    CREATE TABLE IF NOT EXISTS consultas (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        crm INTEGER NOT NULL,          -- Chave estrangeira para a tabela de médicos
        paciente_id INTEGER NOT NULL,        -- Chave estrangeira para a tabela de pacientes
        data_hora DATETIME NOT NULL,         -- Para armazenar a data e hora da consulta
        custo FLOAT NOT NULL,                 -- Para armazenar o custo da consulta (float no C++)
        status VARCHAR(50) NOT NULL,         -- Para armazenar o status da consulta (ex: "Agendada", "Realizada", "Cancelada")
        FOREIGN KEY (crm) REFERENCES medicos(crm),
        FOREIGN KEY (paciente_id) REFERENCES pessoas(cpf)
    );

    )";

    QString query2 = R"(
        INSERT INTO usuarios (cpf, email, senha, ativo, salario)
        VALUES ('12345678900', 'sucupira@gmail.com', 'werweq22342ed', TRUE, 3500.00);
    )";
    QString query3 =
        "SELECT p.cpf, p.sobrenome, u.salario FROM pessoas AS p JOIN usuarios AS u ON u.cpf = p.cpf;"
    ;

    comandoSQL(query3);

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

    listarSelect(query);

    qDebug() << "Comando de tabela executado com sucesso!";
    return true;
}

bool GerenciadorBanco::listarSelect(QSqlQuery q) {
    if (!q.isActive()) {
        qDebug() << "Erro: QSqlQuery não está ativa. Verifique se o comando foi executado corretamente.";
        qDebug() << "Erro da query:" << q.lastError().text();
        return false; // Retorna falso se a query não estiver ativa
    }

    while (q.next()) {
        QSqlRecord record = q.record(); // Obtém o registro da linha atual
        qDebug() << "------";

        for (int i = 0; i < record.count(); ++i) {
            QString fieldName = record.fieldName(i); // Obtém o nome do campo
            QVariant fieldValue = record.value(i);   // Obtém o valor do campo
            qDebug() << "  " << fieldName << ":" << fieldValue.toString();
        }
    }

    return true;
}
