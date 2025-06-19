#ifndef TELAREGISTRO_H
#define TELAREGISTRO_H

#include <QWidget>

namespace Ui {
class TelaRegistro;
}

class TelaRegistro : public QWidget
{
    Q_OBJECT

public:
    explicit TelaRegistro(QWidget *parent = nullptr);
    ~TelaRegistro();

private:
    Ui::TelaRegistro *ui;
};

#endif // TELAREGISTRO_H
