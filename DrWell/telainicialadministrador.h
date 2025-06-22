#ifndef TELAINICIALADMINISTRADOR_H
#define TELAINICIALADMINISTRADOR_H

#include <QWidget>
#include <Administrador.h>

namespace Ui {
class TelaInicialAdministrador;
}

class TelaInicialAdministrador : public QWidget
{
    Q_OBJECT

public:
    explicit TelaInicialAdministrador(QWidget *parent = nullptr);
    ~TelaInicialAdministrador();

    void setAdministrador(std::shared_ptr<Administrador> a);
signals:
    void sairRequisitado();

private slots:
    void on_pushButtonSair_clicked();

private:

    void atualizarLabels();

    Ui::TelaInicialAdministrador *ui;
    std::shared_ptr<Administrador> administrador;
};

#endif // TELAINICIALADMINISTRADOR_H
