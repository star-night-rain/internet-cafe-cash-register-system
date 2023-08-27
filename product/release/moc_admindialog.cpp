/****************************************************************************
** Meta object code from reading C++ file 'admindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../admindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminDialog_t {
    QByteArrayData data[13];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminDialog_t qt_meta_stringdata_AdminDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdminDialog"
QT_MOC_LITERAL(1, 12, 8), // "openChat"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "myclose"
QT_MOC_LITERAL(4, 30, 9), // "openStore"
QT_MOC_LITERAL(5, 40, 12), // "openCardInfo"
QT_MOC_LITERAL(6, 53, 15), // "openCardRecords"
QT_MOC_LITERAL(7, 69, 12), // "openBillings"
QT_MOC_LITERAL(8, 82, 12), // "amountUpdate"
QT_MOC_LITERAL(9, 95, 13), // "incomeUpdate1"
QT_MOC_LITERAL(10, 109, 13), // "incomeUpdate2"
QT_MOC_LITERAL(11, 123, 18), // "on_boardBt_clicked"
QT_MOC_LITERAL(12, 142, 20) // "on_deplaneBt_clicked"

    },
    "AdminDialog\0openChat\0\0myclose\0openStore\0"
    "openCardInfo\0openCardRecords\0openBillings\0"
    "amountUpdate\0incomeUpdate1\0incomeUpdate2\0"
    "on_boardBt_clicked\0on_deplaneBt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openChat(); break;
        case 1: _t->myclose(); break;
        case 2: _t->openStore(); break;
        case 3: _t->openCardInfo(); break;
        case 4: _t->openCardRecords(); break;
        case 5: _t->openBillings(); break;
        case 6: _t->amountUpdate(); break;
        case 7: _t->incomeUpdate1(); break;
        case 8: _t->incomeUpdate2(); break;
        case 9: _t->on_boardBt_clicked(); break;
        case 10: _t->on_deplaneBt_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AdminDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AdminDialog.data,
    qt_meta_data_AdminDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
