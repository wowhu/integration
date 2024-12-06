#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QString>
#include "motpasseobl.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButtonlogin_clicked()
{
    QString username = ui->lineEditusername->text();
    QString password = ui->lineEditpassworrd->text();

    static int attemptCount = 0;
    const int maxAttempts = 3;

    QSqlQuery query;
    query.prepare("SELECT PASSWORD, POSTEE, SEUL FROM EMPLOYE WHERE USERNAME = :USERNAME");
    query.bindValue(":USERNAME", username);

    if (query.exec() && query.next()) {
        QString correctPassword = query.value(0).toString();
        QString poste = query.value(1).toString();
        int seul = query.value(2).toInt();

        if (password == correctPassword) {
            attemptCount = 0;
            QSqlQuery updateQuery;
            updateQuery.prepare("UPDATE EMPLOYE SET SEUL = 1 WHERE USERNAME = :USERNAME");
            updateQuery.bindValue(":USERNAME", username);
            if (!updateQuery.exec()) {
                qDebug() << "Failed to unlock account for username:" << username;
            }




            ui->labelAttempts->hide();


            if (poste == "responsable Emp") {
                emit loginSuccessfulEmploye();
            } else if (poste == "responsable CLI") {
                emit loginSuccessfulClient();
            } else if (poste == "responsable COM") {
                emit loginSuccessfulCommande();
            } else if (poste == "responsable PRO") {
                emit loginSuccessfulProduit();
            } else if (poste == "responsable FOU") {
                emit loginSuccessfulFournisseur();
            } else {
                QMessageBox::warning(this, "Login Failed", "Unknown POSTE. Contact administrator.");
                return;
            }

            close();
            return;
        } else {
            if (seul == 0) {
                QMessageBox::warning(this, "Account Locked", "Your account is locked due to multiple incorrect attempts.");
                ui->labelAttempts->hide();
                return;
            }


            attemptCount++;
            if (attemptCount >= maxAttempts) {
                ui->labelAttempts->hide();
                Motpasseobl *motpasseObl = new Motpasseobl(this);
                motpasseObl->setQuestionAndAnswers(username, "EMPLOYE");
                connect(motpasseObl, &Motpasseobl::correctSecurityAnswer, this, [username]() {
                    QSqlQuery updateQuery;
                    updateQuery.prepare("UPDATE EMPLOYE SET SEUL = 1 WHERE USERNAME = :USERNAME");
                    updateQuery.bindValue(":USERNAME", username);
                    updateQuery.exec();

                    qDebug() << "Security question answered correctly for username:" << username;
                });
                connect(motpasseObl, &QObject::destroyed, motpasseObl, &QObject::deleteLater);

                motpasseObl->show();
                return;
            } else {
                ui->labelAttempts->setText(QString("Wrong password(Attempts Left: %1)").arg(maxAttempts - attemptCount));
            }

            return;
        }
    } else {
        QMessageBox::warning(this, "Login Failed", "Username not found.");
    }
}
