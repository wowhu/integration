/********************************************************************************
** Form generated from reading UI file 'produitw.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUITW_H
#define UI_PRODUITW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_produitw
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *id;
    QLineEdit *nom;
    QLineEdit *prix1;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *date;
    QComboBox *type1;
    QPushButton *ajout;
    QLabel *label_6;
    QLineEdit *quantite;
    QPushButton *modifier;
    QLineEdit *temp1;
    QLineEdit *humid1;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *groupBox_2;
    QPushButton *notif;
    QLineEdit *lineEdit;
    QPushButton *Historique;
    QWidget *tab_2;
    QTableView *tableView;
    QPushButton *aff;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLineEdit *rech;
    QPushButton *PDF;
    QLineEdit *rech_2;
    QPushButton *supprmier;
    QWidget *tab_3;
    QPushButton *stats;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *stats_3;
    QComboBox *comboBox;
    QPushButton *TEMPETHUMID;
    QTextEdit *textEditTemp;
    QTextEdit *textEditHumid;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *produitw)
    {
        if (produitw->objectName().isEmpty())
            produitw->setObjectName(QString::fromUtf8("produitw"));
        produitw->resize(979, 679);
        centralWidget = new QWidget(produitw);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 50, 891, 541));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 311, 431));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 47, 13));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 47, 13));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 71, 31));
        id = new QLineEdit(groupBox);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(140, 40, 113, 20));
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(140, 80, 113, 21));
        prix1 = new QLineEdit(groupBox);
        prix1->setObjectName(QString::fromUtf8("prix1"));
        prix1->setGeometry(QRect(140, 170, 113, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 160, 71, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 200, 71, 41));
        date = new QDateEdit(groupBox);
        date->setObjectName(QString::fromUtf8("date"));
        date->setGeometry(QRect(140, 130, 110, 22));
        type1 = new QComboBox(groupBox);
        type1->addItem(QString());
        type1->addItem(QString());
        type1->setObjectName(QString::fromUtf8("type1"));
        type1->setGeometry(QRect(140, 210, 111, 31));
        ajout = new QPushButton(groupBox);
        ajout->setObjectName(QString::fromUtf8("ajout"));
        ajout->setGeometry(QRect(20, 380, 101, 51));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 250, 81, 41));
        quantite = new QLineEdit(groupBox);
        quantite->setObjectName(QString::fromUtf8("quantite"));
        quantite->setGeometry(QRect(140, 250, 111, 31));
        modifier = new QPushButton(groupBox);
        modifier->setObjectName(QString::fromUtf8("modifier"));
        modifier->setGeometry(QRect(180, 380, 101, 51));
        temp1 = new QLineEdit(groupBox);
        temp1->setObjectName(QString::fromUtf8("temp1"));
        temp1->setGeometry(QRect(140, 300, 111, 31));
        humid1 = new QLineEdit(groupBox);
        humid1->setObjectName(QString::fromUtf8("humid1"));
        humid1->setGeometry(QRect(140, 340, 111, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 290, 81, 41));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 340, 81, 41));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 30, 461, 321));
        notif = new QPushButton(groupBox_2);
        notif->setObjectName(QString::fromUtf8("notif"));
        notif->setGeometry(QRect(150, 150, 161, 51));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 70, 251, 61));
        Historique = new QPushButton(tab);
        Historique->setObjectName(QString::fromUtf8("Historique"));
        Historique->setGeometry(QRect(500, 380, 161, 51));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 80, 821, 341));
        aff = new QPushButton(tab_2);
        aff->setObjectName(QString::fromUtf8("aff"));
        aff->setGeometry(QRect(540, 430, 151, 51));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 25, 56, 31));
        comboBox_2 = new QComboBox(tab_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(100, 30, 121, 31));
        comboBox_3 = new QComboBox(tab_2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(580, 30, 121, 31));
        rech = new QLineEdit(tab_2);
        rech->setObjectName(QString::fromUtf8("rech"));
        rech->setGeometry(QRect(720, 30, 121, 31));
        PDF = new QPushButton(tab_2);
        PDF->setObjectName(QString::fromUtf8("PDF"));
        PDF->setGeometry(QRect(700, 430, 151, 51));
        rech_2 = new QLineEdit(tab_2);
        rech_2->setObjectName(QString::fromUtf8("rech_2"));
        rech_2->setGeometry(QRect(40, 440, 131, 41));
        supprmier = new QPushButton(tab_2);
        supprmier->setObjectName(QString::fromUtf8("supprmier"));
        supprmier->setGeometry(QRect(180, 430, 151, 51));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        stats = new QPushButton(tab_3);
        stats->setObjectName(QString::fromUtf8("stats"));
        stats->setGeometry(QRect(40, 50, 131, 51));
        verticalLayoutWidget = new QWidget(tab_3);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(210, 40, 621, 381));
        stats_3 = new QVBoxLayout(verticalLayoutWidget);
        stats_3->setSpacing(6);
        stats_3->setContentsMargins(11, 11, 11, 11);
        stats_3->setObjectName(QString::fromUtf8("stats_3"));
        stats_3->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(tab_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 110, 131, 41));
        TEMPETHUMID = new QPushButton(tab_3);
        TEMPETHUMID->setObjectName(QString::fromUtf8("TEMPETHUMID"));
        TEMPETHUMID->setGeometry(QRect(50, 230, 111, 51));
        textEditTemp = new QTextEdit(tab_3);
        textEditTemp->setObjectName(QString::fromUtf8("textEditTemp"));
        textEditTemp->setGeometry(QRect(40, 310, 131, 61));
        textEditHumid = new QTextEdit(tab_3);
        textEditHumid->setObjectName(QString::fromUtf8("textEditHumid"));
        textEditHumid->setGeometry(QRect(40, 390, 131, 61));
        tabWidget->addTab(tab_3, QString());
        produitw->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(produitw);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 979, 25));
        produitw->setMenuBar(menuBar);
        mainToolBar = new QToolBar(produitw);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        produitw->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(produitw);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        produitw->setStatusBar(statusBar);

        retranslateUi(produitw);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(produitw);
    } // setupUi

    void retranslateUi(QMainWindow *produitw)
    {
        produitw->setWindowTitle(QCoreApplication::translate("produitw", "Gestion des Clients", nullptr));
        groupBox->setTitle(QCoreApplication::translate("produitw", "Ajouter Client", nullptr));
        label->setText(QCoreApplication::translate("produitw", "Id", nullptr));
        label_2->setText(QCoreApplication::translate("produitw", "Nom", nullptr));
        label_3->setText(QCoreApplication::translate("produitw", "Date", nullptr));
        label_4->setText(QCoreApplication::translate("produitw", "Prix", nullptr));
        label_5->setText(QCoreApplication::translate("produitw", "Type", nullptr));
        type1->setItemText(0, QCoreApplication::translate("produitw", "pharmacy", nullptr));
        type1->setItemText(1, QCoreApplication::translate("produitw", "parapharmacy", nullptr));

        ajout->setText(QCoreApplication::translate("produitw", "Ajout", nullptr));
        label_6->setText(QCoreApplication::translate("produitw", "QUANTITE", nullptr));
        modifier->setText(QCoreApplication::translate("produitw", "Modifier", nullptr));
        label_8->setText(QCoreApplication::translate("produitw", "temp ideale", nullptr));
        label_9->setText(QCoreApplication::translate("produitw", "humid ideale", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("produitw", "notif", nullptr));
        notif->setText(QCoreApplication::translate("produitw", "Notif", nullptr));
        Historique->setText(QCoreApplication::translate("produitw", "Historique", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("produitw", "Ajout", nullptr));
        aff->setText(QCoreApplication::translate("produitw", "Afficher", nullptr));
        label_7->setText(QCoreApplication::translate("produitw", "Tri", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("produitw", "id", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("produitw", "prix", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("produitw", "nom", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("produitw", "date", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("produitw", "id", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("produitw", "prix", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("produitw", "nom", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("produitw", "date", nullptr));

        PDF->setText(QCoreApplication::translate("produitw", "PDF", nullptr));
        supprmier->setText(QCoreApplication::translate("produitw", "supprmier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("produitw", "afficher", nullptr));
        stats->setText(QCoreApplication::translate("produitw", "Stats", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("produitw", "prix", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("produitw", "type", nullptr));

        TEMPETHUMID->setText(QCoreApplication::translate("produitw", "TEMP ET HUMID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("produitw", "Stats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class produitw: public Ui_produitw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUITW_H
