#include "employew.h"
#include "ui_employew.h"
#include <QMessageBox>
#include "employee.h"
#include <QDate>
#include <QRegularExpression>
#include <QSqlError>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>
#include <QMessageBox>
#include <QtCharts>
#include <QtCharts/QChart>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChartView>
#include "arduino.h"
Employew::Employew(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Employew) {
    ui->setupUi(this);

    ui->tab_department_2->setModel(Etmp.afficher());
    int ret=A.connect_arduino();
    switch(ret){
        case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
            break;
        case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
           break;
        case(-1):qDebug() << "arduino is not available";
        }
         QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));
}

Employew::~Employew() {
    delete ui;
}

void Employew::on_lol_clicked() {
    int id = ui->LineEdit_ID->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->LineEdit_prenom->text();
    QString poste = ui->comboBox_rech_4->currentText();
    QDate date = ui->dateEdit->date();
    QString sexee = ui->comboBox_rech_5->currentText();
    float salaire = ui->lineEdit_salaire->text().toFloat();
    QString email = ui->lineEdit_email->text();
    QRegularExpression floatRegex(R"(^-?\d*\.?\d+$)");
    if (id<=0| QString::number(id).length() !=5) {
        QMessageBox::critical(this, QObject::tr("Invalid ID"), QObject::tr("ID must be an 5-digit integer.\nClick Cancel to exit."), QMessageBox::Cancel);
        return;
    }
    QRegularExpression alphaRegex("^[A-Za-z]+$");

    if (!alphaRegex.match(nom).hasMatch()) {
        QMessageBox::critical(this, QObject::tr("Invalid Name"), QObject::tr("Name must contain only alphabetic characters.\nClick Cancel to exit."), QMessageBox::Cancel);
        return;
    }

    if (!alphaRegex.match(prenom).hasMatch()) {
        QMessageBox::critical(this, QObject::tr("Invalid Surname"), QObject::tr("Surname must contain only alphabetic characters.\nClick Cancel to exit."), QMessageBox::Cancel);
        return;
    }
    QString salaireText = ui->lineEdit_salaire->text();
    if (!floatRegex.match(salaireText).hasMatch()) {
         QMessageBox::critical(this, QObject::tr("Invalid salaire"), QObject::tr("Please enter a valid number for salaire .\nClick Cancel to exit."), QMessageBox::Cancel);
    }
    QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");
    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::critical(this, QObject::tr("Invalid Email"), QObject::tr("Please enter a valid email address.\nClick Cancel to exit."), QMessageBox::Cancel);
        return;
    }
    Employee E(id, nom, prenom, poste, date, sexee, salaire, email);
    bool test = E.ajouter();
    if (test) {
        ui->tab_department_2->setModel(Etmp.afficher());
        QMessageBox::information(this, QObject::tr("OK"), QObject::tr("Ajout effectué\nClick Cancel to exit"), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(this, QObject::tr("Not OK"), QObject::tr("Ajout non effectué\nClick Cancel to exit"), QMessageBox::Cancel);
    }
}
void Employew::on_Department_supp_2_clicked()
{
    int id = ui->LineEdit_ID->text().toInt();
    bool test=Etmp.supprimer(id);
    QString nom= ui->lineEdit_nom->text();
    QString prenom= ui->LineEdit_prenom->text();
    QString poste = ui->comboBox_rech_4->currentText();
     QDate date = ui->dateEdit->date();
     QString sexee = ui->comboBox_rech_5->currentText();
     float salaire = ui->lineEdit_salaire->text().toFloat();
     QString email= ui->lineEdit_email->text();
     Employee E(id,nom,prenom,poste,date,sexee,salaire,email);
    if(test) {
        ui->tab_department_2->setModel(Etmp.afficher());
           QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Suppression effectué\nClick Cancel to exit"), QMessageBox::Cancel);
       }
    else {
           QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Suppression non effectué\nClick Cancel to exit"), QMessageBox::Cancel);
       }
}

