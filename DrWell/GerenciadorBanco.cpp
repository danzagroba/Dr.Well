#include "GerenciadorBanco.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

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

bool GerenciadorBanco::criarTabela(const QString& comandoSql)
{
    if (!m_db.isOpen()) {
        qDebug() << "Erro -- Base de dados nao aberta";
        return false;
    }
    QSqlQuery query(m_db);
    if (!query.exec(comandoSql)) {
        qDebug() << "Erro ao criar tabela:" << query.lastError().text();
        return false;
    }

    qDebug() << "Comando de tabela executado com sucesso!";
    return true;
}

void GerenciadorBanco::inicializar(){
    QString sqlUsuarios = R"(
        CREATE TABLE IF NOT EXISTS usuarios (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            nome TEXT NOT NULL
        )
        )";
    qDebug() << "Inicializando: Verificando/Criando tabela de Usuários...";
    this->criarTabela(sqlUsuarios);
}
