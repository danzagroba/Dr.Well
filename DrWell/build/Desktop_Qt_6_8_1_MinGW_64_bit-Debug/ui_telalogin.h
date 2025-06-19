/********************************************************************************
** Form generated from reading UI file 'telalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALOGIN_H
#define UI_TELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TelaLogin
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TelaLogin)
    {
        if (TelaLogin->objectName().isEmpty())
            TelaLogin->setObjectName("TelaLogin");
        TelaLogin->resize(685, 411);
        textEdit = new QTextEdit(TelaLogin);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(180, 120, 271, 31));
        textEdit_2 = new QTextEdit(TelaLogin);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(180, 200, 271, 31));
        comboBox = new QComboBox(TelaLogin);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(180, 280, 141, 28));
        pushButton = new QPushButton(TelaLogin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 280, 83, 29));
        label = new QLabel(TelaLogin);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 90, 81, 20));
        label_2 = new QLabel(TelaLogin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 170, 81, 20));
        pushButton_2 = new QPushButton(TelaLogin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 330, 191, 29));

        retranslateUi(TelaLogin);

        QMetaObject::connectSlotsByName(TelaLogin);
    } // setupUi

    void retranslateUi(QDialog *TelaLogin)
    {
        TelaLogin->setWindowTitle(QCoreApplication::translate("TelaLogin", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TelaLogin", "Administrador", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TelaLogin", "Secret\303\241rio", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("TelaLogin", "M\303\251dico", nullptr));

        pushButton->setText(QCoreApplication::translate("TelaLogin", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("TelaLogin", "CPF/Email", nullptr));
        label_2->setText(QCoreApplication::translate("TelaLogin", "Senha", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TelaLogin", "N\303\243o possui cadastro?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaLogin: public Ui_TelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGIN_H
