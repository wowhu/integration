#ifndef EMPLOYEW_H
#define EMPLOYEW_H
#include "employee.h"
#include <QMainWindow>
#include <QPdfWriter>
#include <QPainter>
#include <QDir>
#include "arduino.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Employew; }
QT_END_NAMESPACE

class Employew : public QMainWindow
{
    Q_OBJECT

public:
    Employew(QWidget *parent = nullptr);
    ~Employew();
private slots:
    void update_label();
    void on_lol_clicked();
    void on_Department_supp_2_clicked();
    void on_Department_modifer_2_clicked();
    void on_Department_pdf_2_clicked();
    void on_chercher_2_clicked();
    void on_tri_clicked();

    void on_stat_clicked();

private:
    Ui::Employew *ui;
    Employee Etmp;
    QByteArray data;
    Arduino A;
};
#endif // EMPLOYEW_H
