#ifndef PRODUIT_H
#define PRODUIT_H

#include <QString>
#include <QDate>
#include <QSqlQueryModel>
#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QPainter>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts>

#include <QApplication>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QTimer>
class Produit {
public:
    Produit();
    Produit(int id, float prix, const QString& dateEnreg, const QString& type, const QString& nom, int quantite,QString& temp, QString& humid);

    // Getters
    int getIdentifiant() const;
    double getPrix() const;
    QString& getDateEnreg() const;
    QString getType() const;
    QString getNom() const;
    int getQuantite() const;
    QString getTemp() const;
    QString getHumid() const;

    // Setters
    void setPrix(double prix);
    void setDateEnreg(const QString& dateEnreg);
    void setType(const QString& type);
    void setNom(const QString& nom);
    void setQuantite(int quantite);
    void setTemp(float temp);
    void setHumid(float humid);
    bool ajouter();
    bool supprimer(int id);


    QSqlQueryModel* afficher();

    QSqlQueryModel* getStatisticsByType();
    QSqlQueryModel* sortByDate();

    QSqlQueryModel* searchByExpiration(const QDate& expirationDate);
    bool exportToPDF(const QString& filePath);

     bool modifier(int id);
//*******************************************
   QSqlQueryModel* rechercher(const QString& searchType, const QString& value);
    void exportDataToPDF();
    QChartView* createPieChartCout();
    QChartView* type1();
    QSqlQueryModel* trier(const QString& sortColumn);
void showNotification(const QString &title, const QString &message);

private:
    int identifiant;
    float prix;
    QString dateEnreg;
    QString type;
    QString nom;
    int quantite;
    QString temp;
    QString humid;
};

#endif // PRODUIT_H

