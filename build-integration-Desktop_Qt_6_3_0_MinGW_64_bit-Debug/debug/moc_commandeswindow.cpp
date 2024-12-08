/****************************************************************************
** Meta object code from reading C++ file 'commandeswindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../integration/commandeswindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandeswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommandesWindow_t {
    const uint offsetsAndSize[28];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CommandesWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CommandesWindow_t qt_meta_stringdata_CommandesWindow = {
    {
QT_MOC_LITERAL(0, 15), // "CommandesWindow"
QT_MOC_LITERAL(16, 33), // "on_btn_ajouter_commande_3_cli..."
QT_MOC_LITERAL(50, 0), // ""
QT_MOC_LITERAL(51, 35), // "on_btn_supprimer_commande_3_c..."
QT_MOC_LITERAL(87, 8), // "afficher"
QT_MOC_LITERAL(96, 34), // "on_btn_modifier_commande_3_cl..."
QT_MOC_LITERAL(131, 43), // "on_CritereTriCommande_3_curre..."
QT_MOC_LITERAL(175, 5), // "index"
QT_MOC_LITERAL(181, 30), // "on_chercher_commande_3_clicked"
QT_MOC_LITERAL(212, 15), // "on_stat_clicked"
QT_MOC_LITERAL(228, 29), // "on_btn_pdf_commande_3_clicked"
QT_MOC_LITERAL(258, 18), // "on_envoyer_clicked"
QT_MOC_LITERAL(277, 16), // "on_promo_clicked"
QT_MOC_LITERAL(294, 15) // "on_temp_clicked"

    },
    "CommandesWindow\0on_btn_ajouter_commande_3_clicked\0"
    "\0on_btn_supprimer_commande_3_clicked\0"
    "afficher\0on_btn_modifier_commande_3_clicked\0"
    "on_CritereTriCommande_3_currentIndexChanged\0"
    "index\0on_chercher_commande_3_clicked\0"
    "on_stat_clicked\0on_btn_pdf_commande_3_clicked\0"
    "on_envoyer_clicked\0on_promo_clicked\0"
    "on_temp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandesWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    1,   84,    2, 0x08,    5 /* Private */,
       8,    0,   87,    2, 0x08,    7 /* Private */,
       9,    0,   88,    2, 0x08,    8 /* Private */,
      10,    0,   89,    2, 0x08,    9 /* Private */,
      11,    0,   90,    2, 0x08,   10 /* Private */,
      12,    0,   91,    2, 0x08,   11 /* Private */,
      13,    0,   92,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CommandesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommandesWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_ajouter_commande_3_clicked(); break;
        case 1: _t->on_btn_supprimer_commande_3_clicked(); break;
        case 2: _t->afficher(); break;
        case 3: _t->on_btn_modifier_commande_3_clicked(); break;
        case 4: _t->on_CritereTriCommande_3_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_chercher_commande_3_clicked(); break;
        case 6: _t->on_stat_clicked(); break;
        case 7: _t->on_btn_pdf_commande_3_clicked(); break;
        case 8: _t->on_envoyer_clicked(); break;
        case 9: _t->on_promo_clicked(); break;
        case 10: _t->on_temp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CommandesWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CommandesWindow.offsetsAndSize,
    qt_meta_data_CommandesWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CommandesWindow_t
, QtPrivate::TypeAndForceComplete<CommandesWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CommandesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommandesWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CommandesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
