/********************************************************************************
** Form generated from reading UI file 'clientw..ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTW_H
#define UI_CLIENTW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientw
{
public:
    QWidget *centralWidget;
    QPushButton *gestion_employee;
    QListView *listView;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *widget;
    QWidget *page_2;
    QTableView *tab_department;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *id;
    QLabel *des;
    QLabel *quantite;
    QLabel *date;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *DepartmentId;
    QLineEdit *DepartmentNom;
    QLineEdit *DepartmentLocation;
    QLineEdit *DepartmentProject;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Department_ajouter;
    QPushButton *Department_modifer;
    QPushButton *Department_supp;
    QPushButton *Department_pdf;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBox_rech;
    QLineEdit *rech;
    QPushButton *chercher;
    QPushButton *Department_sendSms;
    QLabel *date_2;
    QLineEdit *DepartmentProject_2;
    QLabel *date_3;
    QLineEdit *DepartmentProject_3;
    QLabel *date_4;
    QLineEdit *DepartmentProject_4;
    QLineEdit *DepartmentProject_5;
    QLabel *date_5;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLabel *lblBkImge_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_57;
    QComboBox *trierPar_2;
    QPushButton *trier_employee_2;
    QLabel *label_20;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *EmployeeID_2;
    QLineEdit *EmployeeFirstName_2;
    QLineEdit *EmployeeLastName_2;
    QLineEdit *EmployeeContact_2;
    QLineEdit *EmployeeSalary_2;
    QLineEdit *search_c_2;
    QPushButton *search_client_button_2;
    QLabel *label_4;
    QPushButton *refresh_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *supprimer_employee_2;
    QPushButton *ajouter_employee_2;
    QPushButton *modifier_client_2;
    QTableView *tableView_2;
    QWidget *page_4;
    QTableView *tab_department_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *id_2;
    QLabel *linepp;
    QLabel *quantite_2;
    QLabel *quantite_3;
    QLabel *quantite_4;
    QLabel *quantite_5;
    QLabel *quantite_6;
    QLabel *quantite_8;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *LineEdit_ID;
    QLineEdit *lineEdit_nom;
    QLineEdit *LineEdit_prenom;
    QComboBox *comboBox_rech_4;
    QDateEdit *dateEdit;
    QComboBox *comboBox_rech_5;
    QLineEdit *lineEdit_salaire;
    QLineEdit *lineEdit_email;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QPushButton *lol;
    QPushButton *Department_modifer_2;
    QPushButton *Department_supp_2;
    QPushButton *Department_pdf_2;
    QPushButton *stat;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *search_c_3;
    QPushButton *chercher_2;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboBox_rech_3;
    QPushButton *tri;
    QLabel *label_3;
    QPushButton *gestion_employee_2;
    QPushButton *gestion_employee_3;
    QPushButton *gestion_employee_4;
    QLabel *label_2;
    QPushButton *gestion_employee_5;

    void setupUi(QMainWindow *clientw)
    {
        if (clientw->objectName().isEmpty())
            clientw->setObjectName(QString::fromUtf8("clientw"));
        clientw->resize(1351, 561);
        clientw->setStyleSheet(QString::fromUtf8("/*Copyright (c) DevSec Studio. All rights reserved.\n"
"\n"
"MIT License\n"
"\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy\n"
"of this software and associated documentation files (the \"Software\"), to deal\n"
"in the Software without restriction, including without limitation the rights\n"
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
"copies of the Software, and to permit persons to whom the Software is\n"
"furnished to do so, subject to the following conditions:\n"
"\n"
"The above copyright notice and this permission notice shall be included in all\n"
"copies or substantial portions of the Software.\n"
"\n"
"THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
"LIABILITY, WHETHER IN AN ACT"
                        "ION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n"
"*/\n"
"\n"
"/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: #fff;\n"
"	color: red;\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #8bd4dd;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: #6876e1;\n"
"	color: #fff;\n"
"	font-size: 13px;\n"
"	font-weight: bold;\n"
"	\n"
"	border-bottom-right-radius: 0px;\n"
"	padding: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::disabled\n"
"{\n"
"	background-color: #ffb3c1;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #91d0fb;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #ff758f;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox\n"
"{\n"
"	background-color: transparent;\n"
"	color: #FF4D6D;\n"
"	font-"
                        "size: 10px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox::indicator\n"
"{\n"
"    background-color: #323232;\n"
"    border: 1px solid darkgray;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(\"./ressources/check.png\");\n"
"	background-color: #5c55e9;\n"
"    border: 1px solid #5c55e9;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 1px solid #5c55e9;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: #2a547f;\n"
"	border: none;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QListView-----*/\n"
"QListView\n"
"{\n"
"	background-color: #"
                        "ffffff;\n"
