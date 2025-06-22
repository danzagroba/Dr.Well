#ifndef TELAGERENCIARPRONTUARIOS_H
#define TELAGERENCIARPRONTUARIOS_H

#include <QWidget>
#include <Medico.h>
namespace Ui {
class TelaGerenciarProntuarios;
}

class TelaGerenciarProntuarios : public QWidget
{
    Q_OBJECT

public:
    explicit TelaGerenciarProntuarios(QWidget *parent = nullptr);
    ~TelaGerenciarProntuarios();

    void setMedico(std::shared_ptr<Medico> m);

signals:
    void voltarRequisitado();
    void abrirRequisitado();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonAbrir_clicked();

    void on_lineEditPaciente_editingFinished();

private:
    Ui::TelaGerenciarProntuarios *ui;
    std::shared_ptr<Medico> medico;

    void atualizarLabels();
};

#endif // TELAGERENCIARPRONTUARIOS_H
