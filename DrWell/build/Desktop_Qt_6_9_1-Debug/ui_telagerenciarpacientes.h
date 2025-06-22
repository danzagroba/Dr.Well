/********************************************************************************
** Form generated from reading UI file 'telagerenciarpacientes.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAGERENCIARPACIENTES_H
#define UI_TELAGERENCIARPACIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaGerenciarPacientes
{
public:
    QLabel *labelSecretario;
    QLabel *labelPacientes;
    QLineEdit *lineEditPaciente;
    QTableView *tableView;
    QLabel *labelNumero;
    QLineEdit *lineEditNumero;
    QPushButton *pushButtonEditar;
    QPushButton *pushButtonVoltar;
    QPushButton *pushButtonCadastrar;
    QPushButton *pushButton_2;

    void setupUi(QWidget *TelaGerenciarPacientes)
    {
        if (TelaGerenciarPacientes->objectName().isEmpty())
            TelaGerenciarPacientes->setObjectName("TelaGerenciarPacientes");
        TelaGerenciarPacientes->resize(504, 353);
        labelSecretario = new QLabel(TelaGerenciarPacientes);
        labelSecretario->setObjectName("labelSecretario");
        labelSecretario->setGeometry(QRect(20, 20, 141, 18));
        labelPacientes = new QLabel(TelaGerenciarPacientes);
        labelPacientes->setObjectName("labelPacientes");
        labelPacientes->setGeometry(QRect(80, 60, 66, 18));
        lineEditPaciente = new QLineEdit(TelaGerenciarPacientes);
        lineEditPaciente->setObjectName("lineEditPaciente");
        lineEditPaciente->setGeometry(QRect(190, 60, 171, 21));
        tableView = new QTableView(TelaGerenciarPacientes);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 90, 441, 192));
        labelNumero = new QLabel(TelaGerenciarPacientes);
        labelNumero->setObjectName("labelNumero");
        labelNumero->setGeometry(QRect(70, 290, 66, 18));
        lineEditNumero = new QLineEdit(TelaGerenciarPacientes);
        lineEditNumero->setObjectName("lineEditNumero");
        lineEditNumero->setGeometry(QRect(140, 290, 101, 20));
        pushButtonEditar = new QPushButton(TelaGerenciarPacientes);
        pushButtonEditar->setObjectName("pushButtonEditar");
        pushButtonEditar->setGeometry(QRect(160, 320, 61, 20));
        pushButtonVoltar = new QPushButton(TelaGerenciarPacientes);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(430, 20, 51, 26));
        pushButtonCadastrar = new QPushButton(TelaGerenciarPacientes);
        pushButtonCadastrar->setObjectName("pushButtonCadastrar");
        pushButtonCadastrar->setGeometry(QRect(320, 300, 71, 31));
        pushButton_2 = new QPushButton(TelaGerenciarPacientes);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(80, 320, 71, 20));

        retranslateUi(TelaGerenciarPacientes);

        QMetaObject::connectSlotsByName(TelaGerenciarPacientes);
    } // setupUi

    void retranslateUi(QWidget *TelaGerenciarPacientes)
    {
        TelaGerenciarPacientes->setWindowTitle(QCoreApplication::translate("TelaGerenciarPacientes", "Form", nullptr));
        labelSecretario->setText(QCoreApplication::translate("TelaGerenciarPacientes", "Nome_do_secretario", nullptr));
        labelPacientes->setText(QCoreApplication::translate("TelaGerenciarPacientes", "Pacientes", nullptr));
        labelNumero->setText(QCoreApplication::translate("TelaGerenciarPacientes", "Numero", nullptr));
        pushButtonEditar->setText(QCoreApplication::translate("TelaGerenciarPacientes", "Editar", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("TelaGerenciarPacientes", "Voltar", nullptr));
        pushButtonCadastrar->setText(QCoreApplication::translate("TelaGerenciarPacientes", "Cadastrar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TelaGerenciarPacientes", "Remover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaGerenciarPacientes: public Ui_TelaGerenciarPacientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAGERENCIARPACIENTES_H
