#ifndef TELAGERENCIARPRONTUARIOS_H
#define TELAGERENCIARPRONTUARIOS_H

#include <QWidget>

namespace Ui {
class telaGerenciarProntuarios;
}

class telaGerenciarProntuarios : public QWidget
{
    Q_OBJECT

public:
    explicit telaGerenciarProntuarios(QWidget *parent = nullptr);
    ~telaGerenciarProntuarios();

private:
    Ui::telaGerenciarProntuarios *ui;
};

#endif // TELAGERENCIARPRONTUARIOS_H
