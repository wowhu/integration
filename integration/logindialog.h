// logindialog.h
#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QMainWindow>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

signals:
    void loginSuccessfulEmploye();
     void loginSuccessfulClient();
     void loginSuccessfulCommande();
     void loginSuccessfulProduit();
     void loginSuccessfulFournisseur();

private slots:
    void on_pushButtonlogin_clicked();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
