/********************************************************************************
** Form generated from reading UI file 'telainicialmedico.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIALMEDICO_H
#define UI_TELAINICIALMEDICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaInicialMedico
{
public:
    QLabel *labelNome;
    QLabel *labelOpcoes;
    QPushButton *pushButtonAgenda;
    QTableView *tableView;
    QLabel *labelAgenda;
    QPushButton *pushButtonProntuario;
    QPushButton *pushButtonHistorico;
    QLabel *labelCRM;
    QPushButton *pushButtonSair;

    void setupUi(QWidget *TelaInicialMedico)
    {
        if (TelaInicialMedico->objectName().isEmpty())
            TelaInicialMedico->setObjectName("TelaInicialMedico");
        TelaInicialMedico->resize(644, 476);
        labelNome = new QLabel(TelaInicialMedico);
        labelNome->setObjectName("labelNome");
        labelNome->setGeometry(QRect(90, 50, 131, 20));
        labelOpcoes = new QLabel(TelaInicialMedico);
        labelOpcoes->setObjectName("labelOpcoes");
        labelOpcoes->setGeometry(QRect(50, 110, 63, 20));
        pushButtonAgenda = new QPushButton(TelaInicialMedico);
        pushButtonAgenda->setObjectName("pushButtonAgenda");
        pushButtonAgenda->setGeometry(QRect(50, 160, 151, 29));
        tableView = new QTableView(TelaInicialMedico);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(350, 150, 281, 251));
        labelAgenda = new QLabel(TelaInicialMedico);
        labelAgenda->setObjectName("labelAgenda");
        labelAgenda->setGeometry(QRect(360, 110, 121, 20));
        pushButtonProntuario = new QPushButton(TelaInicialMedico);
        pushButtonProntuario->setObjectName("pushButtonProntuario");
        pushButtonProntuario->setGeometry(QRect(50, 220, 151, 29));
        pushButtonHistorico = new QPushButton(TelaInicialMedico);
        pushButtonHistorico->setObjectName("pushButtonHistorico");
        pushButtonHistorico->setGeometry(QRect(50, 280, 151, 29));
        labelCRM = new QLabel(TelaInicialMedico);
        labelCRM->setObjectName("labelCRM");
        labelCRM->setGeometry(QRect(270, 50, 63, 20));
        pushButtonSair = new QPushButton(TelaInicialMedico);
        pushButtonSair->setObjectName("pushButtonSair");
        pushButtonSair->setGeometry(QRect(540, 20, 83, 29));

        retranslateUi(TelaInicialMedico);

        QMetaObject::connectSlotsByName(TelaInicialMedico);
    } // setupUi

    void retranslateUi(QWidget *TelaInicialMedico)
    {
        TelaInicialMedico->setWindowTitle(QCoreApplication::translate("TelaInicialMedico", "Form", nullptr));
        labelNome->setText(QCoreApplication::translate("TelaInicialMedico", "Nome_do_medico", nullptr));
        labelOpcoes->setText(QCoreApplication::translate("TelaInicialMedico", "Op\303\247\303\265es", nullptr));
        pushButtonAgenda->setText(QCoreApplication::translate("TelaInicialMedico", "Agenda completa", nullptr));
        labelAgenda->setText(QCoreApplication::translate("TelaInicialMedico", "Agenda do dia", nullptr));
        pushButtonProntuario->setText(QCoreApplication::translate("TelaInicialMedico", "Gerenciar prontu\303\241rios", nullptr));
        pushButtonHistorico->setText(QCoreApplication::translate("TelaInicialMedico", "Hist\303\263rico m\303\251dico", nullptr));
        labelCRM->setText(QCoreApplication::translate("TelaInicialMedico", "CRM", nullptr));
        pushButtonSair->setText(QCoreApplication::translate("TelaInicialMedico", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicialMedico: public Ui_TelaInicialMedico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIALMEDICO_H
