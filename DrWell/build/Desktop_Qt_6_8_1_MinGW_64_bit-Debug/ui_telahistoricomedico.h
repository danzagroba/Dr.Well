/********************************************************************************
** Form generated from reading UI file 'telahistoricomedico.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAHISTORICOMEDICO_H
#define UI_TELAHISTORICOMEDICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaHistoricoMedico
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonVoltar;
    QTableView *tableView;
    QLineEdit *lineEditPaciente;
    QLineEdit *lineEditNumero;
    QPushButton *pushButtonAbrir;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *TelaHistoricoMedico)
    {
        if (TelaHistoricoMedico->objectName().isEmpty())
            TelaHistoricoMedico->setObjectName("TelaHistoricoMedico");
        TelaHistoricoMedico->resize(455, 353);
        label = new QLabel(TelaHistoricoMedico);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 121, 18));
        label_2 = new QLabel(TelaHistoricoMedico);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 20, 131, 18));
        pushButtonVoltar = new QPushButton(TelaHistoricoMedico);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(390, 10, 51, 26));
        tableView = new QTableView(TelaHistoricoMedico);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 90, 391, 192));
        lineEditPaciente = new QLineEdit(TelaHistoricoMedico);
        lineEditPaciente->setObjectName("lineEditPaciente");
        lineEditPaciente->setGeometry(QRect(210, 50, 171, 26));
        lineEditNumero = new QLineEdit(TelaHistoricoMedico);
        lineEditNumero->setObjectName("lineEditNumero");
        lineEditNumero->setGeometry(QRect(120, 300, 113, 26));
        pushButtonAbrir = new QPushButton(TelaHistoricoMedico);
        pushButtonAbrir->setObjectName("pushButtonAbrir");
        pushButtonAbrir->setGeometry(QRect(280, 300, 61, 26));
        label_3 = new QLabel(TelaHistoricoMedico);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 30, 66, 18));
        label_4 = new QLabel(TelaHistoricoMedico);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 300, 66, 18));

        retranslateUi(TelaHistoricoMedico);

        QMetaObject::connectSlotsByName(TelaHistoricoMedico);
    } // setupUi

    void retranslateUi(QWidget *TelaHistoricoMedico)
    {
        TelaHistoricoMedico->setWindowTitle(QCoreApplication::translate("TelaHistoricoMedico", "Form", nullptr));
        label->setText(QCoreApplication::translate("TelaHistoricoMedico", "Historico M\303\251dico", nullptr));
        label_2->setText(QCoreApplication::translate("TelaHistoricoMedico", "Nome_do_Medico", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("TelaHistoricoMedico", "Voltar", nullptr));
        pushButtonAbrir->setText(QCoreApplication::translate("TelaHistoricoMedico", "Abrir", nullptr));
        label_3->setText(QCoreApplication::translate("TelaHistoricoMedico", "Paciente", nullptr));
        label_4->setText(QCoreApplication::translate("TelaHistoricoMedico", "Numero", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaHistoricoMedico: public Ui_TelaHistoricoMedico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAHISTORICOMEDICO_H
