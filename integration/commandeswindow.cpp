#include "commandeswindow.h"
#include "ui_commandeswindow.h"
#include "commandes.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "arduino.h"
#include <QDebug>

CommandesWindow::CommandesWindow(QWidget *parent)
    : QMainWindow(parent) ,ui(new Ui::CommandesWindow)
{
    ui->setupUi(this);
    ui->tab_commandes->setModel(c.afficher());
    connect(ui->promo, &QPushButton::clicked, this, &CommandesWindow::on_promo_clicked);
    int ret=A.connect_arduino();
    switch (ret){
    case(0):qDebug()<<"arduino is available and connected to:" <<A.getArduinoPortName();
        break;
    case(1):qDebug()<<"arduino is available but not connected to:" <<A.getArduinoPortName();
        break;
    case(-1):qDebug() <<"arduino is not available";

    }
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));

}


CommandesWindow::~CommandesWindow()
{
    delete ui;
}

void CommandesWindow::on_btn_ajouter_commande_3_clicked()
{
        int Idcommande = ui->IdCommande_3->text().toInt();
        QString DateC = ui->DateCommande_3->text();
        QString Med_commandes = ui->MedicamentCommande_3->text();
        QString Date_livraison = ui->DateLivraisonCommande_3->text();
        QString Statut = ui->StatutCommande_3->text();
        commandes c (Idcommande,DateC,Med_commandes,Date_livraison,Statut);

        bool test = c.ajouter();
        if (test) {
            QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Ajout effectué\n"
                                                                          "Click cancel to exit."), QMessageBox::Cancel);
            ui->tab_commandes->setModel(c.afficher());
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Ajout non effectué\n"
                                                                              "Click cancel to exit."), QMessageBox::Cancel);
        }


}
void CommandesWindow::on_btn_supprimer_commande_3_clicked()
{
        int Idcommande = ui->IdCommande_3->text().toInt();
        bool test = c.supprimer(Idcommande);
        if (test) {
            QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Suppression effectuée\n"                                                                            "Click cancel to exit."), QMessageBox::Cancel);
            ui->tab_commandes->setModel(c.afficher());
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Suppression non effectuée\n"
                                                                              "Click cancel to exit."), QMessageBox::Cancel);
        }


}
void CommandesWindow::afficher()
{
             commandes c;
            QSqlQueryModel *model = c.afficher();
            if (model) {
                ui->tab_commandes->setModel(model);
            } else {
                QMessageBox::critical(this, tr("Error"), tr("Failed to load data from the database."));
            }
}

void CommandesWindow::on_btn_modifier_commande_3_clicked()
{
    int Idcommandes = ui->IdCommande_3->text().toInt();
        QString DateC = ui->DateCommande_3->text();
        QString Med_commandes = ui->MedicamentCommande_3->text();
        QString Date_livraison = ui->DateLivraisonCommande_3->text();
        QString Statut = ui->StatutCommande_3->text();
        commandes c;
        bool test = c.modifier(Idcommandes,DateC,Med_commandes,Date_livraison,Statut);
        if (test) {
            ui->tab_commandes->setModel(c.afficher());
            QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Modification effectuée\n"
                                                                             "Click cancel to exit."), QMessageBox::Cancel);
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Modification non effectuée\n"
                                                                              "Click cancel to exit."), QMessageBox::Cancel);
        }

}


void CommandesWindow::on_CritereTriCommande_3_currentIndexChanged(int index)
{
    commandes c;
       QSqlQueryModel *model = nullptr;
       if (index == 1) {
           model = c.tri_medicament("IDCOMMANDES ASC");
       } else if (index == 2) {
           model = c.tri_medicament("MED_COMMANDES ASC");
       } else {
           QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un critère de tri.");
           return;
       }
       if (model) {
           ui->tab_commandes->setModel(model);
       } else {
           QMessageBox::warning(this, "Erreur", "Le tri a échoué. Veuillez essayer un autre critère.");
       }
}


void CommandesWindow::on_chercher_commande_3_clicked()
{
    QString Statut = ui->comboBox->currentText();
        commandes c;
        QSqlQueryModel *model = c.chercher(Statut);

        if (model) {
            ui->tab_commandes->setModel(model);
        } else {
            QMessageBox::warning(this, "Recherche échouée", "Aucune commande trouvée ou erreur de requête.");
        }
}


void CommandesWindow::on_stat_clicked()
{
    commandes c;
        c.afficherstatistiques();
}


void CommandesWindow::on_btn_pdf_commande_3_clicked()
{
    commandes c;
            QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer en PDF", "", "*.pdf");
            if (!fileName.isEmpty()) {
                c.exporterpdf(fileName);
            } else {
                qDebug() << "Aucun fichier sélectionné.";
            }
}


void CommandesWindow::on_envoyer_clicked()
{
        QString question = ui->question->text();
        commandes c;
        QString reponse = c.traiterQuestion(question);
        ui->reponse->append("Bot : " + reponse);
        ui->question->clear();
}



void CommandesWindow::on_promo_clicked()
{
       QString dateCommande = ui->DateCommande_3->text();
       QDate date = QDate::fromString(dateCommande, "dd-MM-yyyy");
       if (!date.isValid()) {
           QMessageBox::warning(this, "Erreur de date", "La date de la commande est invalide.");
           return;
       }
       if (date.month() == 12) {
           QMessageBox::information(this, "Promotion", "15% de remise appliqué sur tous les médicaments de décembre !");
       } else {
           QMessageBox::information(this, "Pas de promotion", "Pas de promotion pour ce mois, restez branchés !");
       }
}


void CommandesWindow::on_temp_clicked()
{  commandes c;
    int idproduit = ui->idproduit->text().toInt();
    float temperature = c.getTemperatureFromDB(idproduit);

    if (temperature == -1) {
        qDebug() << "Erreur : Produit introuvable dans la base de données.";
        A.writeToArduino("invalid");
        return;
    }

    QString message = c.verifTemp(temperature);
    QByteArray data = message.toUtf8();

    qDebug() << "Température du produit :" << temperature << ", Statut :" << message;

    if (message != "0") {
        A.writeToArduino(data);
    } else {
        A.writeToArduino("OK");
    }
 }