"	color: #fff;\n"
"	font-size: 14px;\n"
"	font-weight: bold;\n"
"	show-decoration-selected: 0;\n"
"	border-radius: 4px;\n"
"	padding-left: -15px;\n"
"	padding-right: -15px;\n"
"	padding-top: 5px;\n"
"\n"
"} \n"
"\n"
"\n"
"QListView:disabled \n"
"{\n"
"	background-color: #ffb3c1;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item\n"
"{\n"
"	background-color: #ffb3c1;\n"
"	border: none;\n"
"	padding: 10px;\n"
"	border-radius: 0px;\n"
"	padding-left : 10px;\n"
"	height: 32px;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:selected\n"
"{\n"
"	color: #000;\n"
"	background-color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:!selected\n"
"{\n"
"	color:white;\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	padding-left : 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:!selected:hover\n"
"{\n"
"	color: #fff;\n"
"	background-color: #ffb3c1;\n"
"	border: none;\n"
"	padding-left : 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTreeView-----*/\n"
"QTreeView \n"
"{\n"
"	background-color: #fff;\n"
"	show-decoration-selected:"
                        " 0;\n"
"	color: #454544;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView:disabled\n"
"{\n"
"	background-color: #242526;\n"
"	show-decoration-selected: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item \n"
"{\n"
"	border-top-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:hover \n"
"{\n"
"	background-color: #bcbdbb;\n"
"	color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected \n"
"{\n"
"	background-color: #5c55e9;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected:active\n"
"{\n"
"	background-color: #5c55e9;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected:disabled\n"
"{\n"
"	background-color: #525251;\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings \n"
"{\n"
"	image: url(://tree-closed.png);\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  \n"
"{\n"
"	image"
                        ": url(://tree-open.png);\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTableView & QTableWidget-----*/\n"
