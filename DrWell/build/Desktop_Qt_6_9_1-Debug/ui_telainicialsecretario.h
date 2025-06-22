/********************************************************************************
** Form generated from reading UI file 'telainicialsecretario.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIALSECRETARIO_H
#define UI_TELAINICIALSECRETARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaInicialSecretario
{
public:
    QPushButton *pushButtonConsultas;
    QPushButton *pushButtonPacientes;
    QLabel *labelNome;
    QLabel *label_2;
    QPushButton *pushButtonSair;
    QLabel *label_3;
    QTableView *tableView;
    QLabel *labelID;

    void setupUi(QWidget *TelaInicialSecretario)
    {
        if (TelaInicialSecretario->objectName().isEmpty())
            TelaInicialSecretario->setObjectName("TelaInicialSecretario");
        TelaInicialSecretario->resize(640, 432);
        pushButtonConsultas = new QPushButton(TelaInicialSecretario);
        pushButtonConsultas->setObjectName("pushButtonConsultas");
        pushButtonConsultas->setGeometry(QRect(30, 150, 151, 29));
        pushButtonPacientes = new QPushButton(TelaInicialSecretario);
        pushButtonPacientes->setObjectName("pushButtonPacientes");
        pushButtonPacientes->setGeometry(QRect(30, 200, 151, 29));
        labelNome = new QLabel(TelaInicialSecretario);
        labelNome->setObjectName("labelNome");
        labelNome->setGeometry(QRect(70, 40, 141, 20));
        label_2 = new QLabel(TelaInicialSecretario);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 63, 20));
        pushButtonSair = new QPushButton(TelaInicialSecretario);
        pushButtonSair->setObjectName("pushButtonSair");
        pushButtonSair->setGeometry(QRect(520, 10, 83, 29));
        label_3 = new QLabel(TelaInicialSecretario);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 100, 121, 20));
        tableView = new QTableView(TelaInicialSecretario);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(330, 140, 281, 251));
        labelID = new QLabel(TelaInicialSecretario);
        labelID->setObjectName("labelID");
        labelID->setGeometry(QRect(250, 40, 63, 20));

        retranslateUi(TelaInicialSecretario);

        QMetaObject::connectSlotsByName(TelaInicialSecretario);
    } // setupUi

    void retranslateUi(QWidget *TelaInicialSecretario)
    {
        TelaInicialSecretario->setWindowTitle(QCoreApplication::translate("TelaInicialSecretario", "Form", nullptr));
        pushButtonConsultas->setText(QCoreApplication::translate("TelaInicialSecretario", "Gerenciar consultas", nullptr));
        pushButtonPacientes->setText(QCoreApplication::translate("TelaInicialSecretario", "Gerenciar pacientes", nullptr));
        labelNome->setText(QCoreApplication::translate("TelaInicialSecretario", "Nome_do_secretario", nullptr));
        label_2->setText(QCoreApplication::translate("TelaInicialSecretario", "Op\303\247\303\265es", nullptr));
        pushButtonSair->setText(QCoreApplication::translate("TelaInicialSecretario", "Sair", nullptr));
        label_3->setText(QCoreApplication::translate("TelaInicialSecretario", "Agenda do dia", nullptr));
        labelID->setText(QCoreApplication::translate("TelaInicialSecretario", "SCT ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicialSecretario: public Ui_TelaInicialSecretario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIALSECRETARIO_H
