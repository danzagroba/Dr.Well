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

signals:
    void agendaRequisitada();
    void prontuarioRequisitado();
    void historicoRequisitado();
    void sairRequisitado();

private slots:
    void on_pushButtonAgenda_clicked();

    void on_pushButtonProntuario_clicked();

    void on_pushButtonHistorico_clicked();

    void on_pushButtonSair_clicked();

private:
    Ui::TelaInicialMedico *ui;
};

#endif // TELAINICIALMEDICO_H
