#include "commandes.h"
#include "qsqlerror.h"
#include <QDate>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtCharts>
#include <QSqlRecord>
#include <QSqlRecord>
#include <QDebug>
#include <QPdfWriter>
#include <QPainter>
#include <QTableView>
#include <QFileDialog>
#include <QTextDocument>
#include <QHeaderView>
#include <QPageLayout>
#include <QPageSize>
#include <QRectF>
#include <QFont>
#include <QRect>

commandes::commandes()
{
    Idcommandes=0;
    DateC="";
    Med_commandes="";
    Date_livraison="";
    Statut="";
}
commandes::commandes(int Idcommandes,QString DateC,QString Med_commandes,QString Date_livraison,QString Statut)
{
    this->Idcommandes=Idcommandes;
    this->DateC=DateC;
    this->Med_commandes=Med_commandes;
    this->Date_livraison=Date_livraison;
    this->Statut=Statut;

}

bool commandes::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO commandes (Idcommandes,DateC,Med_commandes,Date_livraison,Statut)" "VALUES (:Idcommandes,:DateC,:Med_commandes,:Date_livraison,:Statut)");
    query.bindValue(":Idcommandes", Idcommandes);
    query.bindValue(":DateC", DateC);
    query.bindValue(":Med_commandes", Med_commandes);
    query.bindValue(":Date_livraison", Date_livraison);
    query.bindValue(":Statut", Statut);
        QDate dateCommande = QDate::fromString(DateC, "dd-MM-yyyy");
        if (dateCommande.month() == 12) {
            qDebug() << "Promotion de fin d'année appliquée : 15% de remise";
            Med_commandes = Med_commandes + " - Remise de 15% appliquée";
        }
    if(query.exec())
    {return true;
    }
    else{
    qDebug ()<<"erreur"<<query.lastError();
    return false;
    }
}

bool commandes::supprimer(int Idcommandes)
{   QSqlQuery query ;
    query.prepare("DELETE FROM commandes WHERE Idcommandes = :Idcommandes");
    query.bindValue(":Idcommandes", Idcommandes);
    if(query.exec())
    {return true;
    }
    else{
    qDebug ()<<"erreur"<<query.lastError();
    return false;
    }
}


QSqlQueryModel *commandes::afficher() {
    QSqlDatabase db = QSqlDatabase::database("my_connection");
    QSqlQuery query(db);
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from commandes");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id de la commande"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date Commande"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Médicament commandé"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date livraison"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Statut commande"));
    return model;
}


bool commandes::modifier(int Idcommandes,QString DateC,QString Med_commandes,QString Date_livraison,QString Statut) {

    QSqlDatabase db = QSqlDatabase::database("my_connection");
      QSqlQuery query(db);
      QList<QPair<QString, QString>> list;

      if (!DateC.isEmpty()) list.append(qMakePair(QString("DateC"), DateC));
      if (!Med_commandes.isEmpty()) list.append(qMakePair(QString("Med_commandes"), Med_commandes));
      if (!Date_livraison.isEmpty()) list.append(qMakePair(QString("Date_livraison"), Date_livraison));
      if (!Statut.isEmpty()) list.append(qMakePair(QString("Statut"), Statut));

      QString queryString = "UPDATE commandes SET ";
      QStringList setClauses;
      for (const auto& field : list) {
          setClauses.append(field.first + " = :" + field.first);
      }
      queryString += setClauses.join(", ");
      queryString += " WHERE Idcommandes = :Idcommandes";

      query.prepare(queryString);
      query.bindValue(":Idcommandes", Idcommandes);
      for (const auto& field : list) {
          query.bindValue(":" + field.first, field.second);
      }

      if (!query.exec()) {
          qDebug() << "Error executing query:" << query.lastError();
          return false;
      }

      return true;
  }

QSqlQueryModel* commandes::tri_medicament(const QString &ordre)
{
    QSqlDatabase bd = QSqlDatabase::database("my_connection");
    QSqlQueryModel *model = new QSqlQueryModel();
    QString query = ("SELECT * FROM commandes ORDER BY " + ordre);
    model->setQuery(query, bd);
    if (model->lastError().isValid()) {
        qDebug() << "Erreur lors du tri :" << model->lastError().text();
        return nullptr;
    }

    return model;
}

QSqlQueryModel * commandes::chercher(QString Statut)
{
QSqlDatabase bd = QSqlDatabase::database("my_connection");
        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query(bd);
        query.prepare("SELECT * FROM commandes WHERE STATUT = :Statut");
        query.bindValue(":Statut", Statut);

        if (!query.exec()) {
            qWarning() << "Error executing query: " << query.lastError();
            return nullptr;
        }
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id de la commande"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date Commande"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Médicament commandé"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date livraison"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Statut commande"));
        return model;
}


