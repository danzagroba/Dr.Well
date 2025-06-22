/********************************************************************************
** Form generated from reading UI file 'telagerenciarprontuarios.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAGERENCIARPRONTUARIOS_H
#define UI_TELAGERENCIARPRONTUARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaGerenciarProntuarios
{
public:
    QLabel *labelNome;
    QLabel *labelProntuario;
    QLineEdit *lineEditPaciente;
    QTableView *tableView;
    QLineEdit *lineEditNumero;
    QPushButton *pushButtonAbrir;
    QPushButton *pushButtonVoltar;
    QLabel *labelPaciente;
    QLabel *labelNumero;

    void setupUi(QWidget *TelaGerenciarProntuarios)
    {
        if (TelaGerenciarProntuarios->objectName().isEmpty())
            TelaGerenciarProntuarios->setObjectName("TelaGerenciarProntuarios");
        TelaGerenciarProntuarios->resize(462, 342);
        labelNome = new QLabel(TelaGerenciarProntuarios);
        labelNome->setObjectName("labelNome");
        labelNome->setGeometry(QRect(50, 20, 131, 18));
        labelProntuario = new QLabel(TelaGerenciarProntuarios);
        labelProntuario->setObjectName("labelProntuario");
        labelProntuario->setGeometry(QRect(40, 60, 141, 18));
        lineEditPaciente = new QLineEdit(TelaGerenciarProntuarios);
        lineEditPaciente->setObjectName("lineEditPaciente");
        lineEditPaciente->setGeometry(QRect(220, 60, 171, 26));
        tableView = new QTableView(TelaGerenciarProntuarios);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 90, 401, 192));
        lineEditNumero = new QLineEdit(TelaGerenciarProntuarios);
        lineEditNumero->setObjectName("lineEditNumero");
        lineEditNumero->setGeometry(QRect(120, 300, 113, 26));
        pushButtonAbrir = new QPushButton(TelaGerenciarProntuarios);
        pushButtonAbrir->setObjectName("pushButtonAbrir");
        pushButtonAbrir->setGeometry(QRect(270, 300, 61, 26));
        pushButtonVoltar = new QPushButton(TelaGerenciarProntuarios);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(380, 20, 61, 26));
        labelPaciente = new QLabel(TelaGerenciarProntuarios);
        labelPaciente->setObjectName("labelPaciente");
        labelPaciente->setGeometry(QRect(280, 40, 66, 18));
        labelNumero = new QLabel(TelaGerenciarProntuarios);
        labelNumero->setObjectName("labelNumero");
        labelNumero->setGeometry(QRect(50, 300, 66, 18));

        retranslateUi(TelaGerenciarProntuarios);

        QMetaObject::connectSlotsByName(TelaGerenciarProntuarios);
    } // setupUi

    void retranslateUi(QWidget *TelaGerenciarProntuarios)
    {
        TelaGerenciarProntuarios->setWindowTitle(QCoreApplication::translate("TelaGerenciarProntuarios", "Form", nullptr));
        labelNome->setText(QCoreApplication::translate("TelaGerenciarProntuarios", "Nome_do_Medico", nullptr));
        labelProntuario->setText(QCoreApplication::translate("TelaGerenciarProntuarios", "Gerenciar Prontuario", nullptr));
        pushButtonAbrir->setText(QCoreApplication::translate("TelaGerenciarProntuarios", "Abrir", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("TelaGerenciarProntuarios", "Voltar", nullptr));
        labelPaciente->setText(QCoreApplication::translate("TelaGerenciarProntuarios", "Paciente", nullptr));
        labelNumero->setText(QCoreApplication::translate("TelaGerenciarProntuarios", "Numero", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaGerenciarProntuarios: public Ui_TelaGerenciarProntuarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAGERENCIARPRONTUARIOS_H
