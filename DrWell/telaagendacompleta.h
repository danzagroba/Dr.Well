#ifndef TELAAGENDACOMPLETA_H
#define TELAAGENDACOMPLETA_H

#include <QWidget>

namespace Ui {
class telaAgendaCompleta;
}

class telaAgendaCompleta : public QWidget
{
    Q_OBJECT

public:
    explicit telaAgendaCompleta(QWidget *parent = nullptr);
    ~telaAgendaCompleta();

private:
    Ui::telaAgendaCompleta *ui;
};

#endif // TELAAGENDACOMPLETA_H