void commandes::afficherstatistiques() {
    QChartView* chartView = statistiques();
    if (chartView) {
        QWidget *window = new QWidget();
        QVBoxLayout *layout = new QVBoxLayout();
        layout->addWidget(chartView);
        window->setLayout(layout);
        window->resize(600, 400);
        window->show();
    } else {
        qDebug() << "Erreur lors de la création du diagramme.";
    }
}

QChartView* commandes::statistiques() {
    QSqlDatabase db = QSqlDatabase::database("my_connection");
    QSqlQuery query(db);
    QPieSeries *series = new QPieSeries();
    query.prepare("SELECT Statut, COUNT(*) FROM commandes GROUP BY Statut");
    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête : " << query.lastError();
        return nullptr;
    }

    while (query.next()) {
        QString vue = query.value(0).toString();
        int count = query.value(1).toInt();
        series->append(vue, count);
    }
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des statuts commandes");
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}


void commandes::exporterpdf(const QString &fileName) {
    QSqlDatabase db = QSqlDatabase::database("my_connection");
    QSqlQuery query(db);
    if (!db.isOpen() && !db.open()) {
        qDebug() << "Erreur de connexion à la base de données:" << db.lastError().text();
        return;
    }
    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageOrientation(QPageLayout::Portrait);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setResolution(100);

    QPainter painter(&pdfWriter);
    if (!painter.isActive()) {
        qDebug() << "Erreur lors du démarrage de la peinture sur le PDF.";
        return;
    }
    QFont font("Arial", 10);
    painter.setFont(font);
    QRect pageRect = QRect(pdfWriter.pageLayout().paintRect().toRect());
    QStringList headers = {"idcommande", "date_commande", "medcommandes", "date_livraison", "statut"};
    int numColumns = headers.size();
    int totalWidth = pageRect.width();
    int columnWidth = totalWidth / numColumns;

    int startX = pageRect.left();
    int startY = pageRect.top() + 20;
    for (int i = 0; i < numColumns; ++i) {
        painter.drawText(startX + i * columnWidth, startY, columnWidth, 20, Qt::AlignCenter, headers[i]);
    }

    int rowHeight = 20;
    int currentY = startY + rowHeight;
    query.prepare("SELECT * FROM commandes");

    if (!query.exec()) {
        qDebug() << "Erreur d'exécution de la requête : " << query.lastError().text();
        return;
    }
    while (query.next()) {
        for (int i = 0; i < numColumns; ++i) {
            painter.drawText(startX + i * columnWidth, currentY, columnWidth, rowHeight, Qt::AlignCenter, query.value(i).toString());
        }

        currentY += rowHeight;

        if (currentY + rowHeight > pageRect.bottom()) {
            pdfWriter.newPage();
            currentY = startY + rowHeight;

            for (int i = 0; i < numColumns; ++i) {
                painter.drawText(startX + i * columnWidth, currentY, columnWidth, rowHeight, Qt::AlignCenter, headers[i]);
            }
            currentY += rowHeight;
        }
    }

    painter.end();

    qDebug() << "Table exportée avec succès au format PDF!";
}

QString commandes::traiterQuestion(const QString &question)
    {
        if (question.contains("statut de la commande", Qt::CaseInsensitive)) {
            QSqlQuery query;
            query.prepare("SELECT Statut FROM commandes WHERE Idcommandes = :id");
            query.bindValue(":id", 1);
            if (query.exec() && query.next()) {
                QString statut = query.value(0).toString();
                return "Le statut de la commande est : " + statut;
            } else {
                return "Erreur lors de la récupération du statut.";
            }
        } else {
            return "Je n'ai pas compris la question. Essayez de demander l'état de la commande.";
        }
    }

float commandes::getTemperatureFromDB(int idp)
{
    QSqlQuery query;
    query.prepare("SELECT TEMP FROM PRODUIT1 WHERE ID = :idp");
    query.bindValue(":idp", idp);

    if (query.exec()) {
        if (query.next()) {
            return query.value(0).toFloat();
        } else {
            qDebug() << "Aucun produit trouvé avec l'ID :" << idp;
            return -1;
        }
    } else {
        qDebug() << "Échec de l'exécution de la requête :" << query.lastError().text();
        return -1;
    }
}

QString commandes::verifTemp(float temperature)
{
    float tempThreshold = 30.0;
    if (temperature != tempThreshold) {
        return "ALERT";
    } else {
        return "OK";
    }
}
