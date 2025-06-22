#ifndef TELAINICIALSECRETARIO_H
#define TELAINICIALSECRETARIO_H

#include <QWidget>
#include <Secretario.h>

namespace Ui {
class TelaInicialSecretario;
}

class TelaInicialSecretario : public QWidget
{
    Q_OBJECT

public:
    explicit TelaInicialSecretario(QWidget *parent = nullptr);
    ~TelaInicialSecretario();

    void setSecretario(std::shared_ptr<Secretario> s);

signals:
    void sairRequisitado();
    void pacientesRequisitado();
    void consultasRequisitado();

private slots:
    void on_pushButtonSair_clicked();

    void on_pushButtonConsultas_clicked();

    void on_pushButtonPacientes_clicked();

private:

    void atualizarLabels();

    Ui::TelaInicialSecretario *ui;
    std::shared_ptr<Secretario> secretario;


};

#endif // TELAINICIALSECRETARIO_H
