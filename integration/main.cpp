#include "logindialog.h"
#include "employew.h"
#include "clientw.h"
#include "commandew.h"
#include "produitw.h"
#include "fournisseurw.h"
#include "connection.h"

#include <QApplication>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection c;
    bool test = c.createconnect();
    LoginDialog loginDialog;
    Employew employew;
    clientw clientw;
    commandew commandew;
    produitw produitw;
    fournisseurw fournisseurw;




    if (test) {
        QObject::connect(&loginDialog, &LoginDialog::loginSuccessfulEmploye, [&]() {
            employew.show();
            QMessageBox::information(nullptr, QObject::tr("Logged in as Employee"),
                                     QObject::tr("Welcome, Employee!\nClick Cancel to exit"), QMessageBox::Cancel);
        });

        QObject::connect(&loginDialog, &LoginDialog::loginSuccessfulClient, [&]() {
            clientw.show();
            QMessageBox::information(nullptr, QObject::tr("Logged in as Client"),
                                     QObject::tr("Welcome, Client!\nClick Cancel to exit"), QMessageBox::Cancel);
        });

        QObject::connect(&loginDialog, &LoginDialog::loginSuccessfulCommande, [&]() {
            commandew.show();
            QMessageBox::information(nullptr, QObject::tr("Logged in as Commande"),
                                     QObject::tr("Welcome, Commande!\nClick Cancel to exit"), QMessageBox::Cancel);
        });

        QObject::connect(&loginDialog, &LoginDialog::loginSuccessfulProduit, [&]() {
            produitw.show();
            QMessageBox::information(nullptr, QObject::tr("Logged in as Produit"),
                                     QObject::tr("Welcome, Produit!\nClick Cancel to exit"), QMessageBox::Cancel);
        });

        QObject::connect(&loginDialog, &LoginDialog::loginSuccessfulFournisseur, [&]() {
            fournisseurw.show();
            QMessageBox::information(nullptr, QObject::tr("Logged in as Fournisseur"),
                                     QObject::tr("Welcome, Fournisseur!\nClick Cancel to exit"), QMessageBox::Cancel);
        });


        loginDialog.show();
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Database is not open"),
                              QObject::tr("Connection failed.\nClick Cancel to exit"), QMessageBox::Cancel);
    }

    return a.exec();
}

