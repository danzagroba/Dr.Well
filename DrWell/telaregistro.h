#ifndef TELAREGISTRO_H
#define TELAREGISTRO_H

#include <QDialog>

namespace Ui {
class TelaRegistro;
}

class TelaRegistro : public QDialog
{
    Q_OBJECT

public:
    explicit TelaRegistro(QWidget *parent = nullptr);
    ~TelaRegistro();

private:
    Ui::TelaRegistro *ui;
};

#endif // TELAREGISTRO_H
