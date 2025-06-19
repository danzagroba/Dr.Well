#ifndef TELAINICIALMEDICO_H
#define TELAINICIALMEDICO_H

#include <QWidget>

namespace Ui {
class TelaInicialMedico;
}

class TelaInicialMedico : public QWidget
{
    Q_OBJECT

public:
    explicit TelaInicialMedico(QWidget *parent = nullptr);
    ~TelaInicialMedico();

private:
    Ui::TelaInicialMedico *ui;
};

#endif // TELAINICIALMEDICO_H
