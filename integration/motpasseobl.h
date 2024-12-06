#ifndef MOTPASSEOBL_H
#define MOTPASSEOBL_H

#include <QMainWindow>
#include <QtNetwork>
#include <QJsonObject>
#include <QJsonDocument>
#include <QUrl>
#include <QUrlQuery>
#include <QNetworkRequest>
#include <QNetworkAccessManager>

namespace Ui {
class Motpasseobl;
}

class Motpasseobl : public QMainWindow
{
    Q_OBJECT

public:
    explicit Motpasseobl(QWidget *parent = nullptr);
    ~Motpasseobl();

    // Modify this line to accept both username and table
    void setQuestionAndAnswers(const QString &username, const QString &table);

signals:
    void correctSecurityAnswer();

private slots:
    void on_pushButtonlogin2_clicked();

private:
    Ui::Motpasseobl *ui;
    QString storedUsername;
    QString storedTable;

    // Update sendSms declaration to match definition
    void sendSms(const QString &phoneNumber, const QString &message);
};

#endif // MOTPASSEOBL_H
