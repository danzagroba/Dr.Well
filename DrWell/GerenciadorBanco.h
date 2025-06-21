#ifndef GERENCIADORBANCO_H
#define GERENCIADORBANCO_H

#include <QSqlDatabase>
#include <QString>

class QSqlQuery;

class GerenciadorBanco
{
public:
    static GerenciadorBanco* getInstance();
    bool abrir(const QString& caminho);
    void fechar();
    bool criarTabela(const QString& comandoSql);
    void inicializar();
private:
    GerenciadorBanco();
    ~GerenciadorBanco();

    GerenciadorBanco(const GerenciadorBanco&) = delete;
    GerenciadorBanco& operator=(const GerenciadorBanco&) = delete;

    static GerenciadorBanco* m_instance;
    QSqlDatabase m_db;

    bool comandoSQL(const QString& comando);
    void listarTabela();
};

#endif // GERENCIADORBANCO_H
