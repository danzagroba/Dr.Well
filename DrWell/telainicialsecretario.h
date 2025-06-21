#ifndef TELAINICIALSECRETARIO_H
#define TELAINICIALSECRETARIO_H

#include <QWidget>

namespace Ui {
class TelaInicialSecretario;
}

class TelaInicialSecretario : public QWidget
{
    Q_OBJECT

public:
    explicit TelaInicialSecretario(QWidget *parent = nullptr);
    ~TelaInicialSecretario();

signals:
    void sairRequisitado();
    void pacientesRequisitado();
    void consultasRequisitado();

private slots:
    void on_pushButtonSair_clicked();

    void on_pushButtonConsultas_clicked();

    void on_pushButtonPacientes_clicked();

private:
    Ui::TelaInicialSecretario *ui;
};

#endif // TELAINICIALSECRETARIO_H
