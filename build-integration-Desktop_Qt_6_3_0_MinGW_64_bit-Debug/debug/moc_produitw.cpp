/****************************************************************************
** Meta object code from reading C++ file 'produitw.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../integration/produitw.h"
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
#error "The header file 'produitw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_produitw_t {
    const uint offsetsAndSize[28];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_produitw_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_produitw_t qt_meta_stringdata_produitw = {
    {
QT_MOC_LITERAL(0, 8), // "produitw"
QT_MOC_LITERAL(9, 16), // "on_ajout_clicked"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 14), // "on_aff_clicked"
QT_MOC_LITERAL(42, 19), // "on_rech_textChanged"
QT_MOC_LITERAL(62, 4), // "arg1"
QT_MOC_LITERAL(67, 14), // "on_PDF_clicked"
QT_MOC_LITERAL(82, 16), // "on_stats_clicked"
QT_MOC_LITERAL(99, 16), // "on_notif_clicked"
QT_MOC_LITERAL(116, 21), // "on_Historique_clicked"
QT_MOC_LITERAL(138, 20), // "on_supprmier_clicked"
QT_MOC_LITERAL(159, 19), // "on_modifier_clicked"
QT_MOC_LITERAL(179, 22), // "on_TEMPETHUMID_clicked"
QT_MOC_LITERAL(202, 32) // "on_comboBox_2_currentTextChanged"

    },
    "produitw\0on_ajout_clicked\0\0on_aff_clicked\0"
    "on_rech_textChanged\0arg1\0on_PDF_clicked\0"
    "on_stats_clicked\0on_notif_clicked\0"
    "on_Historique_clicked\0on_supprmier_clicked\0"
    "on_modifier_clicked\0on_TEMPETHUMID_clicked\0"
    "on_comboBox_2_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_produitw[] = {

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
       4,    1,   82,    2, 0x08,    3 /* Private */,
       6,    0,   85,    2, 0x08,    5 /* Private */,
       7,    0,   86,    2, 0x08,    6 /* Private */,
       8,    0,   87,    2, 0x08,    7 /* Private */,
       9,    0,   88,    2, 0x08,    8 /* Private */,
      10,    0,   89,    2, 0x08,    9 /* Private */,
      11,    0,   90,    2, 0x08,   10 /* Private */,
      12,    0,   91,    2, 0x08,   11 /* Private */,
      13,    1,   92,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void produitw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<produitw *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_ajout_clicked(); break;
        case 1: _t->on_aff_clicked(); break;
        case 2: _t->on_rech_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_PDF_clicked(); break;
        case 4: _t->on_stats_clicked(); break;
        case 5: _t->on_notif_clicked(); break;
        case 6: _t->on_Historique_clicked(); break;
        case 7: _t->on_supprmier_clicked(); break;
        case 8: _t->on_modifier_clicked(); break;
        case 9: _t->on_TEMPETHUMID_clicked(); break;
        case 10: _t->on_comboBox_2_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject produitw::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_produitw.offsetsAndSize,
    qt_meta_data_produitw,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_produitw_t
, QtPrivate::TypeAndForceComplete<produitw, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *produitw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *produitw::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_produitw.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int produitw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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