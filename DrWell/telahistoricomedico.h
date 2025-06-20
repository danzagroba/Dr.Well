#ifndef TELAHISTORICOMEDICO_H
#define TELAHISTORICOMEDICO_H

#include <QWidget>

namespace Ui {
class TelaHistoricoMedico;
}

class TelaHistoricoMedico : public QWidget
{
    Q_OBJECT

public:
    explicit TelaHistoricoMedico(QWidget *parent = nullptr);
    ~TelaHistoricoMedico();

signals:
    void voltarRequisitado();
    void abrirRequisitado();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonAbrir_clicked();

private:
    Ui::TelaHistoricoMedico *ui;
};

#endif // TELAHISTORICOMEDICO_H
