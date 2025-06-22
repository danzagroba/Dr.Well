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
    QTextEdit *nome;
    QComboBox *comboBox;
    QPushButton *pushButtonConfirmar;
    QTextEdit *confirmarsenha;
    QTextEdit *data;
    QTextEdit *cpf;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QTextEdit *senha;
    QLabel *label_6;
    QLabel *label_4;
    QTextEdit *sobrenome;
    QLabel *label_7;
    QTextEdit *email;
    QLabel *label_8;
    QTextEdit *telefone;
    QTextEdit *salario;
    QLabel *label_9;
    QPushButton *pushButtonConfirmar_2;
    QLabel *texto_1;
    QTextEdit *especifico_1;
    QLabel *texto_2;
    QTextEdit *especifico_2;

    void setupUi(QWidget *TelaRegistro)
    {
        if (TelaRegistro->objectName().isEmpty())
            TelaRegistro->setObjectName("TelaRegistro");
        TelaRegistro->resize(551, 608);
        nome = new QTextEdit(TelaRegistro);
        nome->setObjectName("nome");
        nome->setGeometry(QRect(120, 50, 121, 31));
        comboBox = new QComboBox(TelaRegistro);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 380, 141, 28));
        pushButtonConfirmar = new QPushButton(TelaRegistro);
        pushButtonConfirmar->setObjectName("pushButtonConfirmar");
        pushButtonConfirmar->setGeometry(QRect(310, 500, 83, 29));
        confirmarsenha = new QTextEdit(TelaRegistro);
        confirmarsenha->setObjectName("confirmarsenha");
        confirmarsenha->setGeometry(QRect(260, 330, 131, 31));
        data = new QTextEdit(TelaRegistro);
        data->setObjectName("data");
        data->setGeometry(QRect(120, 190, 121, 31));
        cpf = new QTextEdit(TelaRegistro);
        cpf->setObjectName("cpf");
        cpf->setGeometry(QRect(270, 120, 121, 31));
        label = new QLabel(TelaRegistro);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 111, 20));
        label_3 = new QLabel(TelaRegistro);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 160, 121, 20));
        label_2 = new QLabel(TelaRegistro);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 90, 81, 20));
        label_5 = new QLabel(TelaRegistro);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 300, 81, 20));
        senha = new QTextEdit(TelaRegistro);
        senha->setObjectName("senha");
        senha->setGeometry(QRect(120, 330, 131, 31));
        label_6 = new QLabel(TelaRegistro);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(260, 300, 121, 20));
        label_4 = new QLabel(TelaRegistro);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 20, 111, 20));
        sobrenome = new QTextEdit(TelaRegistro);
        sobrenome->setObjectName("sobrenome");
        sobrenome->setGeometry(QRect(270, 50, 121, 31));
        label_7 = new QLabel(TelaRegistro);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(120, 230, 81, 20));
        email = new QTextEdit(TelaRegistro);
        email->setObjectName("email");
        email->setGeometry(QRect(120, 260, 271, 31));
        label_8 = new QLabel(TelaRegistro);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 90, 81, 20));
        telefone = new QTextEdit(TelaRegistro);
        telefone->setObjectName("telefone");
        telefone->setGeometry(QRect(120, 120, 121, 31));
        salario = new QTextEdit(TelaRegistro);
        salario->setObjectName("salario");
        salario->setGeometry(QRect(270, 190, 121, 31));
        label_9 = new QLabel(TelaRegistro);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 160, 81, 20));
        pushButtonConfirmar_2 = new QPushButton(TelaRegistro);
        pushButtonConfirmar_2->setObjectName("pushButtonConfirmar_2");
        pushButtonConfirmar_2->setGeometry(QRect(120, 500, 121, 29));
        texto_1 = new QLabel(TelaRegistro);
        texto_1->setObjectName("texto_1");
        texto_1->setGeometry(QRect(120, 420, 111, 20));
        especifico_1 = new QTextEdit(TelaRegistro);
        especifico_1->setObjectName("especifico_1");
        especifico_1->setGeometry(QRect(120, 450, 121, 31));
        texto_2 = new QLabel(TelaRegistro);
        texto_2->setObjectName("texto_2");
        texto_2->setGeometry(QRect(270, 420, 111, 20));
        especifico_2 = new QTextEdit(TelaRegistro);
        especifico_2->setObjectName("especifico_2");
        especifico_2->setGeometry(QRect(270, 450, 121, 31));

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
        label->setText(QCoreApplication::translate("TelaRegistro", "Nome", nullptr));
        label_3->setText(QCoreApplication::translate("TelaRegistro", "Data Nascimento", nullptr));
        label_2->setText(QCoreApplication::translate("TelaRegistro", "CPF", nullptr));
        label_5->setText(QCoreApplication::translate("TelaRegistro", "Senha", nullptr));
        label_6->setText(QCoreApplication::translate("TelaRegistro", "Confirmar senha", nullptr));
        label_4->setText(QCoreApplication::translate("TelaRegistro", "Sobrenome", nullptr));
        label_7->setText(QCoreApplication::translate("TelaRegistro", "E-mail", nullptr));
        label_8->setText(QCoreApplication::translate("TelaRegistro", "Telefone", nullptr));
        label_9->setText(QCoreApplication::translate("TelaRegistro", "Sal\303\241rio", nullptr));
        pushButtonConfirmar_2->setText(QCoreApplication::translate("TelaRegistro", "J\303\241 tenho login", nullptr));
        texto_1->setText(QCoreApplication::translate("TelaRegistro", "CRM", nullptr));
        texto_2->setText(QCoreApplication::translate("TelaRegistro", "Especialidade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaRegistro: public Ui_TelaRegistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAREGISTRO_H
