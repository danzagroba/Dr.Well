/********************************************************************************
** Form generated from reading UI file 'telagerenciarconsultas.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAGERENCIARCONSULTAS_H
#define UI_TELAGERENCIARCONSULTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaGerenciarConsultas
{
public:
    QLabel *labelSecretario;
    QPushButton *pushButtonVoltar;
    QLabel *labelConsultas;
    QLineEdit *lineEditConsulta;
    QTableView *tableView;
    QLineEdit *lineEditNumero;
    QLabel *labelNumero;
    QPushButton *pushButtonEditar;
    QPushButton *pushButtonConfirmar;
    QPushButton *pushButtonCancelar;
    QPushButton *pushButtonMarcar;

    void setupUi(QWidget *TelaGerenciarConsultas)
    {
        if (TelaGerenciarConsultas->objectName().isEmpty())
            TelaGerenciarConsultas->setObjectName("TelaGerenciarConsultas");
        TelaGerenciarConsultas->resize(492, 366);
        labelSecretario = new QLabel(TelaGerenciarConsultas);
        labelSecretario->setObjectName("labelSecretario");
        labelSecretario->setGeometry(QRect(20, 20, 141, 18));
        pushButtonVoltar = new QPushButton(TelaGerenciarConsultas);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(410, 20, 51, 26));
        labelConsultas = new QLabel(TelaGerenciarConsultas);
        labelConsultas->setObjectName("labelConsultas");
        labelConsultas->setGeometry(QRect(50, 60, 141, 18));
        lineEditConsulta = new QLineEdit(TelaGerenciarConsultas);
        lineEditConsulta->setObjectName("lineEditConsulta");
        lineEditConsulta->setGeometry(QRect(210, 60, 161, 20));
        tableView = new QTableView(TelaGerenciarConsultas);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 90, 431, 192));
        lineEditNumero = new QLineEdit(TelaGerenciarConsultas);
        lineEditNumero->setObjectName("lineEditNumero");
        lineEditNumero->setGeometry(QRect(140, 300, 113, 20));
        labelNumero = new QLabel(TelaGerenciarConsultas);
        labelNumero->setObjectName("labelNumero");
        labelNumero->setGeometry(QRect(70, 300, 61, 18));
        pushButtonEditar = new QPushButton(TelaGerenciarConsultas);
        pushButtonEditar->setObjectName("pushButtonEditar");
        pushButtonEditar->setGeometry(QRect(50, 330, 51, 20));
        pushButtonConfirmar = new QPushButton(TelaGerenciarConsultas);
        pushButtonConfirmar->setObjectName("pushButtonConfirmar");
        pushButtonConfirmar->setGeometry(QRect(110, 330, 81, 20));
        pushButtonCancelar = new QPushButton(TelaGerenciarConsultas);
        pushButtonCancelar->setObjectName("pushButtonCancelar");
        pushButtonCancelar->setGeometry(QRect(200, 330, 71, 20));
        pushButtonMarcar = new QPushButton(TelaGerenciarConsultas);
        pushButtonMarcar->setObjectName("pushButtonMarcar");
        pushButtonMarcar->setGeometry(QRect(340, 310, 71, 26));

        retranslateUi(TelaGerenciarConsultas);

        QMetaObject::connectSlotsByName(TelaGerenciarConsultas);
    } // setupUi

    void retranslateUi(QWidget *TelaGerenciarConsultas)
    {
        TelaGerenciarConsultas->setWindowTitle(QCoreApplication::translate("TelaGerenciarConsultas", "Form", nullptr));
        labelSecretario->setText(QCoreApplication::translate("TelaGerenciarConsultas", "Nome_do_secretario", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("TelaGerenciarConsultas", "Voltar", nullptr));
        labelConsultas->setText(QCoreApplication::translate("TelaGerenciarConsultas", "Gerenciar Consultas", nullptr));
        labelNumero->setText(QCoreApplication::translate("TelaGerenciarConsultas", "Numero", nullptr));
        pushButtonEditar->setText(QCoreApplication::translate("TelaGerenciarConsultas", "Editar", nullptr));
        pushButtonConfirmar->setText(QCoreApplication::translate("TelaGerenciarConsultas", "Confirmar", nullptr));
        pushButtonCancelar->setText(QCoreApplication::translate("TelaGerenciarConsultas", "Cancelar", nullptr));
        pushButtonMarcar->setText(QCoreApplication::translate("TelaGerenciarConsultas", "Marcar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaGerenciarConsultas: public Ui_TelaGerenciarConsultas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAGERENCIARCONSULTAS_H
