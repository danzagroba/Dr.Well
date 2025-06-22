#ifndef GERENCIADORBANCO_H
#define GERENCIADORBANCO_H

#include <QSqlDatabase>
#include <QString>
#include <QSqlQuery>

class QSqlQuery;

class GerenciadorBanco
{
public:
    static GerenciadorBanco* getInstance();
    bool abrir(const QString& caminho);
    void fechar();
    void inicializar();

    int autenticarUsuario(const QString& cpfouemail, const QString& senha);
    bool criarUsuario(const QVariantMap& dadosUsuario, const QVariantMap& dadosEspecificos, int tipo);
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
