#ifndef TELAINICIALADMINISTRADOR_H
#define TELAINICIALADMINISTRADOR_H

#include <QWidget>

namespace Ui {
class TelaInicialAdministrador;
}

class TelaInicialAdministrador : public QWidget
{
    Q_OBJECT

public:
    explicit TelaInicialAdministrador(QWidget *parent = nullptr);
    ~TelaInicialAdministrador();

signals:
    void sairRequisitado();

private slots:
    void on_pushButtonSair_clicked();

private:
    Ui::TelaInicialAdministrador *ui;
};

#endif // TELAINICIALADMINISTRADOR_H
