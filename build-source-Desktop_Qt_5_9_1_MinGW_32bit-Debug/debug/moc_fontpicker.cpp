/****************************************************************************
** Meta object code from reading C++ file 'fontpicker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/fontpicker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontpicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fontpicker_t {
    QByteArrayData data[8];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fontpicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fontpicker_t qt_meta_stringdata_fontpicker = {
    {
QT_MOC_LITERAL(0, 0, 10), // "fontpicker"
QT_MOC_LITERAL(1, 11, 24), // "on_fontApply_textChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 31), // "on_textSizeChanger_valueChanged"
QT_MOC_LITERAL(4, 69, 5), // "value"
QT_MOC_LITERAL(5, 75, 20), // "on_textColor_clicked"
QT_MOC_LITERAL(6, 96, 30), // "on_textBackgroundColor_clicked"
QT_MOC_LITERAL(7, 127, 24) // "on_resetSettings_clicked"

    },
    "fontpicker\0on_fontApply_textChanged\0"
    "\0on_textSizeChanger_valueChanged\0value\0"
    "on_textColor_clicked\0"
    "on_textBackgroundColor_clicked\0"
    "on_resetSettings_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fontpicker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fontpicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fontpicker *_t = static_cast<fontpicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_fontApply_textChanged(); break;
        case 1: _t->on_textSizeChanger_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_textColor_clicked(); break;
        case 3: _t->on_textBackgroundColor_clicked(); break;
        case 4: _t->on_resetSettings_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject fontpicker::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fontpicker.data,
      qt_meta_data_fontpicker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *fontpicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fontpicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fontpicker.stringdata0))
        return static_cast<void*>(const_cast< fontpicker*>(this));
    return QWidget::qt_metacast(_clname);
}

int fontpicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
