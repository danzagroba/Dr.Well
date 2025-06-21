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

    QString query1 = R"(
        INSERT INTO pessoas (cpf, nome, sobrenome, telefone, data_nasc)
        VALUES ('88833388899', 'Joao', 'Klug', '41882299372', '2004-01-24');
    )";

    comandoSQL(query1);


    QString query = "SELECT * FROM pessoas;";

    QSqlQuery querySelect(m_db);
    if (!querySelect.exec(query)) {
        qWarning() << "Erro ao executar o SELECT:" << querySelect.lastError().text();
        return; // Sai da função se a consulta falhar
    }
    const int LARGURA_ID = 5;
    const int LARGURA_CPF = 15;
    const int LARGURA_NOME = 20;
    const int LARGURA_SOBRENOME = 25;
    const int LARGURA_TELEFONE = 20;
    const int LARGURA_DATA = 12;
    QString cabecalho = QString("ID").leftJustified(LARGURA_ID)
                        + QString("CPF").leftJustified(LARGURA_CPF)
                        + QString("NOME").leftJustified(LARGURA_NOME)
                        + QString("SOBRENOME").leftJustified(LARGURA_SOBRENOME)
                        + QString("TELEFONE").leftJustified(LARGURA_TELEFONE)
                        + QString("DATA NASC").leftJustified(LARGURA_DATA);
    qDebug().noquote() << cabecalho;
    qDebug().noquote() << QString(cabecalho.length(), '-');

    while (querySelect.next()) {
        // 1. Coleta dos dados (como você já faz)
        int id = querySelect.value("id").toInt();
        QString cpf = querySelect.value("cpf").toString();
        QString nome = querySelect.value("nome").toString();
        QString sobrenome = querySelect.value("sobrenome").toString();
        QString telefone = querySelect.value("telefone").toString();
        QDate data_nasc = querySelect.value("data_nasc").toDate();

        // 2. Formatação dos dados em strings com largura fixa
        QString id_str = QString::number(id).leftJustified(LARGURA_ID);
        QString cpf_str = cpf.leftJustified(LARGURA_CPF);
        QString nome_str = nome.leftJustified(LARGURA_NOME);
        QString sobrenome_str = sobrenome.leftJustified(LARGURA_SOBRENOME);
        QString telefone_str = telefone.leftJustified(LARGURA_TELEFONE);
        QString data_str = data_nasc.toString("dd/MM/yyyy").leftJustified(LARGURA_DATA);

        // 3. Concatena tudo em uma única linha e imprime
        QString linha_formatada = id_str + cpf_str + nome_str + sobrenome_str + telefone_str + data_str;

        qDebug().noquote() << linha_formatada;
    }

    // while (querySelect.next()) {
    //     int id = querySelect.value("id").toInt();
    //     QString nome = querySelect.value("nome").toString();
    //     QString cpf = querySelect.value("cpf").toString();
    //     QString sobrenome = querySelect.value("sobrenome").toString();
    //     QString telefone = querySelect.value("telefone").toString();
    //     QDate data_nasc = querySelect.value("data_nasc").toDate();

    //     // Imprime os dados no console de 'Saída da Aplicação'
    //     qDebug() << "ID     CPF    ";
    //     qDebug() << "ID:" << id << "| CPF:" << cpf
    //              << "| Nome:" << nome << "| Sobrenome:"
    //              << sobrenome << "| Telefone:" << telefone
    //              << "| Data Nasc:" << data_nasc.toString("dd/MM/yyyy");
    // }
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

void listarTabela() {
    // // --- 3. CONSULTAR E IMPRIMIR OS DADOS ---
    // qDebug() << "\n--- Conteúdo Atual da Tabela 'usuarios' ---";
    // QString sqlSelect = "SELECT id, nome FROM usuarios";

    // QSqlQuery querySelect(m_db);
    // if (!querySelect.exec(sqlSelect)) {
    //     qWarning() << "Erro ao executar o SELECT:" << querySelect.lastError().text();
    //     return; // Sai da função se a consulta falhar
    // }

    // // Loop para percorrer cada linha do resultado
    // while (querySelect.next()) {
    //     int id = querySelect.value("id").toInt();
    //     QString nome = querySelect.value("nome").toString();

    //     // Imprime os dados no console de 'Saída da Aplicação'
    //     qDebug() << "ID:" << id << "| Nome:" << nome;
    // }
    // qDebug() << "------------------------------------------\n";
}
