/****************************************************************************
** Meta object code from reading C++ file 'datebase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Mails/datebase.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datebase.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DataBase_t {};
static constexpr auto qt_meta_stringdata_DataBase = QtMocHelpers::stringData(
    "DataBase",
    "clearDataBase",
    "",
    "insertIntoTable",
    "data",
    "name",
    "author",
    "year",
    "desc",
    "pic"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_DataBase_t {
    uint offsetsAndSizes[20];
    char stringdata0[9];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[7];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DataBase_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DataBase_t qt_meta_stringdata_DataBase = {
    {
        QT_MOC_LITERAL(0, 8),  // "DataBase"
        QT_MOC_LITERAL(9, 13),  // "clearDataBase"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 15),  // "insertIntoTable"
        QT_MOC_LITERAL(40, 4),  // "data"
        QT_MOC_LITERAL(45, 4),  // "name"
        QT_MOC_LITERAL(50, 6),  // "author"
        QT_MOC_LITERAL(57, 4),  // "year"
        QT_MOC_LITERAL(62, 4),  // "desc"
        QT_MOC_LITERAL(67, 3)   // "pic"
    },
    "DataBase",
    "clearDataBase",
    "",
    "insertIntoTable",
    "data",
    "name",
    "author",
    "year",
    "desc",
    "pic"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DataBase[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    1,   33,    2, 0x0a,    2 /* Public */,
       3,    5,   36,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QVariantList,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataBase.offsetsAndSizes,
    qt_meta_data_DataBase,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DataBase_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataBase, std::true_type>,
        // method 'clearDataBase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertIntoTable'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'insertIntoTable'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void DataBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clearDataBase(); break;
        case 1: { bool _r = _t->insertIntoTable((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->insertIntoTable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *DataBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
