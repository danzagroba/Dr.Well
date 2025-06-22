#ifndef TELAAGENDACOMPLETA_H
#define TELAAGENDACOMPLETA_H

#include <QWidget>
#include <Medico.h>

namespace Ui {
class TelaAgendaCompleta;
}

class TelaAgendaCompleta : public QWidget
{
    Q_OBJECT

signals:
    void voltarRequisitado();

public:
    explicit TelaAgendaCompleta(QWidget *parent = nullptr);
    ~TelaAgendaCompleta();

    void setMedico(std::shared_ptr<Medico> m);

private slots:
    void on_pushButtonVoltar_clicked();

    void on_lineEditData_editingFinished();

private:
    Ui::TelaAgendaCompleta *ui;
    std::shared_ptr<Medico> medico;

    void atualizarLabels();
};

#endif // TELAAGENDACOMPLETA_H
