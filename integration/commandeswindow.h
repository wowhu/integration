#ifndef COMMANDESWINDOW_H
#define COMMANDESWINDOW_H
#include <QMainWindow>
#include <commandes.h>
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CommandesWindow; }
QT_END_NAMESPACE

class CommandesWindow : public QMainWindow
{
    Q_OBJECT

public:
    CommandesWindow(QWidget *parent = nullptr);
    ~CommandesWindow();

private slots:
    void on_btn_ajouter_commande_3_clicked();
    void on_btn_supprimer_commande_3_clicked();
    void afficher();
    void on_btn_modifier_commande_3_clicked();
    void on_CritereTriCommande_3_currentIndexChanged(int index);
    void on_chercher_commande_3_clicked();
    void on_stat_clicked();
    void on_btn_pdf_commande_3_clicked();

    void on_envoyer_clicked();

    void on_promo_clicked();

    void on_temp_clicked();

private:
    Ui::CommandesWindow *ui;
    commandes c;
    QSqlQueryModel *model;
    QByteArray data;
    Arduino A;
};
#endif // COMMANDESWINDOW_H
