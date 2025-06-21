#ifndef TELAGERENCIARCONSULTAS_H
#define TELAGERENCIARCONSULTAS_H

#include <QWidget>

namespace Ui {
class TelaGerenciarConsultas;
}

class TelaGerenciarConsultas : public QWidget
{
    Q_OBJECT

public:
    explicit TelaGerenciarConsultas(QWidget *parent = nullptr);
    ~TelaGerenciarConsultas();

signals:
    void voltarRequisitado();
    void marcarRequisitado();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonMarcar_clicked();

private:
    Ui::TelaGerenciarConsultas *ui;
};

#endif // TELAGERENCIARCONSULTAS_H
