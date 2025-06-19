#include "telainicialadministrador.h"
#include "ui_telainicialadministrador.h"

telainicialadministrador::telainicialadministrador(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::telainicialadministrador)
{
    ui->setupUi(this);
}

telainicialadministrador::~telainicialadministrador()
{
    delete ui;
}
