/****************************************************************************
** Meta object code from reading C++ file 'mycanthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mycanthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycanthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyCanThread_t {
    QByteArrayData data[11];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyCanThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyCanThread_t qt_meta_stringdata_MyCanThread = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyCanThread"
QT_MOC_LITERAL(1, 12, 16), // "sendedInfoSignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "info"
QT_MOC_LITERAL(4, 35, 15), // "rcvedInfoSignal"
QT_MOC_LITERAL(5, 51, 16), // "getCanDataSignal"
QT_MOC_LITERAL(6, 68, 12), // "PVCI_CAN_OBJ"
QT_MOC_LITERAL(7, 81, 4), // "objs"
QT_MOC_LITERAL(8, 86, 5), // "count"
QT_MOC_LITERAL(9, 92, 8), // "sendSlot"
QT_MOC_LITERAL(10, 101, 11) // "VCI_CAN_OBJ"

    },
    "MyCanThread\0sendedInfoSignal\0\0info\0"
    "rcvedInfoSignal\0getCanDataSignal\0"
    "PVCI_CAN_OBJ\0objs\0count\0sendSlot\0"
    "VCI_CAN_OBJ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCanThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    2,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,    3,

       0        // eod
};

void MyCanThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyCanThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendedInfoSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->rcvedInfoSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->getCanDataSignal((*reinterpret_cast< PVCI_CAN_OBJ(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sendSlot((*reinterpret_cast< VCI_CAN_OBJ(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyCanThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyCanThread::sendedInfoSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyCanThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyCanThread::rcvedInfoSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyCanThread::*)(PVCI_CAN_OBJ , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyCanThread::getCanDataSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyCanThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_MyCanThread.data,
    qt_meta_data_MyCanThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyCanThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyCanThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyCanThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int MyCanThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MyCanThread::sendedInfoSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyCanThread::rcvedInfoSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyCanThread::getCanDataSignal(PVCI_CAN_OBJ _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
