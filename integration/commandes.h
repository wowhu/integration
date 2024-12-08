#ifndef COMMANDES_H
#define COMMANDES_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QDate>
#include <QtCharts>

class commandes
{
    int Idcommandes;
    QString DateC;
    QString Med_commandes;
    QString Date_livraison;
    QString Statut;

public:
   commandes();
   commandes(int, QString, QString, QString, QString);
   int getIdcommandes(){return Idcommandes;}
   QString getDateC(){return DateC;}
   QString getMed_commandes(){return Med_commandes;}
   QString getDate_livraison(){return Date_livraison;}
   QString getStatut(){return Statut;}
   void setIdcommandes(int Idcommandes){this->Idcommandes=Idcommandes;}
   void setDateC(QString DateC){this->DateC=DateC;}
   void setMed_commandes(QString Med_commandes){this->Med_commandes=Med_commandes;}
   void setDate_livraison(QString Date_livraison){this->Date_livraison=Date_livraison;}
   void setStatut(QString Statut){this->Statut=Statut;}

   bool ajouter();
   bool supprimer(int);
   QSqlQueryModel * afficher();
   bool modifier(int ,QString ,QString,QString ,QString);
   QSqlQueryModel * tri_medicament(const QString &ordre);
   QSqlQueryModel * chercher(QString);
   QChartView* statistiques();
   void afficherstatistiques();
   void exporterpdf(const QString &fileName);
   QString traiterQuestion(const QString &question);
   QString verifTemp(float temperature);
   float getTemperatureFromDB(int idproduit);



};


#endif // COMMANDES_H
