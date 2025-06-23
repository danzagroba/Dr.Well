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
    SELECT u.nome, u.sobrenome, u.cpf, m.crm, m.especialidade FROM usuarios AS u JOIN medicos AS m ON u.id = m.usuario_id;
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

std::shared_ptr<Usuario> GerenciadorBanco::autenticarUsuario(const QString& cpfouemail, const QString& senha, int &tipo) {

    QSqlQuery query(m_db);
    query.prepare("SELECT ativo FROM usuarios WHERE (cpf = :identificador OR email = :identificador) AND senha_hash = :senhaParam");
    query.bindValue(":identificador", cpfouemail);
    query.bindValue(":senhaParam", senha);

    if (!query.exec()) {
        qDebug() << "Erro ao executar consulta de autenticacao:" << query.lastError().text();
        return nullptr;
    }

    if (query.next()) {
        bool ativo = query.value("ativo").toBool();

        if (ativo) {


            QSqlQuery medicoQuery(m_db);
            medicoQuery.prepare("SELECT U.id FROM usuarios AS U JOIN medicos AS A ON U.id = A.usuario_id WHERE U.cpf = :identificador OR U.email = :identificador");
            medicoQuery.bindValue(":identificador", cpfouemail);

            if (medicoQuery.exec()) {
                if (medicoQuery.next()) {
                    qDebug() << "Usuario e um Medico.";
                    tipo = 1; // Retorna 1 para Médico
                    return recuperarUsuarioPorCpf(cpfouemail, tipo);
                }
            } else {
                qDebug() << "Erro na query de Medico: " << medicoQuery.lastError().text();
            }

            QSqlQuery secretarioQuery(m_db);
            secretarioQuery.prepare("SELECT U.id FROM usuarios AS U JOIN secretarios AS A ON U.id = A.usuario_id WHERE U.cpf = :identificador OR U.email = :identificador");
            secretarioQuery.bindValue(":identificador", cpfouemail);
            if (secretarioQuery.exec()) {
                if (secretarioQuery.next()) {
                    qDebug() << "Usuario e um Secretario.";
                    tipo = 2;
                    return recuperarUsuarioPorCpf(cpfouemail, tipo);
                }
            } else {
                qDebug() << "Erro na query de Secretario: " << secretarioQuery.lastError().text();
            }

            QSqlQuery administradorQuery(m_db);
            administradorQuery.prepare("SELECT U.id FROM usuarios AS U JOIN administradores AS A ON U.id = A.usuario_id WHERE U.cpf = :identificador OR U.email = :identificador");
            administradorQuery.bindValue(":identificador", cpfouemail);
            if (administradorQuery.exec()) {
                if (administradorQuery.next()) {
                    qDebug() << "Usuario e um Administrador.";
                    tipo = 3;
                    return recuperarUsuarioPorCpf(cpfouemail, tipo);
                }
            } else {
                qDebug() << "Erro na query de Administrador: " << administradorQuery.lastError().text();
            }
        }
    }
    return nullptr;
}

