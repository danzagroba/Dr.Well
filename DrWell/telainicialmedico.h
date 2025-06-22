#ifndef TELAINICIALMEDICO_H
#define TELAINICIALMEDICO_H

#include <QWidget>
#include <Medico.h>

namespace Ui {
class TelaInicialMedico;
}

class TelaInicialMedico : public QWidget
{
    Q_OBJECT

public:
    explicit TelaInicialMedico(QWidget *parent = nullptr);
    ~TelaInicialMedico();

    void setMedico(std::shared_ptr<Medico> m);

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
    std::shared_ptr<Medico> medico;

    void atualizarLabels();
};

#endif // TELAINICIALMEDICO_H
