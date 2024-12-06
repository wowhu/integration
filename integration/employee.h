#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QDate>

class Employee
{
    QString nom,prenom,poste,sexee;
    int id;
    float salaire;
     QString email;
    QDate date ;

public:
   Employee();
   Employee(int, QString, QString, QString, QDate, QString, float , QString);
   QString getNOM(){return nom;}
   QString getPRENOM(){return prenom;}
   QString getPOSTE(){return poste;}
   QString getSEXEE(){return sexee;}
   QString getEMAIL(){return email;}
   QDate getDATE(){return date;}
   float getSALAIRE(){return salaire;}
   int getID(){return id;}
   void setNOM(QString n){nom=n;}
   void setPRENOM(QString n){prenom=n;}
   void setPOSTE(QString n){poste=n;}
   void setSEXEE(QString n){sexee=n;}
   void setEMAIL(QString n){email=n;}
   void setDATE(QDate n){date=n;}
     void setSALAIRE(float n){salaire=n;}
   void setID(int id){this->id=id;}
   bool ajouter();
   QSqlQueryModel * afficher();
   bool supprimer(int);
   bool modifier(int);
   bool recherche(QString res);
};

#endif // EMPLOYEE_H
