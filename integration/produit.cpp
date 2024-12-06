#include "produit.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QPainter>


#include "produit.h"
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QSqlQuery>
#include <QDebug>
Produit::Produit() {}

Produit::Produit(int id, float prix, const QString& dateEnreg, const QString& type, const QString& nom, int quantite, QString& temp, QString& humid)
    : identifiant(id), prix(prix), dateEnreg(dateEnreg), type(type), nom(nom), quantite(quantite), temp(temp), humid(humid) {}

bool Produit::ajouter() {
    QSqlQuery query;

    // Afficher les données pour débogage
    qDebug() << "ID:" << identifiant
             << "Nom:" << nom
             << "Prix:" << prix
             << "Date:" << dateEnreg
             << "Quantité:" << quantite
             << "Temperature ideal:" << temp
             << "Humidite ideal:" << humid
             << "Type:" << type;

    query.prepare("INSERT INTO PRODUIT1 (ID, NOM, PRIX, DATE_ENREG, QUANTITE, TYPE , TEMP , HUMID ) "
                  "VALUES (:ID, :NOM, :PRIX, :DATE_ENREG, :QUANTITE, :TYPE , :TEMP, :HUMID)");

    // Conversions explicites des types si nécessaire
    query.bindValue(":ID", identifiant);
    query.bindValue(":NOM", nom);
    query.bindValue(":PRIX", QString::number(prix, 'f', 2));
    query.bindValue(":DATE_ENREG", dateEnreg);
    query.bindValue(":QUANTITE", quantite);
    query.bindValue(":TYPE", type);
    query.bindValue(":TEMP", temp);
    query.bindValue(":HUMID", humid);

    if (query.exec()) {
        qDebug() << "Produit ajouté avec succès!";
        return true;
    } else {
        qDebug() << "Erreur lors de l'ajout du produit:" << query.lastError().text();
        return false;
    }
}


QSqlQueryModel* Produit::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT ID, NOM, PRIX, DATE_ENREG, QUANTITE, TYPE , TEMP , HUMID FROM PRODUIT1");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_ENREG"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("QUANTITE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("TEMP"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("HUMID"));

    return model;
}



QSqlQueryModel* Produit::rechercher(const QString& searchType, const QString& value) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    QString columnName;
    if (searchType == "id") {
        columnName = "ID";
    } else if (searchType == "nom") {
        columnName = "NOM";
    } else if (searchType == "type") {
        columnName = "TYPE";
    } else if (searchType == "quantite") {
        columnName = "QUANTITE";
    } else if (searchType == "prix") {
        columnName = "PRIX";
    } else if (searchType == "date") {
        columnName = "DATE_ENREG";
    } else {
        qDebug() << "Type de recherche invalide fourni.";
        return model; // Retourne un modèle vide si le type de recherche est invalide
    }

    // Préparer la requête avec la colonne choisie
    query.prepare(QString("SELECT ID, NOM, PRIX, DATE_ENREG, QUANTITE, TYPE "
                          "FROM PRODUIT1 WHERE %1 LIKE :value").arg(columnName));
    query.bindValue(":value", "%" + value + "%");


    if (query.exec()) {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'enregistrement"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("Type"));
    } else {
        qDebug() << "Erreur lors de l'exécution de la requête:" << query.lastError().text();
    }

    return model;
}
void Produit::exportDataToPDF() {
    QSqlQuery query;

    QString fileName = QFileDialog::getSaveFileName(nullptr, "Enregistrer le PDF", "", "Fichiers PDF (*.pdf)");
    if (fileName.isEmpty()) {
        qDebug() << "Aucun fichier sélectionné. Annulation de la génération du PDF.";
        return; // Quitte si aucun fichier n'est sélectionné
    }

    query.prepare("SELECT ID, NOM, PRIX, DATE_ENREG, QUANTITE, TYPE FROM PRODUIT1");


    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);

    QPainter painter;
    if (!painter.begin(&printer)) {
        qDebug() << "Échec de l'initialisation du peintre.";
        return; // Quitte si l'initialisation du peintre échoue
    }

    QString html = "<html><head><style>"
                   "body { font-family: Arial, sans-serif; margin: 20px; }"
                   "h1 { text-align: center; }"
                   "table { width: 100%; border-collapse: collapse; margin-top: 20px; }"
                   "th, td { border: 1px solid black; padding: 8px; text-align: center; }"
                   "th { background-color: #f2f2f2; }"
                   "</style></head><body>"
                   "<h1>Informations sur les Produits</h1>"
                   "<table>"
                   "<tr><th>ID</th><th>Nom</th><th>Prix</th><th>Date d'enregistrement</th><th>Quantité</th><th>Type</th></tr>";


    if (query.exec()) {
        while (query.next()) {
            html += QString("<tr><td>%1</td><td>%2</td><td>%3</td><td>%4</td><td>%5</td><td>%6</td></tr>")
                        .arg(query.value("ID").toString())
                        .arg(query.value("NOM").toString())
                        .arg(query.value("PRIX").toString())
                        .arg(query.value("DATE_ENREG").toString())
                        .arg(query.value("QUANTITE").toString())
                        .arg(query.value("TYPE").toString());
        }
    } else {
        qDebug() << "Erreur lors de la récupération des données de PRODUIT1:" << query.lastError().text();
    }

    html += "</table></body></html>"; // Fermer les balises HTML


    QTextDocument document;
    document.setHtml(html);

    document.drawContents(&painter);
    painter.end(); // Terminer le peintre

    qDebug() << "PDF généré avec succès!";
}





