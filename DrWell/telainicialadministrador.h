#ifndef TELAINICIALADMINISTRADOR_H
#define TELAINICIALADMINISTRADOR_H

#include <QWidget>

namespace Ui {
class telainicialadministrador;
}

class telainicialadministrador : public QWidget
{
    Q_OBJECT

public:
    explicit telainicialadministrador(QWidget *parent = nullptr);
    ~telainicialadministrador();

private:
    Ui::telainicialadministrador *ui;
};

#endif // TELAINICIALADMINISTRADOR_H
