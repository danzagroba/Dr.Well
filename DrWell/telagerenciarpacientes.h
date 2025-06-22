#ifndef TELAGERENCIARPACIENTES_H
#define TELAGERENCIARPACIENTES_H

#include <QWidget>
#include <Secretario.h>

namespace Ui {
class TelaGerenciarPacientes;
}

class TelaGerenciarPacientes : public QWidget
{
    Q_OBJECT

public:
    explicit TelaGerenciarPacientes(QWidget *parent = nullptr);
    ~TelaGerenciarPacientes();

    void setSecretario(std::shared_ptr<Secretario> s);

signals:
    void voltarRequisitado();
    void cadastrarRequisitado();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonCadastrar_clicked();

    void on_lineEditPaciente_editingFinished();

    void on_pushButtonRemover_clicked();

    void on_pushButtonEditar_clicked();

private:
    Ui::TelaGerenciarPacientes *ui;
    std::shared_ptr<Secretario> secretario;

    void atualizarLabels();
};

#endif // TELAGERENCIARPACIENTES_H
