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
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(120, 70, 271, 31));
        pushButton_2 = new QPushButton(TelaLogin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 230, 191, 29));
        textEdit_2 = new QTextEdit(TelaLogin);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(120, 150, 271, 31));
        pushButton = new QPushButton(TelaLogin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 230, 83, 29));

        retranslateUi(TelaLogin);

        QMetaObject::connectSlotsByName(TelaLogin);
    } // setupUi

    void retranslateUi(QWidget *TelaLogin)
    {
        TelaLogin->setWindowTitle(QCoreApplication::translate("TelaLogin", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("TelaLogin", "Senha", nullptr));
        label->setText(QCoreApplication::translate("TelaLogin", "CPF/Email", nullptr));
        textEdit->setHtml(QCoreApplication::translate("TelaLogin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TelaLogin", "N\303\243o possui cadastro?", nullptr));
        pushButton->setText(QCoreApplication::translate("TelaLogin", "Entrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaLogin: public Ui_TelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGIN_H
