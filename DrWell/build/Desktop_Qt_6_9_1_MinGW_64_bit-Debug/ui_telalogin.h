/********************************************************************************
** Form generated from reading UI file 'telalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALOGIN_H
#define UI_TELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaLogin
{
public:
    QLabel *label_2;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QWidget *TelaLogin)
    {
        if (TelaLogin->objectName().isEmpty())
            TelaLogin->setObjectName("TelaLogin");
        TelaLogin->resize(528, 347);
        label_2 = new QLabel(TelaLogin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 120, 81, 20));
        label = new QLabel(TelaLogin);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 40, 81, 20));
        textEdit = new QTextEdit(TelaLogin);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 70, 271, 31));
        pushButton_2 = new QPushButton(TelaLogin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 280, 191, 29));
        textEdit_2 = new QTextEdit(TelaLogin);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(120, 150, 271, 31));
        pushButton = new QPushButton(TelaLogin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 230, 83, 29));
        comboBox = new QComboBox(TelaLogin);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 230, 141, 28));

        retranslateUi(TelaLogin);

        QMetaObject::connectSlotsByName(TelaLogin);
    } // setupUi

    void retranslateUi(QWidget *TelaLogin)
    {
        TelaLogin->setWindowTitle(QCoreApplication::translate("TelaLogin", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("TelaLogin", "Senha", nullptr));
        label->setText(QCoreApplication::translate("TelaLogin", "CPF/Email", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TelaLogin", "N\303\243o possui cadastro?", nullptr));
        pushButton->setText(QCoreApplication::translate("TelaLogin", "Entrar", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TelaLogin", "Administrador", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TelaLogin", "Secret\303\241rio", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("TelaLogin", "M\303\251dico", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TelaLogin: public Ui_TelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGIN_H
