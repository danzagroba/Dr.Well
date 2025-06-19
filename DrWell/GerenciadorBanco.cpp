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
    this->criarTabela(sqlUsuarios);

    // QString sqlInsereExemplo = R"(
    //     INSERT INTO usuarios (nome) VALUES ('João Gabriel Klug Teixeira');
    // )";
    QString sqlInsereExemplo = R"(
        DELETE FROM usuarios WHERE nome = 'Daniel';
    )";

    qDebug() << "Inicializando: Verificando/Criando tabela de Usuários...";

    // Criamos um objeto de query para executar o comando INSERT
    QSqlQuery queryInsert(m_db); // Associa a query com nossa conexão m_db
    if (!queryInsert.prepare(sqlInsereExemplo)) {
        qWarning() << "Erro ao preparar o INSERT:" << queryInsert.lastError().text();
    }
    if (!queryInsert.exec()) {
        qWarning() << "Erro ao executar o INSERT:" << queryInsert.lastError().text();
    }

    // --- 3. CONSULTAR E IMPRIMIR OS DADOS ---
    qDebug() << "\n--- Conteúdo Atual da Tabela 'usuarios' ---";
    QString sqlSelect = "SELECT id, nome FROM usuarios";

    QSqlQuery querySelect(m_db);
    if (!querySelect.exec(sqlSelect)) {
        qWarning() << "Erro ao executar o SELECT:" << querySelect.lastError().text();
        return; // Sai da função se a consulta falhar
    }

    // Loop para percorrer cada linha do resultado
    while (querySelect.next()) {
        int id = querySelect.value("id").toInt();
        QString nome = querySelect.value("nome").toString();

        // Imprime os dados no console de 'Saída da Aplicação'
        qDebug() << "ID:" << id << "| Nome:" << nome;
    }
    qDebug() << "------------------------------------------\n";
}
