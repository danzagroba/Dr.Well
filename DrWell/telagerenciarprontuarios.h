#ifndef TELAGERENCIARPRONTUARIOS_H
#define TELAGERENCIARPRONTUARIOS_H

#include <QWidget>

namespace Ui {
class TelaGerenciarProntuarios;
}

class TelaGerenciarProntuarios : public QWidget
{
    Q_OBJECT

public:
    explicit TelaGerenciarProntuarios(QWidget *parent = nullptr);
    ~TelaGerenciarProntuarios();

private:
    Ui::TelaGerenciarProntuarios *ui;
};

#endif // TELAGERENCIARPRONTUARIOS_H