void Employew::on_Department_modifer_2_clicked() {
    int id = ui->LineEdit_ID->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->LineEdit_prenom->text();
   QString poste = ui->comboBox_rech_4->currentText();
    QDate date = ui->dateEdit->date();
    QString sexee = ui->comboBox_rech_5->currentText();
    float salaire = ui->lineEdit_salaire->text().toFloat();
    QString email = ui->lineEdit_email->text();


        if ((id<= 0| QString::number(id).length() !=5) ) {
            QMessageBox::critical(this, QObject::tr("Invalid ID"), QObject::tr("ID must be an 8-digit integer.\nClick Cancel to exit."), QMessageBox::Cancel);
            return;
        }
         QRegularExpression floatRegex(R"(^-?\d*\.?\d+$)");
         QRegularExpression alphaRegex("^[A-Za-z]+$");
    if (!alphaRegex.match(nom).hasMatch()) {
        QMessageBox::critical(this, QObject::tr("Invalid Name"), QObject::tr("Name must contain only alphabetic characters.\nClick Cancel to exit."), QMessageBox::Cancel);
        return;
    }

    if (!alphaRegex.match(prenom).hasMatch()) {
        QMessageBox::critical(this, QObject::tr("Invalid Surname"), QObject::tr("Surname must contain only alphabetic characters.\nClick Cancel to exit."), QMessageBox::Cancel);
        return;
    }


    QString salaireText = ui->lineEdit_salaire->text();
    if (!floatRegex.match(salaireText).hasMatch()) {
         QMessageBox::critical(this, QObject::tr("Invalid salaire"), QObject::tr("Please enter a valid number for salaire .\nClick Cancel to exit."), QMessageBox::Cancel);
    }
    QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");
    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::critical(this, QObject::tr("Invalid Email"), QObject::tr("Please enter a valid email address.\nClick Cancel to exit."), QMessageBox::Cancel);
        return;
    }

    Employee E(id, nom, prenom, poste, date, sexee, salaire, email);
    bool test = E.modifier(id);

    if (test) {
        ui->tab_department_2->setModel(Etmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Modification effectuée\nClick Cancel to exit"), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"), QObject::tr("Modification non effectuée\nClick Cancel to exit"), QMessageBox::Cancel);
    }
}

void Employew::on_Department_pdf_2_clicked()
{
    QString desktopPath = QDir::homePath() + "/Desktop/EmployeeTable.pdf";


    QTextDocument doc;


    QString html = "<html><head><style>"
                   "table { border-collapse: collapse; width: 100%; }"
                   "th, td { border: 1px solid black; padding: 8px; text-align: left; }"
                   "th { background-color: #f2f2f2; font-weight: bold; }"
                   "</style></head><body>"
                   "<h2>Employee Table</h2>"
                   "<table>";


    QAbstractItemModel *model = ui->tab_department_2->model();
    int columns = model->columnCount();

    html += "<tr>";
    for (int col = 0; col < columns; ++col) {
        html += "<th>" + model->headerData(col, Qt::Horizontal).toString() + "</th>";
    }
    html += "</tr>";


    int rows = model->rowCount();
    for (int row = 0; row < rows; ++row) {
        html += "<tr>";
        for (int col = 0; col < columns; ++col) {
            html += "<td>" + model->data(model->index(row, col)).toString() + "</td>";
        }
        html += "</tr>";
    }

    html += "</table></body></html>";


    doc.setHtml(html);


    QPdfWriter pdfWriter(desktopPath);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setResolution(300);


    doc.print(&pdfWriter);


    QMessageBox::information(this, QObject::tr("PDF Created"), QObject::tr("Employee table exported to Desktop successfully."));
}


