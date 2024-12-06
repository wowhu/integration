#include "produitw.h"
#include "ui_produitw.h"
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
#include <iostream> // Required for std namespace

using namespace std;
produitw::produitw(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::produitw)
{
    A = new Arduino();
    ui->setupUi(this);
    int ret = A->connect_arduino();  // Connect Arduino when the MainWindow is initialized
    if (ret == 0) {
        qDebug() << "Arduino connected.";
    } else {
        qDebug() << "Error: Arduino not connected.";
    }
}

produitw::~produitw()
{
    A->close_arduino();  // Close the connection to Arduino when the MainWindow is destroyed
    delete ui;
    delete A;
}

void produitw::on_ajout_clicked()
{
    int id = ui->id->text().toInt();
    QString nom = ui->nom->text();
    float prix = ui->prix1->text().toFloat();
    QString dateEnreg = ui->date->text();
    int quantite = ui->quantite->text().toInt();
    QString type = ui->type1->currentText();
    QString temp = ui->temp1->text();
    QString humid = ui->humid1->text();
    Produit P(id, prix, dateEnreg, type, nom, quantite, temp, humid);
    bool test = P.ajouter();

    if (test) {
        ui->tableView->setModel(Ptmp.afficher());
        //*************************
        QFile file("C:/Users/User/Desktop/fichier.txt");
                          if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
                              qDebug() << "Impossible d'ouvrir le fichier.";
                              return;
                                        }
                          // Obtenir la date et l'heure actuelles
                                     QDateTime currentDateTime = QDateTime::currentDateTime();
                                     QString formattedDateTime = currentDateTime.toString("dd.MM.yyyy hh:mm:ss");

                                     // Écrire la date et l'heure actuelles suivies du texte dans le fichier
                                     QTextStream out(&file);
                                    out << "<font color=\"green\">Le produit avec le nom : " << nom << " a ete ajoute a " << formattedDateTime << "</font>" << '\n';

                                     file.close();
          //*************************

        QMessageBox::information(this, tr("OK"), tr("Product added successfully.\nClick Cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(this, tr("Not OK"), tr("Failed to add product.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void produitw::on_aff_clicked()
{
      ui->tableView->setModel(Ptmp.afficher());
     //  Ptmp.showNotification("farah","farahfarahfarah");
}

void produitw::on_rech_textChanged(const QString &arg1)
{
    QString selectedOption = ui->comboBox_3->currentText();
    if(arg1.isEmpty()&& ui->rech->hasFocus() && !ui->rech->hasSelectedText())
    {
        ui->tableView->setModel(Ptmp.afficher());
        ui->rech->setToolTip("Entrez un critere de recherche");
        return;
    }

    ui->tableView->setModel(Ptmp.rechercher(selectedOption,arg1));
    ui->tableView->clearSelection();
}

void produitw::on_PDF_clicked()
{
    Ptmp.exportDataToPDF();
}

void produitw::on_stats_clicked()
{
    // Clear any existing items in the layout
        QLayoutItem* item;
       while ((item = ui->stats_3->layout()->takeAt(0)) != nullptr) {
             delete item->widget();
            delete item;
        }

        // Check the selected option from combo_3 and set up the appropriate chart

        QString selectedOption = ui->comboBox->currentText();
        QChartView *chartView = nullptr;

        if (selectedOption == "prix") {
            // Create the pie chart based on 'etat'
            chartView = Ptmp.createPieChartCout();
        } else if (selectedOption == "type") {
            // Create the pie chart based on 'poids'
            chartView = Ptmp.type1();
        }

        // Add the chart view to the layout if it was successfully created
        if (chartView != nullptr) {
            ui->stats_3->layout()->addWidget(chartView);
        }
}
void produitw::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    QSqlQueryModel* sorteModel = Ptmp.trier(arg1);
    ui->tableView->setModel(sorteModel);
}


void produitw::on_notif_clicked()
{
    Ptmp.showNotification("Alerte de Stock","Le stock du produit XYZ est faible.");
}

void produitw::on_Historique_clicked()
{
    QDialog *dialog = new QDialog(this);
           dialog->resize(600, 600);
           QVBoxLayout *layout = new QVBoxLayout(dialog);
            QTextEdit *textEdit = new QTextEdit(dialog);

           // Ouvrir le fichier en lecture seule
           QFile file("C:/Users/User/Desktop/fichier.txt");
           if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
               // Lire le contenu du fichier ligne par ligne et l'ajouter à QTextEdit
               QTextStream in(&file);
               while (!in.atEnd()) {
                   QString line = "evenement : "+in.readLine();
                   textEdit->append(line);
               }
               // Fermer le fichier
               file.close();
           } else {
               // Afficher un message d'erreur si le fichier n'a pas pu être ouvert
               qDebug() << "Erreur lors de l'ouverture du fichier.";
           }
           layout->addWidget(textEdit);
           dialog->exec();

}

void produitw::on_supprmier_clicked()
{
    int id = ui->rech_2->text().toInt();
    bool test = Ptmp.supprimer(id);

    if (test) {
        ui->tableView->setModel(Ptmp.afficher());
        QFile file("C:/Users/User/Desktop/fichier.txt");
                           if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
                               qDebug() << "Impossible d'ouvrir le fichier.";
                               return;
                                         }
                           // Obtenir la date et l'heure actuelles
                                      QDateTime currentDateTime = QDateTime::currentDateTime();
                                      QString formattedDateTime = currentDateTime.toString("dd.MM.yyyy hh:mm:ss");

                                      // Écrire la date et l'heure actuelles suivies du texte dans le fichier
                                      QTextStream out(&file);
                                      out << "<font color=\"red\">Le produit avec le id : " << id << " a ete supprime le " << formattedDateTime << "</font>" << '\n';                               file.close();
        QMessageBox::information(this, tr("OK"), tr("Product deleted successfully.\nClick Cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(this, tr("Not OK"), tr("Failed to delete product.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void produitw::on_modifier_clicked()
{
    int id = ui->id->text().toInt();
    QString nom = ui->nom->text();
    float prix = ui->prix1->text().toFloat();
    QString dateEnreg = ui->date->text();
    int quantite = ui->quantite->text().toInt();
    QString type = ui->type1->currentText();
    QString temp = ui->temp1->text();
    QString humid = ui->humid1->text();

    Produit P(id, prix, dateEnreg, type, nom, quantite ,temp ,humid);
    bool test = P.modifier(id);

    if (test) {
        ui->tableView->setModel(Ptmp.afficher());
        QFile file("C:/Users/User/Desktop/fichier.txt");
                           if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
                               qDebug() << "Impossible d'ouvrir le fichier.";
                               return;
                                         }
                           // Obtenir la date et l'heure actuelles
                                      QDateTime currentDateTime = QDateTime::currentDateTime();
                                      QString formattedDateTime = currentDateTime.toString("dd.MM.yyyy hh:mm:ss");

                                      // Écrire la date et l'heure actuelles suivies du texte dans le fichier
                                      QTextStream out(&file);
                                      out << "<font color=\"blue\">Le produit avec l'ID : " << id << " a ete modifie le " << formattedDateTime << "</font>" << '\n';
                                     file.close();

        QMessageBox::information(this, tr("OK"), tr("Product updated successfully.\nClick Cancel to exit."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(this, tr("Not OK"), tr("Failed to update product.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void produitw::on_TEMPETHUMID_clicked() {
    A->request_temperature_humidity();  // Send the request for temperature and humidity
    QThread::sleep(1);  // Small delay for Arduino to respond

    QString response = A->read_response();  // Read the response from Arduino
    if (!response.isEmpty()) {
        QStringList values = response.split(",");
        if (values.size() == 2) {
            QString tempValue = values.at(0);  // First value: temperature
            QString humidValue = values.at(1);  // Second value: humidity

            ui->textEditTemp->setText(tempValue + " °C");
            ui->textEditHumid->setText(humidValue + " %");
        } else {
            ui->textEditTemp->setText("Invalid data");
            ui->textEditHumid->setText("Invalid data");
        }
    } else {
        ui->textEditTemp->setText("No data received.");
        ui->textEditHumid->setText("No data received.");
    }
}






