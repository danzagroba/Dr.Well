/********************************************************************************
** Form generated from reading UI file 'telahistoricomedico.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
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
    QLabel *labelNome;
    QPushButton *pushButtonVoltar;
    QTableView *tableView;
    QLineEdit *lineEditPaciente;
    QLineEdit *lineEditNumero;
    QPushButton *pushButtonAbrir;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *labelCRM;

    void setupUi(QWidget *TelaHistoricoMedico)
    {
        if (TelaHistoricoMedico->objectName().isEmpty())
            TelaHistoricoMedico->setObjectName("TelaHistoricoMedico");
        TelaHistoricoMedico->resize(544, 369);
        label = new QLabel(TelaHistoricoMedico);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 80, 121, 18));
        labelNome = new QLabel(TelaHistoricoMedico);
        labelNome->setObjectName("labelNome");
        labelNome->setGeometry(QRect(40, 20, 171, 18));
        pushButtonVoltar = new QPushButton(TelaHistoricoMedico);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(470, 20, 51, 26));
        tableView = new QTableView(TelaHistoricoMedico);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 110, 441, 192));
        lineEditPaciente = new QLineEdit(TelaHistoricoMedico);
        lineEditPaciente->setObjectName("lineEditPaciente");
        lineEditPaciente->setGeometry(QRect(270, 80, 171, 26));
        lineEditNumero = new QLineEdit(TelaHistoricoMedico);
        lineEditNumero->setObjectName("lineEditNumero");
        lineEditNumero->setGeometry(QRect(180, 310, 113, 20));
        pushButtonAbrir = new QPushButton(TelaHistoricoMedico);
        pushButtonAbrir->setObjectName("pushButtonAbrir");
        pushButtonAbrir->setGeometry(QRect(310, 310, 61, 21));
        label_3 = new QLabel(TelaHistoricoMedico);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 60, 66, 18));
        label_4 = new QLabel(TelaHistoricoMedico);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 310, 66, 18));
        labelCRM = new QLabel(TelaHistoricoMedico);
        labelCRM->setObjectName("labelCRM");
        labelCRM->setGeometry(QRect(250, 20, 91, 18));

        retranslateUi(TelaHistoricoMedico);

        QMetaObject::connectSlotsByName(TelaHistoricoMedico);
    } // setupUi

    void retranslateUi(QWidget *TelaHistoricoMedico)
    {
        TelaHistoricoMedico->setWindowTitle(QCoreApplication::translate("TelaHistoricoMedico", "Form", nullptr));
        label->setText(QCoreApplication::translate("TelaHistoricoMedico", "Historico M\303\251dico", nullptr));
        labelNome->setText(QCoreApplication::translate("TelaHistoricoMedico", "Nome_do_Medico", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("TelaHistoricoMedico", "Voltar", nullptr));
        pushButtonAbrir->setText(QCoreApplication::translate("TelaHistoricoMedico", "Abrir", nullptr));
        label_3->setText(QCoreApplication::translate("TelaHistoricoMedico", "Paciente", nullptr));
        label_4->setText(QCoreApplication::translate("TelaHistoricoMedico", "Numero", nullptr));
        labelCRM->setText(QCoreApplication::translate("TelaHistoricoMedico", "CRM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaHistoricoMedico: public Ui_TelaHistoricoMedico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAHISTORICOMEDICO_H