bool GerenciadorBanco::criarUsuario(const QVariantMap& dadosUsuario, const QVariantMap& dadosEspecificos, int tipo) {

    if (!m_db.transaction()) {
        qDebug() << "Falha ao iniciar a transacao:" << m_db.lastError().text();
        return false;
    }

    int novoUsuarioId = -1;

    {
        QSqlQuery queryUsuario(m_db);
        queryUsuario.prepare("INSERT INTO usuarios (nome, sobrenome, cpf, email, senha_hash, telefone, data_nasc, salario, ativo) "
                             "VALUES (:nome, :sobrenome, :cpf, :email, :senha_hash, :telefone, :data_nasc, :salario, :ativo)");

        queryUsuario.bindValue(":nome", dadosUsuario["nome"]);
        queryUsuario.bindValue(":sobrenome", dadosUsuario["sobrenome"]);
        queryUsuario.bindValue(":cpf", dadosUsuario["cpf"]);
        queryUsuario.bindValue(":email", dadosUsuario["email"]);
        queryUsuario.bindValue(":senha_hash", dadosUsuario["senha_hash"]);
        queryUsuario.bindValue(":telefone", dadosUsuario["telefone"]);
        queryUsuario.bindValue(":data_nasc", dadosUsuario["data_nasc"]);
        queryUsuario.bindValue(":salario", dadosUsuario["salario"]);
        queryUsuario.bindValue(":ativo", dadosUsuario.value("ativo", true));

        if (!queryUsuario.exec()) {
            qDebug() << "Falha ao inserir na tabela usuarios:" << queryUsuario.lastError().text();
            m_db.rollback();
            return false;
        }
        novoUsuarioId = queryUsuario.lastInsertId().toLongLong();
        if (novoUsuarioId <= 0) {
            qDebug() << "Nao foi possivel obter o ID do ultimo usuario inserido.";
            m_db.rollback();
            return false;
        }
    }
    QSqlQuery queryTipo(m_db);
    QString sqlTipo;
    switch (tipo) {
    case 2:
        sqlTipo = "INSERT INTO medicos (usuario_id, crm, especialidade) VALUES (:usuario_id, :crm, :especialidade)";
        queryTipo.prepare(sqlTipo);
        queryTipo.bindValue(":crm", dadosEspecificos["crm"]);
        queryTipo.bindValue(":especialidade", dadosEspecificos["especialidade"]);
        break;

    case 1:
        sqlTipo = "INSERT INTO secretarios (usuario_id, ramal) VALUES (:usuario_id, :ramal)";
        queryTipo.prepare(sqlTipo);
        queryTipo.bindValue(":ramal", dadosEspecificos["ramal"]);
        break;

    case 0:
        sqlTipo = "INSERT INTO administradores (usuario_id, super_adm) VALUES (:usuario_id, :super_adm)";
        queryTipo.prepare(sqlTipo);
        queryTipo.bindValue(":super_adm", dadosEspecificos.value("super_adm", false));
        break;

    default:
        qDebug() << "Tipo de usuario invalido fornecido.";
        m_db.rollback();
        return false;
    }

    queryTipo.bindValue(":usuario_id", novoUsuarioId);

    if (!queryTipo.exec()) {
        qDebug() << "Falha ao inserir na tabela de tipo:" << queryTipo.lastError().text();
        m_db.rollback();
        return false;
    }
    if (!m_db.commit()) {
        qDebug() << "Falha ao comitar a transacao:" << m_db.lastError().text();
        m_db.rollback();
        return false;
    }

    qDebug() << "Usuario e seu tipo cadastrados com sucesso! ID do usuario:" << novoUsuarioId;
    return true;
}

std::shared_ptr<Usuario> GerenciadorBanco::recuperarUsuarioPorCpf(const QString& cpf, const int tipo)  {

    QSqlQuery query(m_db);
    QString sql;

    // 2. Monta a query com o JOIN apropriado baseado no cargo.
    if (tipo == 1) {
        sql = "SELECT u.nome,u.sobrenome, u.email, u.telefone, m.crm, m.especialidade "
              "FROM usuarios AS u JOIN medicos AS m ON u.id = m.usuario_id "
              "WHERE u.cpf = :cpf";
    } else if (tipo ==  2) {
        sql = "SELECT u.nome,u.sobrenome, u.email, u.telefone, s.ramal "
              "FROM usuarios AS u JOIN secretarios AS s ON u.id = s.usuario_id "
              "WHERE u.cpf = :cpf";
    } else if (tipo == 3) {
        sql = "SELECT u.id, u.nome,u.sobrenome, u.email, u.telefone, a.super_adm "
              "FROM usuarios AS u JOIN administradores AS a ON u.id = a.usuario_id "
              "WHERE u.cpf = :cpf";
    }

    query.prepare(sql);
    query.bindValue(":cpf", cpf);

    if (!query.exec() || !query.next()) {
        qDebug() << "recuperarUsuarioPorCpf falhou ao executar a query JOIN para o CPF:" << cpf;
        return nullptr;
    }

    // 3. Extrai os dados e cria o objeto correto.
    std::string nome = query.value("nome").toString().toStdString() + " " + query.value("sobrenome").toString().toStdString() ;
    std::string email = query.value("email").toString().toStdString();
    std::string cpfStdStr = cpf.toStdString();
    //int telefone = query.value("telefone").toInt();

    if (tipo == 1) {
        std::string crm = query.value("crm").toString().toStdString();
        // std::string especialidade = query.value("especialidade").toString().toStdString(); // Descomente se precisar
        return std::make_shared<Medico>(crm, nome, cpfStdStr, email);
    } else if (tipo == 2) {
        int ramal = query.value("ramal").toInt();
        return std::make_shared<Secretario>(nome, cpfStdStr, email, ramal);
    } else if (tipo == 3) {
        bool isSuper = query.value("super_adm").toBool();
        int id = query.value("id").toInt();
        return std::make_shared<Administrador>(id,nome, cpfStdStr, email, isSuper);
    }

    return nullptr; // Fallback de segurança
}

