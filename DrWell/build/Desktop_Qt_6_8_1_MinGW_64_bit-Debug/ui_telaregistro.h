/********************************************************************************
** Form generated from reading UI file 'telaregistro.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAREGISTRO_H
#define UI_TELAREGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaRegistro
{
public:
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QPushButton *pushButtonConfirmar;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_4;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QTextEdit *textEdit_5;
    QLabel *label_6;

    void setupUi(QWidget *TelaRegistro)
    {
        if (TelaRegistro->objectName().isEmpty())
            TelaRegistro->setObjectName("TelaRegistro");
        TelaRegistro->resize(551, 386);
        textEdit = new QTextEdit(TelaRegistro);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 70, 271, 31));
        comboBox = new QComboBox(TelaRegistro);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 310, 141, 28));
        pushButtonConfirmar = new QPushButton(TelaRegistro);
        pushButtonConfirmar->setObjectName("pushButtonConfirmar");
        pushButtonConfirmar->setGeometry(QRect(280, 310, 83, 29));
        textEdit_6 = new QTextEdit(TelaRegistro);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(270, 260, 131, 31));
        textEdit_3 = new QTextEdit(TelaRegistro);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(120, 200, 111, 31));
        textEdit_2 = new QTextEdit(TelaRegistro);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(120, 140, 271, 31));
        textEdit_4 = new QTextEdit(TelaRegistro);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(260, 200, 31, 31));
        label = new QLabel(TelaRegistro);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 40, 131, 20));
        label_3 = new QLabel(TelaRegistro);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 180, 121, 20));
        label_4 = new QLabel(TelaRegistro);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 180, 31, 20));
        label_2 = new QLabel(TelaRegistro);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 110, 81, 20));
        label_5 = new QLabel(TelaRegistro);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 240, 81, 20));
        textEdit_5 = new QTextEdit(TelaRegistro);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(120, 260, 131, 31));
        label_6 = new QLabel(TelaRegistro);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 240, 121, 20));

        retranslateUi(TelaRegistro);

        QMetaObject::connectSlotsByName(TelaRegistro);
    } // setupUi

    void retranslateUi(QWidget *TelaRegistro)
    {
        TelaRegistro->setWindowTitle(QCoreApplication::translate("TelaRegistro", "Form", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TelaRegistro", "Administrador", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TelaRegistro", "Secret\303\241rio", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("TelaRegistro", "M\303\251dico", nullptr));

        pushButtonConfirmar->setText(QCoreApplication::translate("TelaRegistro", "Confimar", nullptr));
        label->setText(QCoreApplication::translate("TelaRegistro", "Nome Completo", nullptr));
        label_3->setText(QCoreApplication::translate("TelaRegistro", "Data Nascimento", nullptr));
        label_4->setText(QCoreApplication::translate("TelaRegistro", "Sexo", nullptr));
        label_2->setText(QCoreApplication::translate("TelaRegistro", "CPF", nullptr));
        label_5->setText(QCoreApplication::translate("TelaRegistro", "Senha", nullptr));
        label_6->setText(QCoreApplication::translate("TelaRegistro", "Confirmar senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaRegistro: public Ui_TelaRegistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAREGISTRO_H
