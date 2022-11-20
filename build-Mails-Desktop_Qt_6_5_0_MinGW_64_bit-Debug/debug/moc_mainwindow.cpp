/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Mails/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_MainWindow_t {};
static constexpr auto qt_meta_stringdata_MainWindow = QtMocHelpers::stringData(
    "MainWindow",
    "on_btn_add_letter_triggered",
    "",
    "slotCurrent",
    "QModelIndex",
    "index",
    "on_btn_del_db_triggered",
    "on_searchLine_textChanged",
    "arg1",
    "on_btn_help_triggered",
    "on_btn_about_triggered",
    "on_btn_to1_triggered",
    "on_label_4_linkActivated",
    "link"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[12];
    char stringdata5[6];
    char stringdata6[24];
    char stringdata7[26];
    char stringdata8[5];
    char stringdata9[22];
    char stringdata10[23];
    char stringdata11[21];
    char stringdata12[25];
    char stringdata13[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 27),  // "on_btn_add_letter_triggered"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 11),  // "slotCurrent"
        QT_MOC_LITERAL(52, 11),  // "QModelIndex"
        QT_MOC_LITERAL(64, 5),  // "index"
        QT_MOC_LITERAL(70, 23),  // "on_btn_del_db_triggered"
        QT_MOC_LITERAL(94, 25),  // "on_searchLine_textChanged"
        QT_MOC_LITERAL(120, 4),  // "arg1"
        QT_MOC_LITERAL(125, 21),  // "on_btn_help_triggered"
        QT_MOC_LITERAL(147, 22),  // "on_btn_about_triggered"
        QT_MOC_LITERAL(170, 20),  // "on_btn_to1_triggered"
        QT_MOC_LITERAL(191, 24),  // "on_label_4_linkActivated"
        QT_MOC_LITERAL(216, 4)   // "link"
    },
    "MainWindow",
    "on_btn_add_letter_triggered",
    "",
    "slotCurrent",
    "QModelIndex",
    "index",
    "on_btn_del_db_triggered",
    "on_searchLine_textChanged",
    "arg1",
    "on_btn_help_triggered",
    "on_btn_about_triggered",
    "on_btn_to1_triggered",
    "on_label_4_linkActivated",
    "link"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    1,   63,    2, 0x08,    2 /* Private */,
       6,    0,   66,    2, 0x08,    4 /* Private */,
       7,    1,   67,    2, 0x08,    5 /* Private */,
       9,    0,   70,    2, 0x08,    7 /* Private */,
      10,    0,   71,    2, 0x08,    8 /* Private */,
      11,    0,   72,    2, 0x08,    9 /* Private */,
      12,    1,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_btn_add_letter_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'on_btn_del_db_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchLine_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_btn_help_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_about_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_to1_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_label_4_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_add_letter_triggered(); break;
        case 1: _t->slotCurrent((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->on_btn_del_db_triggered(); break;
        case 3: _t->on_searchLine_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_btn_help_triggered(); break;
        case 5: _t->on_btn_about_triggered(); break;
        case 6: _t->on_btn_to1_triggered(); break;
        case 7: _t->on_label_4_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