"QTableView\n"
"{\n"
"    background-color: #fff;\n"
"	border: 1px solid gray;\n"
"    color: #454544;\n"
"    gridline-color: gray;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::disabled\n"
"{\n"
"    background-color: #242526;\n"
"    border: 1px solid #32414B;\n"
"    color: #656565;\n"
"    gridline-color: #656565;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:hover \n"
"{\n"
"    background-color: #bcbdbb;\n"
"    color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected \n"
"{\n"
"	background-color: #5c55e9;\n"
"    color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"{\n"
"    background-color: #1a1b1c;\n"
"    border: 2px solid #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"	background-color: #ced5e3;\n"
"	border: none;\n"
"    color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section\n"
"{\n"
"	color: #"
                        "2a547f;\n"
"	border: 0px;\n"
"	background-color: #ced5e3;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    color: #fff;\n"
"    background-color: #5c55e9;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"{\n"
"    color: #656565;\n"
"    background-color: #525251;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"QScrollBar:h"
                        "orizontal \n"
"{\n"
"    background-color: transparent;\n"
"    height: 8px;\n"
"    margin: 0px;\n"
"    padding: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal \n"
"{\n"
"    border: none;\n"
"	min-width: 100px;\n"
"    background-color: #7e92b7;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal, \n"
"QScrollBar::sub-line:horizontal,\n"
"QScrollBar::add-page:horizontal, \n"
"QScrollBar::sub-page:horizontal \n"
"{\n"
"    width: 0px;\n"
"    background-color: #d8dce6;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical \n"
"{\n"
"    background-color: transparent;\n"
"    width: 8px;\n"
"    margin: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical \n"
"{\n"
"    border: none;\n"
"	min-height: 100px;\n"
"    background-color: #7e92b7;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical, \n"
"QScrollBar::sub-line:vertical,\n"
"QScrollBar::add-page:vertical, \n"
"QScrollBar::sub-page:vertical \n"
"{\n"
"    height: 0px;\n"
"    background-color: #d8dce6;\n"
"\n"
"}\n"
""));
        centralWidget = new QWidget(clientw);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gestion_employee = new QPushButton(centralWidget);
        gestion_employee->setObjectName(QString::fromUtf8("gestion_employee"));
        gestion_employee->setGeometry(QRect(10, 100, 201, 51));
        gestion_employee->setMinimumSize(QSize(0, 0));
        gestion_employee->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(104, 118, 225, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QBrush brush2(QColor(255, 179, 193, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        gestion_employee->setPalette(palette);
        gestion_employee->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"  background-color: white;\n"
"  border: none;\n"
"	color:black;\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/icons8-employee-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_employee->setIcon(icon);
        gestion_employee->setIconSize(QSize(20, 20));
        gestion_employee->setFlat(false);
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(-10, -10, 231, 701));
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
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(230, 70, 1081, 511));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(140, 50, 771, 371));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tab_department = new QTableView(page_2);
        tab_department->setObjectName(QString::fromUtf8("tab_department"));
        tab_department->setGeometry(QRect(580, 40, 491, 231));
        verticalLayoutWidget_3 = new QWidget(page_2);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 30, 206, 211));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        id = new QLabel(verticalLayoutWidget_3);
        id->setObjectName(QString::fromUtf8("id"));

        verticalLayout_3->addWidget(id);

        des = new QLabel(verticalLayoutWidget_3);
        des->setObjectName(QString::fromUtf8("des"));

        verticalLayout_3->addWidget(des);

        quantite = new QLabel(verticalLayoutWidget_3);
        quantite->setObjectName(QString::fromUtf8("quantite"));

        verticalLayout_3->addWidget(quantite);

        date = new QLabel(verticalLayoutWidget_3);
        date->setObjectName(QString::fromUtf8("date"));

        verticalLayout_3->addWidget(date);

        des->raise();
        quantite->raise();
        date->raise();
        id->raise();
        verticalLayoutWidget_4 = new QWidget(page_2);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(230, 30, 160, 211));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        DepartmentId = new QLineEdit(verticalLayoutWidget_4);
        DepartmentId->setObjectName(QString::fromUtf8("DepartmentId"));

        verticalLayout_4->addWidget(DepartmentId);

        DepartmentNom = new QLineEdit(verticalLayoutWidget_4);
        DepartmentNom->setObjectName(QString::fromUtf8("DepartmentNom"));

        verticalLayout_4->addWidget(DepartmentNom);

        DepartmentLocation = new QLineEdit(verticalLayoutWidget_4);
        DepartmentLocation->setObjectName(QString::fromUtf8("DepartmentLocation"));

        verticalLayout_4->addWidget(DepartmentLocation);

        DepartmentProject = new QLineEdit(verticalLayoutWidget_4);
        DepartmentProject->setObjectName(QString::fromUtf8("DepartmentProject"));

        verticalLayout_4->addWidget(DepartmentProject);

        verticalLayoutWidget_5 = new QWidget(page_2);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(430, 30, 111, 175));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        Department_ajouter = new QPushButton(verticalLayoutWidget_5);
        Department_ajouter->setObjectName(QString::fromUtf8("Department_ajouter"));

        verticalLayout_5->addWidget(Department_ajouter);

        Department_modifer = new QPushButton(verticalLayoutWidget_5);
        Department_modifer->setObjectName(QString::fromUtf8("Department_modifer"));

        verticalLayout_5->addWidget(Department_modifer);

        Department_supp = new QPushButton(verticalLayoutWidget_5);
        Department_supp->setObjectName(QString::fromUtf8("Department_supp"));

        verticalLayout_5->addWidget(Department_supp);

        Department_pdf = new QPushButton(verticalLayoutWidget_5);
        Department_pdf->setObjectName(QString::fromUtf8("Department_pdf"));

        verticalLayout_5->addWidget(Department_pdf);

        horizontalLayoutWidget_5 = new QWidget(page_2);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(470, 350, 321, 80));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        comboBox_rech = new QComboBox(horizontalLayoutWidget_5);
        comboBox_rech->addItem(QString());
        comboBox_rech->addItem(QString());
        comboBox_rech->addItem(QString());
        comboBox_rech->setObjectName(QString::fromUtf8("comboBox_rech"));

        horizontalLayout_5->addWidget(comboBox_rech);

        rech = new QLineEdit(horizontalLayoutWidget_5);
        rech->setObjectName(QString::fromUtf8("rech"));

        horizontalLayout_5->addWidget(rech);

        chercher = new QPushButton(horizontalLayoutWidget_5);
        chercher->setObjectName(QString::fromUtf8("chercher"));

        horizontalLayout_5->addWidget(chercher);

        Department_sendSms = new QPushButton(page_2);
        Department_sendSms->setObjectName(QString::fromUtf8("Department_sendSms"));
        Department_sendSms->setGeometry(QRect(430, 220, 109, 41));
        date_2 = new QLabel(page_2);
        date_2->setObjectName(QString::fromUtf8("date_2"));
        date_2->setGeometry(QRect(20, 240, 204, 48));
        DepartmentProject_2 = new QLineEdit(page_2);
        DepartmentProject_2->setObjectName(QString::fromUtf8("DepartmentProject_2"));
        DepartmentProject_2->setGeometry(QRect(230, 250, 158, 26));
        date_3 = new QLabel(page_2);
        date_3->setObjectName(QString::fromUtf8("date_3"));
        date_3->setGeometry(QRect(20, 290, 204, 48));
        DepartmentProject_3 = new QLineEdit(page_2);
        DepartmentProject_3->setObjectName(QString::fromUtf8("DepartmentProject_3"));
        DepartmentProject_3->setGeometry(QRect(230, 300, 158, 26));
        date_4 = new QLabel(page_2);
        date_4->setObjectName(QString::fromUtf8("date_4"));
        date_4->setGeometry(QRect(20, 330, 204, 48));
        DepartmentProject_4 = new QLineEdit(page_2);
        DepartmentProject_4->setObjectName(QString::fromUtf8("DepartmentProject_4"));
        DepartmentProject_4->setGeometry(QRect(230, 340, 158, 26));
        DepartmentProject_5 = new QLineEdit(page_2);
        DepartmentProject_5->setObjectName(QString::fromUtf8("DepartmentProject_5"));
        DepartmentProject_5->setGeometry(QRect(230, 380, 158, 26));
        date_5 = new QLabel(page_2);
        date_5->setObjectName(QString::fromUtf8("date_5"));
        date_5->setGeometry(QRect(20, 370, 204, 48));
        stackedWidget_2 = new QStackedWidget(page_2);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, -20, 1081, 511));
        stackedWidget_2->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        lblBkImge_2 = new QLabel(page_3);
        lblBkImge_2->setObjectName(QString::fromUtf8("lblBkImge_2"));
        lblBkImge_2->setGeometry(QRect(922, 139, 130, 100));
        lblBkImge_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
