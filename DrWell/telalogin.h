#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QWidget>
#include "Usuario.h"

namespace Ui {
class TelaLogin;
}

class TelaLogin : public QWidget
{
    Q_OBJECT


public:
    explicit TelaLogin(QWidget *parent = nullptr);
    ~TelaLogin();

signals:
    //Para enviar para a MainWindow
    void registroRequisitado();
    void entrarRequisitado(int id, std::shared_ptr<Usuario> usuario);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
private:
    Ui::TelaLogin *ui;
};

#endif // TELALOGIN_H
