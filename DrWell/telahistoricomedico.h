#ifndef TELAHISTORICOMEDICO_H
#define TELAHISTORICOMEDICO_H

#include <QWidget>

namespace Ui {
class TelaHistoricoMedico;
}

class TelaVisualizarPaciente : public QWidget
{
    Q_OBJECT

public:
    explicit TelaVisualizarPaciente(QWidget *parent = nullptr);
    ~TelaVisualizarPaciente();

private:
    Ui::TelaHistoricoMedico *ui;
};

#endif // TELAHISTORICOMEDICO_H
