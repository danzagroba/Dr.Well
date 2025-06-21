#include "mainwindow.h"
#include "GerenciadorBanco.h"
#include <QApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GerenciadorBanco* dbManager = GerenciadorBanco::getInstance();
    if (!dbManager->abrir("drwell.db")) {
        qCritical() << "Critico: nao foi possivel iniciar a base";
        return -1;
    }
    dbManager->inicializar();

    MainWindow w;
    w.show();
    return a.exec();
}
