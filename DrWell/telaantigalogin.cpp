#include "telaantigalogin.h"
#include "ui_telaantigalogin.h"

TelaLogin::TelaLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TelaLogin)
{
    ui->setupUi(this);
}

TelaLogin::~TelaLogin()
{
    delete ui;
}
