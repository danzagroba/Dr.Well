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
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_TelaRegistro
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TelaRegistro)
    {
        if (TelaRegistro->objectName().isEmpty())
            TelaRegistro->setObjectName("TelaRegistro");
        TelaRegistro->resize(320, 240);
        buttonBox = new QDialogButtonBox(TelaRegistro);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(0, 150, 301, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(TelaRegistro);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TelaRegistro, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TelaRegistro, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TelaRegistro);
    } // setupUi

    void retranslateUi(QDialog *TelaRegistro)
    {
        TelaRegistro->setWindowTitle(QCoreApplication::translate("TelaRegistro", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaRegistro: public Ui_TelaRegistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAREGISTRO_H
