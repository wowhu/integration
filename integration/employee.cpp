#include "employee.h"
#include <QDate>
#include <QSqlQuery>
#include <QSqlError>

Employee::Employee()
{

}
Employee::Employee(int id,QString nom,QString prenom,QString poste,QDate date,QString sexee ,float salaire,QString email  )
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->poste=poste;
    this->date=date;
    this->sexee=sexee;
    this->salaire=salaire;
    this->email=email;

}
bool Employee::ajouter()
{
    QSqlQuery query;

    QString res=QString::number(id);
    qDebug() << "Inserting date:" << date.toString();
    query.prepare("INSERT INTO EMPLOYE (IDE, NOME, PRENOME, POSTEE, SEXEE, SALAIREE, DATE_NAISSANCEE, EMAILE) VALUES (:IDE, :NOME, :PRENOME, :POSTEE, :SEXEE, :SALAIREE, :DATE_NAISSANCEE, :EMAILE)");
    query.bindValue(":IDE", res);
    query.bindValue(":PRENOME", prenom);
    query.bindValue(":NOME", nom);
    query.bindValue(":POSTEE", poste);
    query.bindValue(":SEXEE", sexee);
    query.bindValue(":SALAIREE", salaire);
    query.bindValue(":DATE_NAISSANCEE", date);
    query.bindValue(":EMAILE", email);


    return query.exec();
}
bool Employee::supprimer(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);
   query.prepare("DELETE FROM EMPLOYE WHERE IDE = :IDE");
    query.bindValue(":IDE", res);
    if (query.exec())
        {
            return query.numRowsAffected() > 0;
        }
        return false;
}
QSqlQueryModel *Employee::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT IDE, NOME, PRENOME, POSTEE, SEXEE, SALAIREE, TO_CHAR(DATE_NAISSANCEE, 'YYYY-MM-DD') AS DATE_NAISSANCEE, EMAILE FROM EMPLOYE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOME"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("POSTEE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SEXEE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("SALAIREE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DATE_NAISSANCEE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAILE"));

    return model;
}
bool Employee::modifier(int id) {
    QSqlQuery query;
    QString res = QString::number(id);
    query.prepare("UPDATE EMPLOYE SET NOME = :NOME, PRENOME = :PRENOME, POSTEE = :POSTEE, SEXEE = :SEXEE, "
                  "SALAIREE = :SALAIREE, DATE_NAISSANCEE = :DATE_NAISSANCEE, EMAILE = :EMAILE "
                  "WHERE IDE = :IDE");
    query.bindValue(":IDE", res);
    query.bindValue(":PRENOME", prenom);
    query.bindValue(":NOME", nom);
    query.bindValue(":POSTEE", poste);
    query.bindValue(":SEXEE", sexee);
    query.bindValue(":SALAIREE", salaire);
    query.bindValue(":DATE_NAISSANCEE", date);
    query.bindValue(":EMAILE", email);
    if (query.exec())
        {
            return query.numRowsAffected() > 0;
        }
        return false;
}

bool Employee::recherche(QString res) {
    QSqlQuery query;
    query.prepare("SELECT IDENTER FROM EMPLOYE WHERE IDENTER = :IDENTER");
    query.bindValue(":IDENTER", res);

    if (query.exec()) {
        if (query.next()) {
            return true;
        }
    }

    return false;
}
