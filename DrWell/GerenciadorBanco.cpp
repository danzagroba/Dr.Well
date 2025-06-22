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
    CREATE TABLE administradores (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        usuario_id INTEGER NOT NULL UNIQUE,
        super_adm BOOL NOT NULL DEFAULT FALSE,

        CONSTRAINT fk_admin_usuario
        FOREIGN KEY (usuario_id)
        REFERENCES usuarios(id)
        ON DELETE CASCADE
    );

    )";

    QString query = R"(
        INSERT INTO medicos (usuario_id, crm, especialidade)
        VALUES (1, 'CRM/PR 12345', 'Cardiologia');
    )";

    // comandoSQL(query);

    QStringList queriesParaExecutar;

    // --- Médico 2: Dra. Helena Furtado ---
    // queriesParaExecutar << R"(
    // SELECT * FROM secretarios;
    // )";
    // queriesParaExecutar << R"(
    // SELECT * FROM medicos;
    // )";
    // queriesParaExecutar << R"(
    // SELECT * FROM administradores;
    // )";

    queriesParaExecutar << R"(
    SELECT u.nome, u.sobrenome, m.crm, m.especialidade FROM usuarios AS u JOIN medicos AS m ON u.id = m.usuario_id;
    )";

    qDebug() << "Iniciando inserção em lote...";
    for (const QString &query : queriesParaExecutar) {
        comandoSQL(query); // Chamando a sua função para cada item da lista
    }

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

bool GerenciadorBanco::listarSelect(QSqlQuery& q) {
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

int GerenciadorBanco::autenticarUsuario(const QString& cpfouemail, const QString& senha) {

    QSqlQuery query(m_db);
    query.prepare("SELECT tipo_usuario, senha, ativo FROM usuarios WHERE (cpf = :identificador OR email = :identificador) AND senha = :senhaParam");
    query.bindValue(":identificador", cpfouemail); // Use um único placeholder se a entrada for um OU outro
    query.bindValue(":senhaParam", senha);

    if (!query.exec()) {
        qDebug() << "Erro ao executar consulta de autenticacao:" << query.lastError().text();
        return -1;
    }

    if (query.next()) {
        bool ativo = query.value("ativo").toBool();
        int tipoUsuario = query.value("tipo_usuario").toInt();

        if (ativo) {
            return tipoUsuario;
        }
    }

    return -1;
}
