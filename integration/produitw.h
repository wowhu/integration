#ifndef PRODUITW_H
#define PRODUITW_H
#include "arduino.h"
#include <QMainWindow>
#include "produit.h"
#include "arduinoproduit.h"
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

namespace Ui {
class produitw;
}

class produitw : public QMainWindow
{
    Q_OBJECT

public:
    explicit produitw(QWidget *parent = nullptr);
    ~produitw();
private slots:


    void on_ajout_clicked();

    void on_aff_clicked();

    void on_rech_textChanged(const QString &arg1);

    void on_PDF_clicked();

    void on_stats_clicked();

    void on_notif_clicked();

    void on_Historique_clicked();

    void on_supprmier_clicked();

    void on_modifier_clicked();

    void on_TEMPETHUMID_clicked();

    void on_comboBox_2_currentTextChanged(const QString &arg1);

private:
    Ui::produitw *ui; // Pointer to UI class
    Produit Ptmp;
    Arduino *A;
};

#endif // PRODUITW_H
