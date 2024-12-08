/********************************************************************************
** Form generated from reading UI file 'commandeswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDESWINDOW_H
#define UI_COMMANDESWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommandesWindow
{
public:
    QWidget *centralwidget;
    QPushButton *gestion_fournisseur;
    QListView *listView;
    QPushButton *btn_afficher;
    QPushButton *gestion_client;
    QGroupBox *groupBox;
    QLineEdit *question;
    QTextEdit *reponse;
    QPushButton *envoyer;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *IdCommande_3;
    QLineEdit *DateCommande_3;
    QLineEdit *MedicamentCommande_3;
    QLineEdit *DateLivraisonCommande_3;
    QLineEdit *StatutCommande_3;
    QLineEdit *idproduit;
    QPushButton *gestion_commande;
    QPushButton *gestion_stock;
    QPushButton *stat;
    QPushButton *gestion_employee;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_12;
    QPushButton *btn_ajouter_commande_3;
    QPushButton *btn_modifier_commande_3;
    QPushButton *btn_supprimer_commande_3;
    QPushButton *btn_pdf_commande_3;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *CritereTriCommande_3;
    QTableView *tab_commandes;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_11;
    QComboBox *comboBox;
    QPushButton *chercher_commande_3;
    QPushButton *promo;
    QPushButton *temp;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_13;
    QLabel *IdCommandeTxt_3;
    QLabel *DateCommandeTxt_3;
    QLabel *MedicamentTxt_3;
    QLabel *DateLivraisonTxt_3;
    QLabel *StatutCommandeTxt_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CommandesWindow)
    {
        if (CommandesWindow->objectName().isEmpty())
            CommandesWindow->setObjectName(QString::fromUtf8("CommandesWindow"));
        CommandesWindow->resize(1316, 1000);
        centralwidget = new QWidget(CommandesWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gestion_fournisseur = new QPushButton(centralwidget);
        gestion_fournisseur->setObjectName(QString::fromUtf8("gestion_fournisseur"));
        gestion_fournisseur->setGeometry(QRect(10, 260, 201, 51));
        gestion_fournisseur->setMinimumSize(QSize(0, 0));
        gestion_fournisseur->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(104, 118, 225, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        QBrush brush2(QColor(255, 179, 193, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        gestion_fournisseur->setPalette(palette);
        gestion_fournisseur->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../Downloads/icons8-supplier-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_fournisseur->setIcon(icon);
        gestion_fournisseur->setFlat(false);
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(0, 0, 231, 701));
        listView->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
"background-color: rgb(76, 172, 198);\n"
"}\n"
"QPushButton{\n"
"background-color:rgb(61,61,61);\n"
"border-top-left-radius:20px;\n"
"border-bottom-left-radius:20px;\n"
"color:rgb(255,255,255);\n"
"font: 77 10pt \"Arial Black\";\n"
"}\n"
"QPushButton:hover{\n"
"background-color:White;\n"
"border-top-left-radius:20px;\n"
"border-bottom-left-radius:20px;\n"
"color:rgb(0,0);\n"
"font: 77 10pt \"Arial Black\";\n"
"}"));
        btn_afficher = new QPushButton(centralwidget);
        btn_afficher->setObjectName(QString::fromUtf8("btn_afficher"));
        btn_afficher->setGeometry(QRect(1170, 330, 109, 29));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../Downloads/icons8-pdf-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_afficher->setIcon(icon1);
        gestion_client = new QPushButton(centralwidget);
        gestion_client->setObjectName(QString::fromUtf8("gestion_client"));
        gestion_client->setGeometry(QRect(10, 410, 201, 51));
        gestion_client->setMinimumSize(QSize(0, 0));
        gestion_client->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        gestion_client->setPalette(palette1);
        gestion_client->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../../Downloads/icons8-client-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_client->setIcon(icon2);
        gestion_client->setFlat(false);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(240, 480, 811, 211));
        question = new QLineEdit(groupBox);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(20, 40, 491, 61));
        reponse = new QTextEdit(groupBox);
        reponse->setObjectName(QString::fromUtf8("reponse"));
        reponse->setGeometry(QRect(20, 130, 491, 101));
        envoyer = new QPushButton(groupBox);
        envoyer->setObjectName(QString::fromUtf8("envoyer"));
        envoyer->setGeometry(QRect(590, 110, 181, 29));
        envoyer->setIcon(icon1);
        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(390, 50, 241, 411));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        IdCommande_3 = new QLineEdit(verticalLayoutWidget_7);
        IdCommande_3->setObjectName(QString::fromUtf8("IdCommande_3"));

        verticalLayout_14->addWidget(IdCommande_3);

        DateCommande_3 = new QLineEdit(verticalLayoutWidget_7);
        DateCommande_3->setObjectName(QString::fromUtf8("DateCommande_3"));

        verticalLayout_14->addWidget(DateCommande_3);

        MedicamentCommande_3 = new QLineEdit(verticalLayoutWidget_7);
        MedicamentCommande_3->setObjectName(QString::fromUtf8("MedicamentCommande_3"));

        verticalLayout_14->addWidget(MedicamentCommande_3);

        DateLivraisonCommande_3 = new QLineEdit(verticalLayoutWidget_7);
        DateLivraisonCommande_3->setObjectName(QString::fromUtf8("DateLivraisonCommande_3"));

        verticalLayout_14->addWidget(DateLivraisonCommande_3);

        StatutCommande_3 = new QLineEdit(verticalLayoutWidget_7);
        StatutCommande_3->setObjectName(QString::fromUtf8("StatutCommande_3"));

        verticalLayout_14->addWidget(StatutCommande_3);

        idproduit = new QLineEdit(centralwidget);
        idproduit->setObjectName(QString::fromUtf8("idproduit"));
        idproduit->setGeometry(QRect(1070, 500, 239, 26));
        gestion_commande = new QPushButton(centralwidget);
        gestion_commande->setObjectName(QString::fromUtf8("gestion_commande"));
        gestion_commande->setGeometry(QRect(10, 480, 201, 51));
        gestion_commande->setMinimumSize(QSize(0, 0));
        gestion_commande->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        gestion_commande->setPalette(palette2);
        gestion_commande->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../../Downloads/icons8-paper-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_commande->setIcon(icon3);
        gestion_commande->setFlat(false);
        gestion_stock = new QPushButton(centralwidget);
        gestion_stock->setObjectName(QString::fromUtf8("gestion_stock"));
        gestion_stock->setGeometry(QRect(10, 330, 201, 51));
        gestion_stock->setMinimumSize(QSize(0, 0));
        gestion_stock->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        gestion_stock->setPalette(palette3);
        gestion_stock->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../../Downloads/icons8-stock-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_stock->setIcon(icon4);
        gestion_stock->setFlat(false);
        stat = new QPushButton(centralwidget);
        stat->setObjectName(QString::fromUtf8("stat"));
        stat->setGeometry(QRect(1030, 330, 109, 29));
        stat->setIcon(icon1);
        gestion_employee = new QPushButton(centralwidget);
        gestion_employee->setObjectName(QString::fromUtf8("gestion_employee"));
        gestion_employee->setGeometry(QRect(10, 200, 201, 51));
        gestion_employee->setMinimumSize(QSize(0, 0));
        gestion_employee->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        gestion_employee->setPalette(palette4);
        gestion_employee->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../../../Downloads/icons8-employee-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_employee->setIcon(icon5);
        gestion_employee->setIconSize(QSize(20, 20));
        gestion_employee->setFlat(false);
        verticalLayoutWidget_8 = new QWidget(centralwidget);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(660, 80, 111, 241));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        btn_ajouter_commande_3 = new QPushButton(verticalLayoutWidget_8);
        btn_ajouter_commande_3->setObjectName(QString::fromUtf8("btn_ajouter_commande_3"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../../../../Downloads/icons8-add-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ajouter_commande_3->setIcon(icon6);

        verticalLayout_12->addWidget(btn_ajouter_commande_3);

        btn_modifier_commande_3 = new QPushButton(verticalLayoutWidget_8);
        btn_modifier_commande_3->setObjectName(QString::fromUtf8("btn_modifier_commande_3"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../../../../Downloads/icons8-edit-50 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_modifier_commande_3->setIcon(icon7);

        verticalLayout_12->addWidget(btn_modifier_commande_3);

        btn_supprimer_commande_3 = new QPushButton(verticalLayoutWidget_8);
        btn_supprimer_commande_3->setObjectName(QString::fromUtf8("btn_supprimer_commande_3"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../../../../Downloads/icons8-delete-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_supprimer_commande_3->setIcon(icon8);

        verticalLayout_12->addWidget(btn_supprimer_commande_3);

        btn_pdf_commande_3 = new QPushButton(verticalLayoutWidget_8);
        btn_pdf_commande_3->setObjectName(QString::fromUtf8("btn_pdf_commande_3"));
        btn_pdf_commande_3->setIcon(icon1);

        verticalLayout_12->addWidget(btn_pdf_commande_3);

        horizontalLayoutWidget_7 = new QWidget(centralwidget);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(1020, 360, 257, 61));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        CritereTriCommande_3 = new QComboBox(horizontalLayoutWidget_7);
        CritereTriCommande_3->addItem(QString());
        CritereTriCommande_3->addItem(QString());
        CritereTriCommande_3->addItem(QString());
        CritereTriCommande_3->setObjectName(QString::fromUtf8("CritereTriCommande_3"));

        horizontalLayout_10->addWidget(CritereTriCommande_3);

        tab_commandes = new QTableView(centralwidget);
        tab_commandes->setObjectName(QString::fromUtf8("tab_commandes"));
        tab_commandes->setGeometry(QRect(780, 90, 501, 231));
        horizontalLayoutWidget_6 = new QWidget(centralwidget);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(650, 330, 257, 61));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(horizontalLayoutWidget_6);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_11->addWidget(comboBox);

        chercher_commande_3 = new QPushButton(horizontalLayoutWidget_6);
        chercher_commande_3->setObjectName(QString::fromUtf8("chercher_commande_3"));

        horizontalLayout_11->addWidget(chercher_commande_3);

        promo = new QPushButton(centralwidget);
        promo->setObjectName(QString::fromUtf8("promo"));
        promo->setGeometry(QRect(920, 330, 109, 29));
        promo->setIcon(icon1);
        temp = new QPushButton(centralwidget);
        temp->setObjectName(QString::fromUtf8("temp"));
        temp->setGeometry(QRect(1130, 540, 109, 29));
        temp->setIcon(icon1);
        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(260, 70, 121, 371));
        verticalLayout_13 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        IdCommandeTxt_3 = new QLabel(verticalLayoutWidget_6);
        IdCommandeTxt_3->setObjectName(QString::fromUtf8("IdCommandeTxt_3"));

        verticalLayout_13->addWidget(IdCommandeTxt_3);

        DateCommandeTxt_3 = new QLabel(verticalLayoutWidget_6);
        DateCommandeTxt_3->setObjectName(QString::fromUtf8("DateCommandeTxt_3"));

        verticalLayout_13->addWidget(DateCommandeTxt_3);

        MedicamentTxt_3 = new QLabel(verticalLayoutWidget_6);
        MedicamentTxt_3->setObjectName(QString::fromUtf8("MedicamentTxt_3"));

        verticalLayout_13->addWidget(MedicamentTxt_3);

        DateLivraisonTxt_3 = new QLabel(verticalLayoutWidget_6);
        DateLivraisonTxt_3->setObjectName(QString::fromUtf8("DateLivraisonTxt_3"));

        verticalLayout_13->addWidget(DateLivraisonTxt_3);

        StatutCommandeTxt_3 = new QLabel(verticalLayoutWidget_6);
        StatutCommandeTxt_3->setObjectName(QString::fromUtf8("StatutCommandeTxt_3"));

        verticalLayout_13->addWidget(StatutCommandeTxt_3);

        CommandesWindow->setCentralWidget(centralwidget);
        listView->raise();
        btn_afficher->raise();
        gestion_client->raise();
        groupBox->raise();
        verticalLayoutWidget_7->raise();
        idproduit->raise();
        gestion_commande->raise();
        gestion_stock->raise();
        stat->raise();
        gestion_employee->raise();
        verticalLayoutWidget_8->raise();
        horizontalLayoutWidget_7->raise();
        tab_commandes->raise();
        horizontalLayoutWidget_6->raise();
        promo->raise();
        temp->raise();
        verticalLayoutWidget_6->raise();
        gestion_fournisseur->raise();
        menubar = new QMenuBar(CommandesWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1316, 26));
        CommandesWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CommandesWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CommandesWindow->setStatusBar(statusbar);

        retranslateUi(CommandesWindow);

        QMetaObject::connectSlotsByName(CommandesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CommandesWindow)
    {
        CommandesWindow->setWindowTitle(QCoreApplication::translate("CommandesWindow", "MainWindow", nullptr));
        gestion_fournisseur->setText(QCoreApplication::translate("CommandesWindow", "Gestion Des Fournisseurs", nullptr));
        btn_afficher->setText(QCoreApplication::translate("CommandesWindow", "afficher", nullptr));
        gestion_client->setText(QCoreApplication::translate("CommandesWindow", "Gestion Des Clients", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CommandesWindow", "GroupBox", nullptr));
        envoyer->setText(QCoreApplication::translate("CommandesWindow", "envoyer", nullptr));
        gestion_commande->setText(QCoreApplication::translate("CommandesWindow", "Gestion Des Commandes", nullptr));
        gestion_stock->setText(QCoreApplication::translate("CommandesWindow", "Gestion Des Stocks", nullptr));
        stat->setText(QCoreApplication::translate("CommandesWindow", "statistiques", nullptr));
        gestion_employee->setText(QCoreApplication::translate("CommandesWindow", "Gestion Des Employees", nullptr));
        btn_ajouter_commande_3->setText(QCoreApplication::translate("CommandesWindow", "Ajouter", nullptr));
        btn_modifier_commande_3->setText(QCoreApplication::translate("CommandesWindow", "Modifier", nullptr));
        btn_supprimer_commande_3->setText(QCoreApplication::translate("CommandesWindow", "Supprimer", nullptr));
        btn_pdf_commande_3->setText(QCoreApplication::translate("CommandesWindow", "PDF", nullptr));
        CritereTriCommande_3->setItemText(0, QCoreApplication::translate("CommandesWindow", "Choisir", nullptr));
        CritereTriCommande_3->setItemText(1, QCoreApplication::translate("CommandesWindow", "ID", nullptr));
        CritereTriCommande_3->setItemText(2, QCoreApplication::translate("CommandesWindow", "NOM", nullptr));

        comboBox->setItemText(0, QCoreApplication::translate("CommandesWindow", "en attente", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("CommandesWindow", "expedie", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("CommandesWindow", "livre", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("CommandesWindow", "annule", nullptr));

        chercher_commande_3->setText(QCoreApplication::translate("CommandesWindow", "Chercher", nullptr));
        promo->setText(QCoreApplication::translate("CommandesWindow", "promotion", nullptr));
        temp->setText(QCoreApplication::translate("CommandesWindow", "verifier", nullptr));
        IdCommandeTxt_3->setText(QCoreApplication::translate("CommandesWindow", "ID:", nullptr));
        DateCommandeTxt_3->setText(QCoreApplication::translate("CommandesWindow", "Date:", nullptr));
        MedicamentTxt_3->setText(QCoreApplication::translate("CommandesWindow", "Medicaments:", nullptr));
        DateLivraisonTxt_3->setText(QCoreApplication::translate("CommandesWindow", "Date Livraison:", nullptr));
        StatutCommandeTxt_3->setText(QCoreApplication::translate("CommandesWindow", "Statut:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommandesWindow: public Ui_CommandesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDESWINDOW_H
