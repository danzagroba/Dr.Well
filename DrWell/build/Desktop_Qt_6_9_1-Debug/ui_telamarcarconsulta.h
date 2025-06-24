/********************************************************************************
** Form generated from reading UI file 'telamarcarconsulta.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAMARCARCONSULTA_H
#define UI_TELAMARCARCONSULTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaMarcarConsulta
{
public:
    QLineEdit *lineEditData;
    QLabel *label;
    QLabel *labelMedico;
    QLineEdit *lineEditMedico;
    QLabel *labelPaciente;
    QLineEdit *lineEditPaciente;
    QLabel *labelCusto;
    QLineEdit *lineEditCusto;
    QPushButton *pushButtonMarcar;
    QPushButton *pushButtonVoltar;
    QLabel *label_2;

    void setupUi(QWidget *TelaMarcarConsulta)
    {
        if (TelaMarcarConsulta->objectName().isEmpty())
            TelaMarcarConsulta->setObjectName("TelaMarcarConsulta");
        TelaMarcarConsulta->resize(494, 395);
        lineEditData = new QLineEdit(TelaMarcarConsulta);
        lineEditData->setObjectName("lineEditData");
        lineEditData->setGeometry(QRect(110, 70, 201, 26));
        label = new QLabel(TelaMarcarConsulta);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 50, 31, 21));
        labelMedico = new QLabel(TelaMarcarConsulta);
        labelMedico->setObjectName("labelMedico");
        labelMedico->setGeometry(QRect(120, 110, 51, 18));
        lineEditMedico = new QLineEdit(TelaMarcarConsulta);
        lineEditMedico->setObjectName("lineEditMedico");
        lineEditMedico->setGeometry(QRect(110, 130, 201, 26));
        labelPaciente = new QLabel(TelaMarcarConsulta);
        labelPaciente->setObjectName("labelPaciente");
        labelPaciente->setGeometry(QRect(120, 170, 61, 18));
        lineEditPaciente = new QLineEdit(TelaMarcarConsulta);
        lineEditPaciente->setObjectName("lineEditPaciente");
        lineEditPaciente->setGeometry(QRect(110, 190, 201, 26));
        labelCusto = new QLabel(TelaMarcarConsulta);
        labelCusto->setObjectName("labelCusto");
        labelCusto->setGeometry(QRect(130, 230, 41, 18));
        lineEditCusto = new QLineEdit(TelaMarcarConsulta);
        lineEditCusto->setObjectName("lineEditCusto");
        lineEditCusto->setGeometry(QRect(110, 250, 201, 26));
        pushButtonMarcar = new QPushButton(TelaMarcarConsulta);
        pushButtonMarcar->setObjectName("pushButtonMarcar");
        pushButtonMarcar->setGeometry(QRect(140, 310, 94, 26));
        pushButtonVoltar = new QPushButton(TelaMarcarConsulta);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(400, 20, 61, 26));
        label_2 = new QLabel(TelaMarcarConsulta);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 20, 111, 18));

        retranslateUi(TelaMarcarConsulta);

        QMetaObject::connectSlotsByName(TelaMarcarConsulta);
    } // setupUi

    void retranslateUi(QWidget *TelaMarcarConsulta)
    {
        TelaMarcarConsulta->setWindowTitle(QCoreApplication::translate("TelaMarcarConsulta", "Form", nullptr));
        label->setText(QCoreApplication::translate("TelaMarcarConsulta", "Data", nullptr));
        labelMedico->setText(QCoreApplication::translate("TelaMarcarConsulta", "Medico", nullptr));
        labelPaciente->setText(QCoreApplication::translate("TelaMarcarConsulta", "Paciente", nullptr));
        labelCusto->setText(QCoreApplication::translate("TelaMarcarConsulta", "Custo", nullptr));
        pushButtonMarcar->setText(QCoreApplication::translate("TelaMarcarConsulta", "Marcar", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("TelaMarcarConsulta", "Voltar", nullptr));
        label_2->setText(QCoreApplication::translate("TelaMarcarConsulta", "Marcar Consulta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaMarcarConsulta: public Ui_TelaMarcarConsulta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAMARCARCONSULTA_H