QChartView* Produit::createPieChartCout() {

    int coutRange1 = 0; // 0-50
    int coutRange2 = 0; // 50-100
    int coutRange3 = 0; // 100-200
    int coutRange4 = 0; // 200+

    QPieSeries *series = new QPieSeries();


    QSqlQuery query("SELECT PRIX FROM PRODUIT1");
    while (query.next()) {
        float cout = query.value(0).toFloat();
        if (cout >= 0 && cout <= 50) {
            coutRange1++;
        } else if (cout > 50 && cout <= 100) {
            coutRange2++;
        } else if (cout > 100 && cout <= 200) {
            coutRange3++;
        } else {
            coutRange4++;
        }
    }


    if (coutRange1 > 0) series->append("0-50", coutRange1);
    if (coutRange2 > 0) series->append("50-100", coutRange2);
    if (coutRange3 > 0) series->append("100-200", coutRange3);
    if (coutRange4 > 0) series->append("200+", coutRange4);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Distribution des Coûts");
    series->setLabelsVisible();

    // Configurer la vue du graphique
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->chart()->setAnimationOptions(QChart::AllAnimations);

    return chartView;
}

QChartView* Produit::type1() {

    int a2 = 0;
    int a3 = 0;



    QSqlQuery query("SELECT TYPE FROM PRODUIT1");
    while (query.next()) {
        QString type = query.value(0).toString();
      if (type == "pharmacy") {
            a2++;
        } else if (type == "parapharmacy") {
            a3++;
        }
    }

    // Créer un ensemble de barres
    QBarSet *typeSet = new QBarSet("Types");
    *typeSet << a2 << a3 ;


    typeSet->setColor(QColor("#1E90FF")); // bleu
    typeSet->setColor(QColor("#32CD32")); // vert
    typeSet->setColor(QColor("#FFD700")); // jaune
    typeSet->setColor(QColor("#FF6347")); // rouge

    QBarSeries *series = new QBarSeries();
    series->append(typeSet);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques des Types de Produits");

    QStringList categories;
    categories << "pharmacy" << "parapharmacy";

    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);

    // Configurer la vue du graphique
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->chart()->setAnimationOptions(QChart::AllAnimations);

    return chartView;
}

QSqlQueryModel* Produit::trier(const QString& sortColumn) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QString queryStr;

    if (sortColumn == "prix") {
        queryStr = "SELECT * FROM PRODUIT1 ORDER BY PRIX";
    } else if (sortColumn == "id") {
        queryStr = "SELECT * FROM PRODUIT1 ORDER BY ID";
    } else if (sortColumn == "type") {
        queryStr = "SELECT * FROM PRODUIT1 ORDER BY TYPE";
    } else if (sortColumn == "quantite") {
        queryStr = "SELECT * FROM PRODUIT1 ORDER BY QUANTITE";
    } else if (sortColumn == "date") {
        queryStr = "SELECT * FROM PRODUIT1 ORDER BY DATE_ENREG";
    } else {
        queryStr = "SELECT * FROM PRODUIT1 ORDER BY NOM";
    }

    model->setQuery(queryStr);


    if (model->lastError().isValid()) {
        qDebug() << "Error executing sort query:" << model->lastError().text();
    }


    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'enregistrement"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Type"));

    return model;
}
void Produit::showNotification(const QString &title, const QString &message) {

    if (!QSystemTrayIcon::isSystemTrayAvailable()) {
        QMessageBox::critical(nullptr, "Error", "System tray is not available!");
        return;
    }

    // Use a static tray icon to ensure it persists
    static QSystemTrayIcon *trayIcon = nullptr;

    if (!trayIcon) {
        trayIcon = new QSystemTrayIcon();
        trayIcon->setIcon(QIcon(":/path_to_your_icon.png")); // Add your custom icon here
        trayIcon->show();
    }
    qDebug() << "System tray available:" << QSystemTrayIcon::isSystemTrayAvailable();

    qDebug() << "System tray available:" << QSystemTrayIcon::isSystemTrayAvailable();
    qDebug() << "Icon loaded successfully:" << !QIcon(":/icons/icon.png").isNull();
    trayIcon->showMessage(title, message, QSystemTrayIcon::Information, 5000);
    qDebug() << "Notification displayed.";

}

bool Produit::supprimer(int id) {
    QSqlQuery query;


    query.prepare("DELETE FROM PRODUIT1 WHERE ID = :ID");
    query.bindValue(":ID", id);


    if (query.exec()) {
        qDebug() << "Produit supprimé avec succès!";
        return true;
    } else {
        qDebug() << "Erreur lors de la suppression du produit:" << query.lastError().text();
        return false;
    }
}

bool Produit::modifier(int id) {
    QSqlQuery query;

    // Prepare the query to update the product with the given ID
    query.prepare("UPDATE PRODUIT1 SET NOM = :NOM, PRIX = :PRIX, DATE_ENREG = :DATE_ENREG, TEMP = :TEMP, HUMID = :HUMID, "
                     "QUANTITE = :QUANTITE, TYPE = :TYPE WHERE ID = :ID");
    query.bindValue(":ID", id);
    query.bindValue(":NOM", nom);
    query.bindValue(":PRIX", QString::number(prix, 'f', 2)); // Convert float to QString
    query.bindValue(":DATE_ENREG", dateEnreg);
    query.bindValue(":QUANTITE", quantite);
    query.bindValue(":TYPE", type);
    query.bindValue(":TEMP", temp);
    query.bindValue(":HUMID", humid);

    // Execute the query and handle errors
    if (query.exec()) {
        qDebug() << "Produit mis à jour avec succès!";
        return true;
    } else {
        qDebug() << "Erreur lors de la mise à jour du produit:" << query.lastError().text();
        return false;
    }
}


