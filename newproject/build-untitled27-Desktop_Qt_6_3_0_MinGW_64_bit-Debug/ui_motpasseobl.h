/********************************************************************************
** Form generated from reading UI file 'motpasseobl.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTPASSEOBL_H
#define UI_MOTPASSEOBL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Motpasseobl
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButtonlogin2;
    QLabel *label_2;
    QComboBox *comboBox90;
    QToolButton *toolButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Motpasseobl)
    {
        if (Motpasseobl->objectName().isEmpty())
            Motpasseobl->setObjectName(QString::fromUtf8("Motpasseobl"));
        Motpasseobl->resize(803, 792);
        Motpasseobl->setStyleSheet(QString::fromUtf8("*{\n"
"	background-image: url(:/opk/medicine-capsules-global-health-with-geometric-pattern-digital-remix.jpg);\n"
"     font-family:century gothic;\n"
"     font-size:24px;\n"
"}\n"
"QFrame{\n"
"background:rgba(0,0,0,0.8);\n"
"border-radius:15px;\n"
"}\n"
"#Form{\n"
"background:url(:/new/prefix1/plolp.jpg);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"background:blue;\n"
"border-radius:60px;\n"
"}\n"
"QToolButton\n"
"{\n"
"background:blue;\n"
"border-radius:60px;\n"
"}\n"
"QLabel{\n"
"color:white;\n"
"background:transparent;\n"
"}\n"
"QPushButton\n"
"{\n"
"background:blue;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover{\n"
"color:#333;\n"
"border-radius:15px;\n"
"background:#49abff;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        centralwidget = new QWidget(Motpasseobl);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(140, 120, 491, 551));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 90, 251, 91));
        label->setStyleSheet(QString::fromUtf8(""));
        pushButtonlogin2 = new QPushButton(frame);
        pushButtonlogin2->setObjectName(QString::fromUtf8("pushButtonlogin2"));
        pushButtonlogin2->setGeometry(QRect(40, 390, 421, 51));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 220, 461, 20));
        comboBox90 = new QComboBox(frame);
        comboBox90->setObjectName(QString::fromUtf8("comboBox90"));
        comboBox90->setGeometry(QRect(120, 270, 261, 28));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(340, 30, 121, 131));
        toolButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/user_1077114.png);"));
        Motpasseobl->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Motpasseobl);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Motpasseobl->setStatusBar(statusbar);

        retranslateUi(Motpasseobl);

        QMetaObject::connectSlotsByName(Motpasseobl);
    } // setupUi

    void retranslateUi(QMainWindow *Motpasseobl)
    {
        Motpasseobl->setWindowTitle(QCoreApplication::translate("Motpasseobl", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Motpasseobl", "LOGIN HERE", nullptr));
        pushButtonlogin2->setText(QCoreApplication::translate("Motpasseobl", "Login", nullptr));
        label_2->setText(QString());
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Motpasseobl: public Ui_Motpasseobl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTPASSEOBL_H
