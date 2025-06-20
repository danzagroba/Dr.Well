#ifndef TELAAGENDACOMPLETA_H
#define TELAAGENDACOMPLETA_H

#include <QWidget>

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

private slots:
    void on_pushButtonVoltar_clicked();

private:
    Ui::TelaAgendaCompleta *ui;
};

#endif // TELAAGENDACOMPLETA_H
