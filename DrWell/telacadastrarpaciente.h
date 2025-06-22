#ifndef TELACADASTRARPACIENTE_H
#define TELACADASTRARPACIENTE_H

#include <QWidget>

namespace Ui {
class TelaCadastrarPaciente;
}

class TelaCadastrarPaciente : public QWidget
{
    Q_OBJECT

public:
    explicit TelaCadastrarPaciente(QWidget *parent = nullptr);
    ~TelaCadastrarPaciente();

signals:
    void voltarRequisitado();

private slots:
    void on_pushButtonVoltar_clicked();

private:
    Ui::TelaCadastrarPaciente *ui;
};

#endif // TELACADASTRARPACIENTE_H
