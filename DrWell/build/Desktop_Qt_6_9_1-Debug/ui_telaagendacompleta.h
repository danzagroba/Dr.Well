/********************************************************************************
** Form generated from reading UI file 'telaagendacompleta.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAAGENDACOMPLETA_H
#define UI_TELAAGENDACOMPLETA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaAgendaCompleta
{
public:
    QLabel *labelAgenda;
    QPushButton *pushButtonVoltar;
    QTableView *tableView;
    QLabel *labelNome;
    QLineEdit *lineEditData;
    QLabel *label;
    QLabel *labelCRM;

    void setupUi(QWidget *TelaAgendaCompleta)
    {
        if (TelaAgendaCompleta->objectName().isEmpty())
            TelaAgendaCompleta->setObjectName("TelaAgendaCompleta");
        TelaAgendaCompleta->resize(577, 333);
        labelAgenda = new QLabel(TelaAgendaCompleta);
        labelAgenda->setObjectName("labelAgenda");
        labelAgenda->setGeometry(QRect(90, 90, 121, 18));
        pushButtonVoltar = new QPushButton(TelaAgendaCompleta);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(480, 20, 51, 26));
        tableView = new QTableView(TelaAgendaCompleta);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 120, 481, 201));
        labelNome = new QLabel(TelaAgendaCompleta);
        labelNome->setObjectName("labelNome");
        labelNome->setGeometry(QRect(50, 30, 191, 18));
        lineEditData = new QLineEdit(TelaAgendaCompleta);
        lineEditData->setObjectName("lineEditData");
        lineEditData->setGeometry(QRect(310, 90, 113, 20));
        label = new QLabel(TelaAgendaCompleta);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 70, 31, 18));
        labelCRM = new QLabel(TelaAgendaCompleta);
        labelCRM->setObjectName("labelCRM");
        labelCRM->setGeometry(QRect(280, 30, 121, 18));

        retranslateUi(TelaAgendaCompleta);

        QMetaObject::connectSlotsByName(TelaAgendaCompleta);
    } // setupUi

    void retranslateUi(QWidget *TelaAgendaCompleta)
    {
        TelaAgendaCompleta->setWindowTitle(QCoreApplication::translate("TelaAgendaCompleta", "Form", nullptr));
        labelAgenda->setText(QCoreApplication::translate("TelaAgendaCompleta", "Agenda Completa", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("TelaAgendaCompleta", "Voltar", nullptr));
        labelNome->setText(QCoreApplication::translate("TelaAgendaCompleta", "Nome_do_medico", nullptr));
        lineEditData->setText(QString());
        label->setText(QCoreApplication::translate("TelaAgendaCompleta", "Data", nullptr));
        labelCRM->setText(QCoreApplication::translate("TelaAgendaCompleta", "CRM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaAgendaCompleta: public Ui_TelaAgendaCompleta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAAGENDACOMPLETA_H
