#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------

QT       += core gui sql charts concurrent network serialport printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Atelier_Connexion
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
SOURCES += \
    arduino.cpp \
    clientw.cpp \
    commandew.cpp \
    connection.cpp \
    employee.cpp \
    fournisseur.cpp \
    logindialog.cpp \
    main.cpp \
    employew.cpp \
    motpasseobl.cpp \
    produit.cpp \
    produitw.cpp

HEADERS += \
    arduino.h \
    clientw.h \
    commandew.h \
    connection.h \
    employee.h \
    employew.h \
    fournisseurw.h \
    logindialog.h \
    motpasseobl.h \
    produit.h \
    produitw.h

FORMS += \
    clientw.ui \
    commandew.ui \
    employew.ui \
    fournisseurw.ui \
    logindialog.ui \
    motpasseobl.ui \
    produitw.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
RESOURCES += \
    LPO.qrc \
    img.qrc \
    lok.qrc \
    momo.qrc \
    opl.qrc \
    plo.qrc

DISTFILES += \
    delya.jpg \
    medicine-capsules-global-health-with-geometric-pattern-digital-remix.jpg \
    plolp.jpg \
    user_1077114.png