""));
        horizontalLayoutWidget_3 = new QWidget(page_3);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(30, 20, 271, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_57 = new QLabel(horizontalLayoutWidget_3);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        QFont font;
        font.setBold(true);
        label_57->setFont(font);
        label_57->setStyleSheet(QString::fromUtf8("color:#6876e1;\n"
"font-size:15px;"));

        horizontalLayout_3->addWidget(label_57);

        trierPar_2 = new QComboBox(horizontalLayoutWidget_3);
        trierPar_2->addItem(QString());
        trierPar_2->addItem(QString());
        trierPar_2->addItem(QString());
        trierPar_2->addItem(QString());
        trierPar_2->addItem(QString());
        trierPar_2->setObjectName(QString::fromUtf8("trierPar_2"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat")});
        font1.setPointSize(9);
        font1.setBold(true);
        trierPar_2->setFont(font1);
        trierPar_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:#FF4D6D;"));
        trierPar_2->setEditable(true);

        horizontalLayout_3->addWidget(trierPar_2);

        trier_employee_2 = new QPushButton(horizontalLayoutWidget_3);
        trier_employee_2->setObjectName(QString::fromUtf8("trier_employee_2"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat")});
        font2.setBold(true);
        trier_employee_2->setFont(font2);
        trier_employee_2->setCursor(QCursor(Qt::PointingHandCursor));
        trier_employee_2->setStyleSheet(QString::fromUtf8("#trier_machine{\n"
"color:white;\n"
"background-color: rgb(85, 0, 255);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"#trier_machine:hover{\n"
"background-color:#ff531a;\n"
"}"));

        horizontalLayout_3->addWidget(trier_employee_2);

        label_20 = new QLabel(page_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(1056, 246, 21, 16));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("color:red;"));
        verticalLayoutWidget_2 = new QWidget(page_3);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(690, 100, 371, 231));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        EmployeeID_2 = new QLineEdit(verticalLayoutWidget_2);
        EmployeeID_2->setObjectName(QString::fromUtf8("EmployeeID_2"));

        verticalLayout_2->addWidget(EmployeeID_2);

        EmployeeFirstName_2 = new QLineEdit(verticalLayoutWidget_2);
        EmployeeFirstName_2->setObjectName(QString::fromUtf8("EmployeeFirstName_2"));

        verticalLayout_2->addWidget(EmployeeFirstName_2);

        EmployeeLastName_2 = new QLineEdit(verticalLayoutWidget_2);
        EmployeeLastName_2->setObjectName(QString::fromUtf8("EmployeeLastName_2"));

        verticalLayout_2->addWidget(EmployeeLastName_2);

        EmployeeContact_2 = new QLineEdit(verticalLayoutWidget_2);
        EmployeeContact_2->setObjectName(QString::fromUtf8("EmployeeContact_2"));

        verticalLayout_2->addWidget(EmployeeContact_2);

        EmployeeSalary_2 = new QLineEdit(verticalLayoutWidget_2);
        EmployeeSalary_2->setObjectName(QString::fromUtf8("EmployeeSalary_2"));

        verticalLayout_2->addWidget(EmployeeSalary_2);

        search_c_2 = new QLineEdit(page_3);
        search_c_2->setObjectName(QString::fromUtf8("search_c_2"));
        search_c_2->setGeometry(QRect(460, 30, 201, 32));
        search_c_2->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"padding:4px;\n"
"padding-left:10px;\n"
"padding-right:15px;\n"
"color:#6876e1;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
""));
        search_client_button_2 = new QPushButton(page_3);
        search_client_button_2->setObjectName(QString::fromUtf8("search_client_button_2"));
        search_client_button_2->setGeometry(QRect(630, 35, 21, 21));
        search_client_button_2->setCursor(QCursor(Qt::PointingHandCursor));
        search_client_button_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: transparent;\n"
"border-image: url(:/IMG/IMG/search.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(690, 70, 121, 20));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color:#8bd4dd;\n"
"color:#8bd4dd;\n"
"font-size:20px;"));
        refresh_2 = new QPushButton(page_3);
        refresh_2->setObjectName(QString::fromUtf8("refresh_2"));
        refresh_2->setGeometry(QRect(30, 20, 93, 31));
        refresh_2->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
