/********************************************************************************
** Form generated from reading UI file 'telainicialadministrador.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIALADMINISTRADOR_H
#define UI_TELAINICIALADMINISTRADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaInicialAdministrador
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonSair;
    QLabel *label_3;
    QTableView *tableView;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *TelaInicialAdministrador)
    {
        if (TelaInicialAdministrador->objectName().isEmpty())
            TelaInicialAdministrador->setObjectName("TelaInicialAdministrador");
        TelaInicialAdministrador->resize(624, 420);
        pushButton = new QPushButton(TelaInicialAdministrador);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 150, 151, 29));
        label = new QLabel(TelaInicialAdministrador);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 131, 20));
        label_2 = new QLabel(TelaInicialAdministrador);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 63, 20));
        pushButtonSair = new QPushButton(TelaInicialAdministrador);
        pushButtonSair->setObjectName("pushButtonSair");
        pushButtonSair->setGeometry(QRect(520, 10, 83, 29));
        label_3 = new QLabel(TelaInicialAdministrador);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 100, 121, 20));
        tableView = new QTableView(TelaInicialAdministrador);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(330, 140, 281, 251));
        label_4 = new QLabel(TelaInicialAdministrador);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 40, 63, 20));
        label_5 = new QLabel(TelaInicialAdministrador);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(340, 40, 111, 20));

        retranslateUi(TelaInicialAdministrador);

        QMetaObject::connectSlotsByName(TelaInicialAdministrador);
    } // setupUi

    void retranslateUi(QWidget *TelaInicialAdministrador)
    {
        TelaInicialAdministrador->setWindowTitle(QCoreApplication::translate("TelaInicialAdministrador", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("TelaInicialAdministrador", "Gerenciar usu\303\241rios", nullptr));
        label->setText(QCoreApplication::translate("TelaInicialAdministrador", "Nome_do_adm", nullptr));
        label_2->setText(QCoreApplication::translate("TelaInicialAdministrador", "Op\303\247\303\265es", nullptr));
        pushButtonSair->setText(QCoreApplication::translate("TelaInicialAdministrador", "Sair", nullptr));
        label_3->setText(QCoreApplication::translate("TelaInicialAdministrador", "Agenda do dia", nullptr));
        label_4->setText(QCoreApplication::translate("TelaInicialAdministrador", "ADM ID", nullptr));
        label_5->setText(QCoreApplication::translate("TelaInicialAdministrador", "Departamento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicialAdministrador: public Ui_TelaInicialAdministrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIALADMINISTRADOR_H
