#ifndef TELAHISTORICOMEDICO_H
#define TELAHISTORICOMEDICO_H

#include <QWidget>

namespace Ui {
class telaVisualizarPaciente;
}

class telaVisualizarPaciente : public QWidget
{
    Q_OBJECT

public:
    explicit telaVisualizarPaciente(QWidget *parent = nullptr);
    ~telaVisualizarPaciente();

private:
    Ui::telaVisualizarPaciente *ui;
};

#endif // TELAHISTORICOMEDICO_H
