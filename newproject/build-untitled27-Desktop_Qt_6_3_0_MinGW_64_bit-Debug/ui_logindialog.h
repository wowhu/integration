/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButtonlogin;
    QLineEdit *lineEditusername;
    QLineEdit *lineEditpassworrd;
    QLabel *labelAttempts;
    QToolButton *toolButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(803, 792);
        LoginDialog->setStyleSheet(QString::fromUtf8("*{\n"
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
        centralwidget = new QWidget(LoginDialog);
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
        pushButtonlogin = new QPushButton(frame);
        pushButtonlogin->setObjectName(QString::fromUtf8("pushButtonlogin"));
        pushButtonlogin->setGeometry(QRect(40, 470, 421, 51));
        lineEditusername = new QLineEdit(frame);
        lineEditusername->setObjectName(QString::fromUtf8("lineEditusername"));
        lineEditusername->setGeometry(QRect(70, 230, 341, 41));
        lineEditpassworrd = new QLineEdit(frame);
        lineEditpassworrd->setObjectName(QString::fromUtf8("lineEditpassworrd"));
        lineEditpassworrd->setGeometry(QRect(70, 340, 341, 41));
        lineEditpassworrd->setEchoMode(QLineEdit::Password);
        labelAttempts = new QLabel(frame);
        labelAttempts->setObjectName(QString::fromUtf8("labelAttempts"));
        labelAttempts->setGeometry(QRect(40, 380, 451, 91));
        labelAttempts->setStyleSheet(QString::fromUtf8(""));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(340, 30, 121, 131));
        toolButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/user_1077114.png);"));
        LoginDialog->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LoginDialog);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginDialog->setStatusBar(statusbar);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QMainWindow *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "LOGIN HERE", nullptr));
        pushButtonlogin->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        lineEditusername->setText(QString());
        lineEditusername->setPlaceholderText(QCoreApplication::translate("LoginDialog", "Username", nullptr));
        lineEditpassworrd->setText(QString());
        lineEditpassworrd->setPlaceholderText(QCoreApplication::translate("LoginDialog", "Password", nullptr));
        labelAttempts->setText(QString());
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
