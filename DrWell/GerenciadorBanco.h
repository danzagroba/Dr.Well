#ifndef GERENCIADORBANCO_H
#define GERENCIADORBANCO_H

#include <QSqlDatabase>
#include <QString>
#include <QSqlQuery>
#include <QList>
#include <QDate>

#include "Medico.h"
#include "Secretario.h"
#include "Administrador.h"
#include "Consulta.h"

class QSqlQuery;

class GerenciadorBanco
{
public:
    static GerenciadorBanco* getInstance();
    bool abrir(const QString& caminho);
    void fechar();
    void inicializar();

    std::shared_ptr<Usuario> autenticarUsuario(const QString& cpfouemail, const QString& senha, int &tipo);
    bool criarUsuario(const QVariantMap& dadosUsuario, const QVariantMap& dadosEspecificos, int tipo);
    std::shared_ptr<Usuario> recuperarUsuarioPorCpf(const QString& cpf, const int tipo);

    QList<Consulta> recuperarConsultasDia(const QDate& data);
    QList<Consulta> recuperarConsultasMedico(const QString& cpf, const QDate& data = QDate()); // QDate() é uma data nula/inválida
    QList<Consulta> recuperarConsultasPaciente(int id_paciente, const QDate& data = QDate());

private:
    GerenciadorBanco();
    ~GerenciadorBanco();

    GerenciadorBanco(const GerenciadorBanco&) = delete;
    GerenciadorBanco& operator=(const GerenciadorBanco&) = delete;

    static GerenciadorBanco* m_instance;
    QSqlDatabase m_db;

    bool comandoSQL(const QString& comando);
    bool listarSelect(QSqlQuery& q);
};

#endif // GERENCIADORBANCO_H
