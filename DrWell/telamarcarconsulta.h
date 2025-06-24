#ifndef TELAMARCARCONSULTA_H
#define TELAMARCARCONSULTA_H

#include <QWidget>

namespace Ui {
class TelaMarcarConsulta;
}

class TelaMarcarConsulta : public QWidget
{
    Q_OBJECT

public:
    explicit TelaMarcarConsulta(QWidget *parent = nullptr);
    ~TelaMarcarConsulta();

signals:
    void voltarRequisitado();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonMarcar_clicked();

private:
    Ui::TelaMarcarConsulta *ui;
};

#endif // TELAMARCARCONSULTA_H
