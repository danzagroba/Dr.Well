#ifndef TELAGERENCIARPACIENTES_H
#define TELAGERENCIARPACIENTES_H

#include <QWidget>

namespace Ui {
class TelaGerenciarPacientes;
}

class TelaGerenciarPacientes : public QWidget
{
    Q_OBJECT

public:
    explicit TelaGerenciarPacientes(QWidget *parent = nullptr);
    ~TelaGerenciarPacientes();

signals:
    void voltarRequisitado();
    void cadastrarRequisitado();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonCadastrar_clicked();

private:
    Ui::TelaGerenciarPacientes *ui;
};

#endif // TELAGERENCIARPACIENTES_H
