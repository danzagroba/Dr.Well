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

signals:
    void confirmarRequisitado();

private slots:
    void on_pushButtonConfirmar_clicked();

    void on_pushButtonConfirmar_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::TelaRegistro *ui;
};

#endif // TELAREGISTRO_H
