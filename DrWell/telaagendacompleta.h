#ifndef TELAAGENDACOMPLETA_H
#define TELAAGENDACOMPLETA_H

#include <QWidget>

namespace Ui {
class TelaAgendaCompleta;
}

class TelaAgendaCompleta : public QWidget
{
    Q_OBJECT

public:
    explicit TelaAgendaCompleta(QWidget *parent = nullptr);
    ~TelaAgendaCompleta();

private:
    Ui::TelaAgendaCompleta *ui;
};

#endif // TELAAGENDACOMPLETA_H