void Employew::on_chercher_2_clicked()
{
    QString searchText = ui->search_c_3->text();
    if (searchText.isEmpty()) {
        ui->tab_department_2->setModel(Etmp.afficher());
        QMessageBox::information(this, QObject::tr("Full Table"), QObject::tr("Showing all employees."));
        return;
    }

    int id = searchText.toInt();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT IDE, NOME, PRENOME, POSTEE, SEXEE, SALAIREE, DATE_NAISSANCEE, EMAILE FROM EMPLOYE WHERE IDE = :IDE");
    query.bindValue(":IDE", id);

    if (query.exec()) {
        model->setQuery(query);

        if (model->rowCount() > 0) {
            ui->tab_department_2->setModel(model);
            QMessageBox::information(this, QObject::tr("Search Successful"), QObject::tr("Employee found and displayed."));
        } else {
            QMessageBox::information(this, QObject::tr("No Results"), QObject::tr("No employee found with the provided ID."));
        }
    } else {
        QMessageBox::critical(this, QObject::tr("Search Error"), QObject::tr("An error occurred while searching for the employee."));
    }
}
void Employew::on_tri_clicked()
{
    QString sortOption = ui->comboBox_rech_3->currentText();
    qDebug() << "Sort option selected:" << sortOption;

    QSqlQuery query;
    if (sortOption == "Choisir") {
        query.prepare("SELECT IDE, NOME, PRENOME, POSTEE, SEXEE, SALAIREE, DATE_NAISSANCEE, EMAILE FROM EMPLOYE");
    } else if (sortOption == "ID") {
        query.prepare("SELECT IDE, NOME, PRENOME, POSTEE, SEXEE, SALAIREE, DATE_NAISSANCEE, EMAILE FROM EMPLOYE ORDER BY IDE ASC");
    } else if (sortOption == "NOM") {
        query.prepare("SELECT IDE, NOME, PRENOME, POSTEE, SEXEE, SALAIREE, DATE_NAISSANCEE, EMAILE "
                              "FROM EMPLOYE ORDER BY CAST(NOME AS VARCHAR2(255)) ASC");
    } else {
        QMessageBox::warning(this, QObject::tr("Invalid Sort Option"), QObject::tr("The selected sorting option is invalid."));
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel();

    qDebug() << "Executing query:" << query.executedQuery();

    if (query.exec()) {

        model->setQuery(query);

        qDebug() << "Row count after query execution: " << model->rowCount();

        if (model->rowCount() > 0) {
            ui->tab_department_2->setModel(model);
            ui->tab_department_2->reset();
            QMessageBox::information(this, QObject::tr("Sort Applied"), QObject::tr("The table has been sorted."));
        } else {
            QMessageBox::information(this, QObject::tr("No Results"), QObject::tr("No records found after sorting."));
        }
    } else {
        QMessageBox::critical(this, QObject::tr("Sort Error"), QObject::tr("An error occurred while sorting the table."));
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
}

void Employew::on_stat_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT TO_CHAR(POSTEE), COUNT(*) FROM EMPLOYE GROUP BY TO_CHAR(POSTEE)");

    QStringList categories;
    QList<int> counts;
    int total = 0;
    if (query.exec()) {
        while (query.next()) {
            QString poste = query.value(0).toString();
            int count = query.value(1).toInt();
            categories << poste;
            counts << count;
            total += count;
        }
    } else {
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    if (categories.isEmpty()) {
        QMessageBox::information(this, "No Data", "No data available to generate the chart.");
        return;
    }

    QPieSeries *series = new QPieSeries();
    for (int i = 0; i < counts.size(); ++i) {
        double percentage = (counts[i] * 100.0) / total;
        QString label = categories[i] + " (" + QString::number(percentage, 'f', 2) + "%)";

        QPieSlice *slice = series->append(label, counts[i]);
        slice->setLabelVisible(true);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Poste Statistics");

    chart->legend()->setVisible(false);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    QWidget *chartWindow = new QWidget();
    chartWindow->setWindowTitle("Poste Statistics");
    chartWindow->resize(800, 500);
    QVBoxLayout *layout = new QVBoxLayout(chartWindow);
    layout->addWidget(chartView);
    chartWindow->setLayout(layout);
    chartWindow->show();
}

void Employew::update_label()
{
    Employee e;
    data = A.read_from_arduino();
    data.replace("\r\n", "");

    if (data != "") {
        if (e.recherche(data)) {
            qDebug() << "data!" + data;
            QMessageBox::information(this, "true id", "opened"+data);
        }
        else {
            QMessageBox::information(this, "wrong id", "closed"+data);
        }
        qDebug() << "data:" + data;
    }
}

