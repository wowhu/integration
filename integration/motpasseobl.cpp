#include "motpasseobl.h"
#include "ui_motpasseobl.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QtNetwork>
#include <QJsonObject>
#include <QJsonDocument>
#include <QUrl>
#include <QUrlQuery>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QSqlError>

const QString ACCOUNT_SID = "AC65a1403c175bf31a4d67952634eec5ca";
const QString AUTH_TOKEN = "5114964397b3b8f23c644d9d6e2b44c1";
const QString FROM_PHONE = "+15752082540";
Motpasseobl::Motpasseobl(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Motpasseobl)
{
    ui->setupUi(this);
}

Motpasseobl::~Motpasseobl()
{
    delete ui;
}

void Motpasseobl::setQuestionAndAnswers(const QString &username, const QString &table)
{
    qDebug() << "Fetching security question for username:" << username << " from table:" << table;
    storedUsername = username;
    storedTable = table;
    QSqlQuery query;
    query.prepare(QString("SELECT QUESTION, REPONSE1, REPONSE2, REPONSE3 FROM %1 WHERE USERNAME = :USERNAME").arg(table));
    query.bindValue(":USERNAME", username);

    if (query.exec() && query.next()) {
        ui->label_2->setText(query.value(0).toString());
        ui->comboBox90->clear();
        ui->comboBox90->addItem(query.value(1).toString());
        ui->comboBox90->addItem(query.value(2).toString());
        ui->comboBox90->addItem(query.value(3).toString());
        qDebug() << "Security question fetched successfully.";
    } else {
        QMessageBox::warning(this, "Error", "Username not found or no questions set.");
    }
}


void Motpasseobl::on_pushButtonlogin2_clicked()
{
    QString answer = ui->comboBox90->currentText();

    // Query to retrieve user information from the EMPLOYE table
    QSqlQuery query;
    query.prepare("SELECT REPONSE1, PASSWORD, MOTOBL FROM EMPLOYE WHERE USERNAME = :USERNAME");
    query.bindValue(":USERNAME", storedUsername);

    if (query.exec() && query.next()) {
        QString correctAnswer = query.value(0).toString();
        QString password = query.value(1).toString();
        QString phoneNumber = query.value(2).toString();

        if (answer == correctAnswer) {
            emit correctSecurityAnswer();
            this->hide();

            // Inform the user of the password
            QMessageBox::information(this, "Password", "The password is: " + password);


            if (!phoneNumber.isEmpty()) {
                sendSms(phoneNumber, "Someone logged into your account without a password.");
            } else {
                qDebug() << "No phone number found for user.";
                QMessageBox::warning(this, "Error", "No phone number associated with this account.");
            }

        } else {
            QSqlQuery updateQuery;
            updateQuery.prepare("UPDATE EMPLOYE SET SEUL = 0 WHERE USERNAME = :USERNAME");
            updateQuery.bindValue(":USERNAME", storedUsername);

            if (updateQuery.exec()) {
                QMessageBox::warning(this, "Incorrect Answer", "The answer is incorrect. Your account has been locked.");
            } else {
                QMessageBox::warning(this, "Error", "Failed to update account status.");
                qDebug() << "Failed to update account status: " << updateQuery.lastError().text();
            }

            this->hide();
        }
    } else {
        QMessageBox::warning(this, "Error", "Error fetching the correct answer from the database.");
        qDebug() << "Query execution error: " << query.lastError().text();
    }
}


void Motpasseobl::sendSms(const QString &phoneNumber, const QString &message)
{
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QUrl url("https://api.twilio.com/2010-04-01/Accounts/" + ACCOUNT_SID + "/Messages.json");

    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QUrlQuery query;
    query.addQueryItem("To", "+216"+phoneNumber);
    query.addQueryItem("From", FROM_PHONE);
    query.addQueryItem("Body", message);

    QString authValue = "Basic " + QString("%1:%2").arg(ACCOUNT_SID).arg(AUTH_TOKEN).toUtf8().toBase64();
    request.setRawHeader("Authorization", authValue.toUtf8());

    QNetworkReply *reply = manager->post(request, query.query().toUtf8());

    connect(reply, &QNetworkReply::finished, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            qDebug() << "SMS sent successfully.";
        } else {
            qDebug() << "Error sending SMS: " << reply->errorString();
        }
        reply->deleteLater();
    });
}
