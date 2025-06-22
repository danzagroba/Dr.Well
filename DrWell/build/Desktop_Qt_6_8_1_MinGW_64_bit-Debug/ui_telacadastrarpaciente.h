/********************************************************************************
** Form generated from reading UI file 'telacadastrarpaciente.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACADASTRARPACIENTE_H
#define UI_TELACADASTRARPACIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaCadastrarPaciente
{
public:
    QLineEdit *lineEditNome;
    QLineEdit *lineEditTelefone;
    QLineEdit *lineEditCpf;
    QLineEdit *lineEditNascimento;
    QLineEdit *lineEditConvenio;
    QLineEdit *lineEditSexo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEditContato;
    QPushButton *pushButtonCadastrar;
    QLabel *label_8;
    QPushButton *pushButtonVoltar;

    void setupUi(QWidget *TelaCadastrarPaciente)
    {
        if (TelaCadastrarPaciente->objectName().isEmpty())
            TelaCadastrarPaciente->setObjectName("TelaCadastrarPaciente");
        TelaCadastrarPaciente->resize(400, 352);
        lineEditNome = new QLineEdit(TelaCadastrarPaciente);
        lineEditNome->setObjectName("lineEditNome");
        lineEditNome->setGeometry(QRect(60, 60, 271, 26));
        lineEditTelefone = new QLineEdit(TelaCadastrarPaciente);
        lineEditTelefone->setObjectName("lineEditTelefone");
        lineEditTelefone->setGeometry(QRect(60, 240, 141, 26));
        lineEditCpf = new QLineEdit(TelaCadastrarPaciente);
        lineEditCpf->setObjectName("lineEditCpf");
        lineEditCpf->setGeometry(QRect(60, 120, 271, 26));
        lineEditNascimento = new QLineEdit(TelaCadastrarPaciente);
        lineEditNascimento->setObjectName("lineEditNascimento");
        lineEditNascimento->setGeometry(QRect(60, 180, 111, 26));
        lineEditConvenio = new QLineEdit(TelaCadastrarPaciente);
        lineEditConvenio->setObjectName("lineEditConvenio");
        lineEditConvenio->setGeometry(QRect(220, 240, 111, 26));
        lineEditSexo = new QLineEdit(TelaCadastrarPaciente);
        lineEditSexo->setObjectName("lineEditSexo");
        lineEditSexo->setGeometry(QRect(230, 180, 81, 26));
        label = new QLabel(TelaCadastrarPaciente);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 111, 18));
        label_2 = new QLabel(TelaCadastrarPaciente);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 100, 31, 18));
        label_3 = new QLabel(TelaCadastrarPaciente);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 160, 121, 18));
        label_4 = new QLabel(TelaCadastrarPaciente);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 160, 31, 18));
        label_5 = new QLabel(TelaCadastrarPaciente);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 220, 66, 18));
        label_6 = new QLabel(TelaCadastrarPaciente);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 220, 66, 18));
        label_7 = new QLabel(TelaCadastrarPaciente);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 280, 141, 18));
        lineEditContato = new QLineEdit(TelaCadastrarPaciente);
        lineEditContato->setObjectName("lineEditContato");
        lineEditContato->setGeometry(QRect(60, 300, 141, 26));
        pushButtonCadastrar = new QPushButton(TelaCadastrarPaciente);
        pushButtonCadastrar->setObjectName("pushButtonCadastrar");
        pushButtonCadastrar->setGeometry(QRect(230, 300, 94, 26));
        label_8 = new QLabel(TelaCadastrarPaciente);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 10, 131, 18));
        pushButtonVoltar = new QPushButton(TelaCadastrarPaciente);
        pushButtonVoltar->setObjectName("pushButtonVoltar");
        pushButtonVoltar->setGeometry(QRect(330, 10, 51, 26));

        retranslateUi(TelaCadastrarPaciente);

        QMetaObject::connectSlotsByName(TelaCadastrarPaciente);
    } // setupUi

    void retranslateUi(QWidget *TelaCadastrarPaciente)
    {
        TelaCadastrarPaciente->setWindowTitle(QCoreApplication::translate("TelaCadastrarPaciente", "Form", nullptr));
        label->setText(QCoreApplication::translate("TelaCadastrarPaciente", "Nome Completo", nullptr));
        label_2->setText(QCoreApplication::translate("TelaCadastrarPaciente", "CPF", nullptr));
        label_3->setText(QCoreApplication::translate("TelaCadastrarPaciente", "Data Nascimento", nullptr));
        label_4->setText(QCoreApplication::translate("TelaCadastrarPaciente", "Sexo", nullptr));
        label_5->setText(QCoreApplication::translate("TelaCadastrarPaciente", "Convenio", nullptr));
        label_6->setText(QCoreApplication::translate("TelaCadastrarPaciente", "Telefone", nullptr));
        label_7->setText(QCoreApplication::translate("TelaCadastrarPaciente", "Contato Emerg\303\252ncia", nullptr));
        pushButtonCadastrar->setText(QCoreApplication::translate("TelaCadastrarPaciente", "Cadastrar", nullptr));
        label_8->setText(QCoreApplication::translate("TelaCadastrarPaciente", "Cadastrar Paciente", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("TelaCadastrarPaciente", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaCadastrarPaciente: public Ui_TelaCadastrarPaciente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTRARPACIENTE_H
