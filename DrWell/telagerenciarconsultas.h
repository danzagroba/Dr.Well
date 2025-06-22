#ifndef TELAGERENCIARCONSULTAS_H
#define TELAGERENCIARCONSULTAS_H

#include <QWidget>
#include <Secretario.h>

namespace Ui {
class TelaGerenciarConsultas;
}

class TelaGerenciarConsultas : public QWidget
{
    Q_OBJECT

public:
    explicit TelaGerenciarConsultas(QWidget *parent = nullptr);
    ~TelaGerenciarConsultas();

    void setSecretario(std::shared_ptr<Secretario> s);
signals:
    void voltarRequisitado();
    void marcarRequisitado();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonMarcar_clicked();

    void on_lineEditConsulta_editingFinished();

    void on_pushButtonEditar_clicked();

    void on_pushButtonConfirmar_clicked();

    void on_pushButtonCancelar_clicked();

private:
    Ui::TelaGerenciarConsultas *ui;
    std::shared_ptr<Secretario> secretario;

    void atualizarLabels();
};

#endif // TELAGERENCIARCONSULTAS_H