""));
        horizontalLayoutWidget_4 = new QWidget(page_3);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(690, 390, 381, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        supprimer_employee_2 = new QPushButton(horizontalLayoutWidget_4);
        supprimer_employee_2->setObjectName(QString::fromUtf8("supprimer_employee_2"));
        supprimer_employee_2->setFont(font2);
        supprimer_employee_2->setCursor(QCursor(Qt::PointingHandCursor));
        supprimer_employee_2->setStyleSheet(QString::fromUtf8("#ajouter_machine{\n"
"color:white;\n"
"background-color:#6568F3;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"#ajouter_machine:hover{\n"
"background-color:#4144f1;\n"
"}"));

        horizontalLayout_4->addWidget(supprimer_employee_2);

        ajouter_employee_2 = new QPushButton(horizontalLayoutWidget_4);
        ajouter_employee_2->setObjectName(QString::fromUtf8("ajouter_employee_2"));
        ajouter_employee_2->setFont(font2);
        ajouter_employee_2->setCursor(QCursor(Qt::PointingHandCursor));
        ajouter_employee_2->setStyleSheet(QString::fromUtf8("#ajouter_machine{\n"
"color:white;\n"
"background-color:#6568F3;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"#ajouter_machine:hover{\n"
"background-color:#4144f1;\n"
"}"));

        horizontalLayout_4->addWidget(ajouter_employee_2);

        modifier_client_2 = new QPushButton(horizontalLayoutWidget_4);
        modifier_client_2->setObjectName(QString::fromUtf8("modifier_client_2"));
        modifier_client_2->setFont(font2);
        modifier_client_2->setCursor(QCursor(Qt::PointingHandCursor));
        modifier_client_2->setStyleSheet(QString::fromUtf8("#modifier_machine{\n"
"color:white;\n"
"background-color:#03BF8A;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"#modifier_machine:hover{\n"
"background-color:#02976d;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(modifier_client_2);

        tableView_2 = new QTableView(page_3);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(30, 90, 631, 381));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        tab_department_2 = new QTableView(page_4);
        tab_department_2->setObjectName(QString::fromUtf8("tab_department_2"));
        tab_department_2->setGeometry(QRect(570, 40, 501, 231));
        verticalLayoutWidget_6 = new QWidget(page_4);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(20, 40, 206, 411));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        id_2 = new QLabel(verticalLayoutWidget_6);
        id_2->setObjectName(QString::fromUtf8("id_2"));

        verticalLayout_6->addWidget(id_2);

        linepp = new QLabel(verticalLayoutWidget_6);
        linepp->setObjectName(QString::fromUtf8("linepp"));

        verticalLayout_6->addWidget(linepp);

        quantite_2 = new QLabel(verticalLayoutWidget_6);
        quantite_2->setObjectName(QString::fromUtf8("quantite_2"));

        verticalLayout_6->addWidget(quantite_2);

        quantite_3 = new QLabel(verticalLayoutWidget_6);
        quantite_3->setObjectName(QString::fromUtf8("quantite_3"));

        verticalLayout_6->addWidget(quantite_3);

        quantite_4 = new QLabel(verticalLayoutWidget_6);
        quantite_4->setObjectName(QString::fromUtf8("quantite_4"));

        verticalLayout_6->addWidget(quantite_4);

        quantite_5 = new QLabel(verticalLayoutWidget_6);
        quantite_5->setObjectName(QString::fromUtf8("quantite_5"));

        verticalLayout_6->addWidget(quantite_5);

        quantite_6 = new QLabel(verticalLayoutWidget_6);
        quantite_6->setObjectName(QString::fromUtf8("quantite_6"));

        verticalLayout_6->addWidget(quantite_6);

        quantite_8 = new QLabel(verticalLayoutWidget_6);
        quantite_8->setObjectName(QString::fromUtf8("quantite_8"));

        verticalLayout_6->addWidget(quantite_8);

        verticalLayoutWidget_7 = new QWidget(page_4);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(230, 30, 208, 436));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        LineEdit_ID = new QLineEdit(verticalLayoutWidget_7);
        LineEdit_ID->setObjectName(QString::fromUtf8("LineEdit_ID"));

        verticalLayout_7->addWidget(LineEdit_ID);

        lineEdit_nom = new QLineEdit(verticalLayoutWidget_7);
        lineEdit_nom->setObjectName(QString::fromUtf8("lineEdit_nom"));

        verticalLayout_7->addWidget(lineEdit_nom);

        LineEdit_prenom = new QLineEdit(verticalLayoutWidget_7);
        LineEdit_prenom->setObjectName(QString::fromUtf8("LineEdit_prenom"));

        verticalLayout_7->addWidget(LineEdit_prenom);

        comboBox_rech_4 = new QComboBox(verticalLayoutWidget_7);
        comboBox_rech_4->addItem(QString());
        comboBox_rech_4->addItem(QString());
        comboBox_rech_4->addItem(QString());
        comboBox_rech_4->addItem(QString());
        comboBox_rech_4->setObjectName(QString::fromUtf8("comboBox_rech_4"));

        verticalLayout_7->addWidget(comboBox_rech_4);

        dateEdit = new QDateEdit(verticalLayoutWidget_7);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout_7->addWidget(dateEdit);

        comboBox_rech_5 = new QComboBox(verticalLayoutWidget_7);
        comboBox_rech_5->addItem(QString());
        comboBox_rech_5->addItem(QString());
        comboBox_rech_5->setObjectName(QString::fromUtf8("comboBox_rech_5"));

        verticalLayout_7->addWidget(comboBox_rech_5);

        lineEdit_salaire = new QLineEdit(verticalLayoutWidget_7);
        lineEdit_salaire->setObjectName(QString::fromUtf8("lineEdit_salaire"));

        verticalLayout_7->addWidget(lineEdit_salaire);

        lineEdit_email = new QLineEdit(verticalLayoutWidget_7);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        verticalLayout_7->addWidget(lineEdit_email);

        verticalLayoutWidget_8 = new QWidget(page_4);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(450, 40, 111, 230));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        lol = new QPushButton(verticalLayoutWidget_8);
        lol->setObjectName(QString::fromUtf8("lol"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Downloads/icons8-add-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        lol->setIcon(icon1);

        verticalLayout_8->addWidget(lol);

        Department_modifer_2 = new QPushButton(verticalLayoutWidget_8);
        Department_modifer_2->setObjectName(QString::fromUtf8("Department_modifer_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Downloads/icons8-edit-50 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        Department_modifer_2->setIcon(icon2);

        verticalLayout_8->addWidget(Department_modifer_2);

        Department_supp_2 = new QPushButton(verticalLayoutWidget_8);
        Department_supp_2->setObjectName(QString::fromUtf8("Department_supp_2"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Downloads/icons8-delete-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        Department_supp_2->setIcon(icon3);

        verticalLayout_8->addWidget(Department_supp_2);

        Department_pdf_2 = new QPushButton(verticalLayoutWidget_8);
        Department_pdf_2->setObjectName(QString::fromUtf8("Department_pdf_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Downloads/icons8-pdf-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        Department_pdf_2->setIcon(icon4);

        verticalLayout_8->addWidget(Department_pdf_2);

        stat = new QPushButton(verticalLayoutWidget_8);
        stat->setObjectName(QString::fromUtf8("stat"));

        verticalLayout_8->addWidget(stat);

        horizontalLayoutWidget_6 = new QWidget(page_4);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(470, 369, 257, 61));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        search_c_3 = new QLineEdit(horizontalLayoutWidget_6);
        search_c_3->setObjectName(QString::fromUtf8("search_c_3"));
        search_c_3->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"padding:4px;\n"
"padding-left:10px;\n"
"padding-right:15px;\n"
"color:#6876e1;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
""));

        horizontalLayout_6->addWidget(search_c_3);

        chercher_2 = new QPushButton(horizontalLayoutWidget_6);
        chercher_2->setObjectName(QString::fromUtf8("chercher_2"));

        horizontalLayout_6->addWidget(chercher_2);

        horizontalLayoutWidget_7 = new QWidget(page_4);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(760, 370, 257, 61));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        comboBox_rech_3 = new QComboBox(horizontalLayoutWidget_7);
        comboBox_rech_3->addItem(QString());
        comboBox_rech_3->addItem(QString());
        comboBox_rech_3->addItem(QString());
        comboBox_rech_3->setObjectName(QString::fromUtf8("comboBox_rech_3"));

        horizontalLayout_8->addWidget(comboBox_rech_3);

        tri = new QPushButton(horizontalLayoutWidget_7);
        tri->setObjectName(QString::fromUtf8("tri"));

        horizontalLayout_8->addWidget(tri);

        stackedWidget_2->addWidget(page_4);
        stackedWidget->addWidget(page_2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 280, 91, 41));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/qt2/qt1/IMG/logo-01.png")));
        gestion_employee_2 = new QPushButton(centralWidget);
        gestion_employee_2->setObjectName(QString::fromUtf8("gestion_employee_2"));
        gestion_employee_2->setGeometry(QRect(10, 160, 201, 51));
        gestion_employee_2->setMinimumSize(QSize(0, 0));
        gestion_employee_2->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        gestion_employee_2->setPalette(palette1);
        gestion_employee_2->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"  background-color: white;\n"
"  border: none;\n"
"	color:black;\n"
"\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../Downloads/icons8-supplier-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_employee_2->setIcon(icon5);
        gestion_employee_2->setFlat(false);
        gestion_employee_3 = new QPushButton(centralWidget);
        gestion_employee_3->setObjectName(QString::fromUtf8("gestion_employee_3"));
        gestion_employee_3->setGeometry(QRect(10, 280, 201, 51));
        gestion_employee_3->setMinimumSize(QSize(0, 0));
        gestion_employee_3->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        gestion_employee_3->setPalette(palette2);
        gestion_employee_3->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"  background-color: white;\n"
"  border: none;\n"
"	color:black;\n"
"\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Downloads/icons8-client-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_employee_3->setIcon(icon6);
        gestion_employee_3->setFlat(false);
        gestion_employee_4 = new QPushButton(centralWidget);
        gestion_employee_4->setObjectName(QString::fromUtf8("gestion_employee_4"));
        gestion_employee_4->setGeometry(QRect(10, 220, 201, 51));
        gestion_employee_4->setMinimumSize(QSize(0, 0));
        gestion_employee_4->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        gestion_employee_4->setPalette(palette3);
        gestion_employee_4->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"  background-color: white;\n"
"  border: none;\n"
"	color:black;\n"
"\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../Downloads/icons8-stock-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_employee_4->setIcon(icon7);
        gestion_employee_4->setFlat(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, -20, 231, 131));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/461695893_1972114269919615_234353884124521303_n-removebg-preview.png);"));
        gestion_employee_5 = new QPushButton(centralWidget);
        gestion_employee_5->setObjectName(QString::fromUtf8("gestion_employee_5"));
        gestion_employee_5->setGeometry(QRect(10, 340, 201, 51));
        gestion_employee_5->setMinimumSize(QSize(0, 0));
        gestion_employee_5->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        gestion_employee_5->setPalette(palette4);
        gestion_employee_5->setStyleSheet(QString::fromUtf8("QPushButton:checked{\n"
"  background-color: white;\n"
"  border: none;\n"
"	color:black;\n"
"\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../Downloads/icons8-paper-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        gestion_employee_5->setIcon(icon8);
        gestion_employee_5->setFlat(false);
        clientw->setCentralWidget(centralWidget);
        listView->raise();
        gestion_employee->raise();
        stackedWidget->raise();
        label_3->raise();
        gestion_employee_2->raise();
        gestion_employee_3->raise();
        gestion_employee_4->raise();
        label_2->raise();
        gestion_employee_5->raise();

        retranslateUi(clientw);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(clientw);
    } // setupUi

    void retranslateUi(QMainWindow *clientw)
    {
        clientw->setWindowTitle(QCoreApplication::translate("clientw", "Gestion des Clients", nullptr));
        gestion_employee->setText(QCoreApplication::translate("clientw", "Gestion Des Employees", nullptr));
        id->setText(QCoreApplication::translate("clientw", "ID:", nullptr));
        des->setText(QCoreApplication::translate("clientw", "Nom:", nullptr));
        quantite->setText(QCoreApplication::translate("clientw", "Prenom:", nullptr));
        date->setText(QCoreApplication::translate("clientw", "Date_embouche:", nullptr));
        Department_ajouter->setText(QCoreApplication::translate("clientw", "Ajouter", nullptr));
        Department_modifer->setText(QCoreApplication::translate("clientw", "Modifier", nullptr));
        Department_supp->setText(QCoreApplication::translate("clientw", "Supprimer", nullptr));
        Department_pdf->setText(QCoreApplication::translate("clientw", "PDF", nullptr));
        comboBox_rech->setItemText(0, QCoreApplication::translate("clientw", "Choisir", nullptr));
        comboBox_rech->setItemText(1, QCoreApplication::translate("clientw", "ID", nullptr));
        comboBox_rech->setItemText(2, QCoreApplication::translate("clientw", "Genre", nullptr));

        chercher->setText(QCoreApplication::translate("clientw", "Chercher", nullptr));
        Department_sendSms->setText(QCoreApplication::translate("clientw", "Send SMS", nullptr));
        date_2->setText(QCoreApplication::translate("clientw", "Poste:", nullptr));
        date_3->setText(QCoreApplication::translate("clientw", "Num\303\251ro de Tel:", nullptr));
        date_4->setText(QCoreApplication::translate("clientw", "Salaire:", nullptr));
        date_5->setText(QCoreApplication::translate("clientw", "Cin", nullptr));
        lblBkImge_2->setText(QString());
        label_57->setText(QCoreApplication::translate("clientw", " Trier par", nullptr));
        trierPar_2->setItemText(0, QCoreApplication::translate("clientw", "Id", nullptr));
        trierPar_2->setItemText(1, QCoreApplication::translate("clientw", "FirstName", nullptr));
        trierPar_2->setItemText(2, QCoreApplication::translate("clientw", "LastName", nullptr));
        trierPar_2->setItemText(3, QCoreApplication::translate("clientw", "Contact", nullptr));
        trierPar_2->setItemText(4, QCoreApplication::translate("clientw", "Salary", nullptr));

        trierPar_2->setCurrentText(QCoreApplication::translate("clientw", "Id", nullptr));
        trier_employee_2->setText(QCoreApplication::translate("clientw", "Trier", nullptr));
        label_20->setText(QCoreApplication::translate("clientw", "*", nullptr));
        EmployeeID_2->setPlaceholderText(QCoreApplication::translate("clientw", "ID", nullptr));
        EmployeeFirstName_2->setText(QString());
        EmployeeFirstName_2->setPlaceholderText(QCoreApplication::translate("clientw", "First Name", nullptr));
        EmployeeLastName_2->setPlaceholderText(QCoreApplication::translate("clientw", "Last Name", nullptr));
        EmployeeContact_2->setPlaceholderText(QCoreApplication::translate("clientw", "Contact", nullptr));
        EmployeeSalary_2->setPlaceholderText(QCoreApplication::translate("clientw", "Salary", nullptr));
        search_c_2->setText(QString());
        search_c_2->setPlaceholderText(QCoreApplication::translate("clientw", "Rechercher", nullptr));
        search_client_button_2->setText(QString());
        label_4->setText(QCoreApplication::translate("clientw", "Formulaire", nullptr));
        refresh_2->setText(QString());
        supprimer_employee_2->setText(QCoreApplication::translate("clientw", "Supprimer", nullptr));
        ajouter_employee_2->setText(QCoreApplication::translate("clientw", "Ajouter", nullptr));
        modifier_client_2->setText(QCoreApplication::translate("clientw", "Modifier", nullptr));
        id_2->setText(QCoreApplication::translate("clientw", "ID:", nullptr));
        linepp->setText(QCoreApplication::translate("clientw", "Nom:", nullptr));
        quantite_2->setText(QCoreApplication::translate("clientw", "Prenom:", nullptr));
        quantite_3->setText(QCoreApplication::translate("clientw", "Poste:", nullptr));
        quantite_4->setText(QCoreApplication::translate("clientw", "date:", nullptr));
        quantite_5->setText(QCoreApplication::translate("clientw", "Sexee:", nullptr));
        quantite_6->setText(QCoreApplication::translate("clientw", "Salaire:", nullptr));
        quantite_8->setText(QCoreApplication::translate("clientw", "Email:", nullptr));
        comboBox_rech_4->setItemText(0, QCoreApplication::translate("clientw", "pharmacien adjoint", nullptr));
        comboBox_rech_4->setItemText(1, QCoreApplication::translate("clientw", "pharmacien titulaire", nullptr));
        comboBox_rech_4->setItemText(2, QCoreApplication::translate("clientw", "pr\303\251parateur en pharmacie ", nullptr));
        comboBox_rech_4->setItemText(3, QCoreApplication::translate("clientw", "stagiaire en pharmacie", nullptr));

        comboBox_rech_5->setItemText(0, QCoreApplication::translate("clientw", "homme", nullptr));
        comboBox_rech_5->setItemText(1, QCoreApplication::translate("clientw", "femme", nullptr));

        lol->setText(QCoreApplication::translate("clientw", "Ajouter", nullptr));
        Department_modifer_2->setText(QCoreApplication::translate("clientw", "Modifier", nullptr));
        Department_supp_2->setText(QCoreApplication::translate("clientw", "Supprimer", nullptr));
        Department_pdf_2->setText(QCoreApplication::translate("clientw", "PDF", nullptr));
        stat->setText(QCoreApplication::translate("clientw", "stat", nullptr));
        search_c_3->setText(QString());
        search_c_3->setPlaceholderText(QCoreApplication::translate("clientw", "Rechercher", nullptr));
        chercher_2->setText(QCoreApplication::translate("clientw", "Chercher", nullptr));
        comboBox_rech_3->setItemText(0, QCoreApplication::translate("clientw", "Choisir", nullptr));
        comboBox_rech_3->setItemText(1, QCoreApplication::translate("clientw", "ID", nullptr));
        comboBox_rech_3->setItemText(2, QCoreApplication::translate("clientw", "NOM", nullptr));

        tri->setText(QCoreApplication::translate("clientw", "Tri", nullptr));
        label_3->setText(QString());
        gestion_employee_2->setText(QCoreApplication::translate("clientw", "Gestion Des Fournisseurs", nullptr));
        gestion_employee_3->setText(QCoreApplication::translate("clientw", "Gestion Des Clients", nullptr));
        gestion_employee_4->setText(QCoreApplication::translate("clientw", "Gestion Des Stocks", nullptr));
        label_2->setText(QString());
        gestion_employee_5->setText(QCoreApplication::translate("clientw", "Gestion Des Commandes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientw: public Ui_clientw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTW_H
