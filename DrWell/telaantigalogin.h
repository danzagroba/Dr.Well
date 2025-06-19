#ifndef TELAANTIGALOGIN_H
#define TELAANTIGALOGIN_H

#include <QDialog>

namespace Ui {
class TelaLogin;
}

class TelaLogin : public QDialog
{
    Q_OBJECT

public:
    explicit TelaLogin(QWidget *parent = nullptr);
    ~TelaLogin();

private:
    Ui::TelaLogin *ui;
};

#endif // TELAANTIGALOGIN_H
