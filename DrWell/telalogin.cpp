#include "telalogin.h"
#include "ui_telalogin.h"

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
