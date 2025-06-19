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

private:
    Ui::TelaInicialAdministrador *ui;
};

#endif // TELAINICIALADMINISTRADOR_H
