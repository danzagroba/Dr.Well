#ifndef TELAHISTORICOMEDICO_H
#define TELAHISTORICOMEDICO_H

#include <QWidget>
#include <Medico.h>

namespace Ui {
class TelaHistoricoMedico;
}

class TelaHistoricoMedico : public QWidget
{
    Q_OBJECT

public:
    explicit TelaHistoricoMedico(QWidget *parent = nullptr);
    ~TelaHistoricoMedico();

    void setMedico(std::shared_ptr<Medico> m);

signals:
    void voltarRequisitado();
    void abrirRequisitado();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonAbrir_clicked();

    void on_lineEditPaciente_editingFinished();

private:
    Ui::TelaHistoricoMedico *ui;
    std::shared_ptr<Medico> medico;

    void atualizarLabels();
};

#endif // TELAHISTORICOMEDICO_H
