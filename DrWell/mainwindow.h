#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Clinica.h"
#include "Consulta.h"
//#include "telalogin.h"
//#include "telaregistro.h"
class TelaLogin;
class TelaRegistro;



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

private:
    Ui::MainWindow *ui;

    TelaLogin* telaLogin;
    TelaRegistro* telaRegistro;
};
#endif // MAINWINDOW_H
