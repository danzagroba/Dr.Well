#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Clinica.h"
#include "Consulta.h"
//#include "telalogin.h"
//#include "telaregistro.h"
class TelaLogin;
class TelaRegistro;
class TelaAgendaCompleta;
class TelaGerenciarProntuarios;
class TelaHistoricoMedico;
class TelaInicialAdministrador;
class TelaInicialMedico;
class TelaInicialSecretario;




QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void irParaTelaLogin();
    void irParaTelaRegistro();
    void irParaTelaInicialMedico();
    void irParaTelaInicialSecretario();
    void irParaTelaInicialAdministrador();
    void irParaTelaAgendaCompleta();
    void irParaTelaGerenciarProntuarios();
    void irParaTelaHistoricoMedico();

    void irParaTelaInicialUsuario(int id);

private:
    Ui::MainWindow *ui;

    TelaLogin* telaLogin;
    TelaRegistro* telaRegistro;
    TelaAgendaCompleta* telaAgendaCompleta;
    TelaGerenciarProntuarios* telaGerenciarProntuarios;
    TelaHistoricoMedico* telaHistoricoMedico;
    TelaInicialAdministrador* telaInicialAdministrador;
    TelaInicialMedico* telaInicialMedico;
    TelaInicialSecretario* telaInicialSecretario;
};
#endif // MAINWINDOW_H