QList<Consulta> GerenciadorBanco::recuperarConsultasMedico(const QString& medico_crm, const QDate& data) {
    QList<Consulta> consultas;
    if (!m_db.isOpen()) {
        qDebug() << "Banco de dados não está aberto.";
        return consultas;
    }

    // A query agora faz JOIN com a tabela de pacientes usando o id_paciente
    // e filtra pelo crm do médico diretamente na tabela de consultas.
    QString sql = R"(
        SELECT c.id, c.data_hora, c.status, c.preco_consulta, c.crm AS medico_crm, p.nome AS paciente_nome
        FROM consultas c
        JOIN pacientes p ON c.id_paciente = p.id
        WHERE c.crm = :crm
    )";

    if (data.isValid()) {
        sql += " AND DATE(c.data_hora) = :data";
    }

    QSqlQuery query(m_db);
    query.prepare(sql);
    query.bindValue(":crm", medico_crm);

    if (data.isValid()) {
        query.bindValue(":data", data.toString(Qt::ISODate));
    }

    if (!query.exec()) {
        qDebug() << "Erro ao buscar consultas do médico:" << query.lastError().text();
        return consultas;
    }

    while (query.next()) {
        int id = query.value("id").toInt();
        QDateTime dataHoraQt = query.value("data_hora").toDateTime();
        Horario dataHora = Consulta::fromQDateTime(dataHoraQt);
        float custo = query.value("preco_consulta").toFloat();
        std::string status = query.value("status").toString().toStdString();
        std::string crm = query.value("medico_crm").toString().toStdString();
        std::string pacienteNome = query.value("paciente_nome").toString().toStdString();

        consultas.append(Consulta(id, dataHora, custo, status, crm, pacienteNome));
        qDebug() << "Achou:" << query.lastError().text();
    }

    return consultas;
}

QList<Consulta> GerenciadorBanco::recuperarConsultasPaciente(int id_paciente, const QDate& data) {
    QList<Consulta> consultas;
    if (!m_db.isOpen()) {
        qDebug() << "Banco de dados não está aberto.";
        return consultas;
    }

    // A query agora junta com a tabela de pacientes para obter o nome
    QString sql = R"(
        SELECT c.id, c.data_hora, c.status, c.custo, c.crm AS medico_crm, p.nome AS paciente_nome
        FROM consultas c
        JOIN pacientes p ON c.id_paciente = p.id
        WHERE c.id_paciente = :id_paciente
    )";

    if (data.isValid()) {
        sql += " AND DATE(c.data_hora) = :data";
    }

    QSqlQuery query(m_db);
    query.prepare(sql);
    query.bindValue(":id_paciente", id_paciente);

    if (data.isValid()) {
        query.bindValue(":data", data.toString(Qt::ISODate));
    }

    if (!query.exec()) {
        qDebug() << "Erro ao buscar consultas do paciente:" << query.lastError().text();
        return consultas;
    }

    while (query.next()) {
        int id = query.value("id").toInt();
        QDateTime dataHoraQt = query.value("data_hora").toDateTime();
        Horario dataHora = Consulta::fromQDateTime(dataHoraQt);
        float custo = query.value("custo").toFloat();
        std::string status = query.value("status").toString().toStdString();
        std::string crm = query.value("medico_crm").toString().toStdString();
        std::string pacienteNome = query.value("paciente_nome").toString().toStdString();

        consultas.append(Consulta(id, dataHora, custo, status, crm, pacienteNome));
    }

    return consultas;
}

QList<Consulta> GerenciadorBanco::recuperarConsultasDia(const QDate& data) {
    QList<Consulta> consultas;
    if (!m_db.isOpen() || !data.isValid()) {
        qDebug() << "Banco de dados não aberto ou data inválida.";
        return consultas;
    }

    // A query agora junta com a tabela de pacientes para obter o nome
    QSqlQuery query(m_db);
    query.prepare(R"(
        SELECT c.id, c.data_hora, c.status, c.custo, c.crm AS medico_crm, p.nome AS paciente_nome
        FROM consultas c
        JOIN pacientes p ON c.id_paciente = p.id
        WHERE DATE(c.data_hora) = :data
    )");
    query.bindValue(":data", data.toString(Qt::ISODate));

    if (!query.exec()) {
        qDebug() << "Erro ao buscar consultas do dia:" << query.lastError().text();
        return consultas;
    }

    while (query.next()) {
        int id = query.value("id").toInt();
        QDateTime dataHoraQt = query.value("data_hora").toDateTime();
        Horario dataHora = Consulta::fromQDateTime(dataHoraQt);
        float custo = query.value("custo").toFloat();
        std::string status = query.value("status").toString().toStdString();
        std::string crm = query.value("medico_crm").toString().toStdString();
        std::string pacienteNome = query.value("paciente_nome").toString().toStdString();

        consultas.append(Consulta(id, dataHora, custo, status, crm, pacienteNome));
    }

    return consultas;
}

