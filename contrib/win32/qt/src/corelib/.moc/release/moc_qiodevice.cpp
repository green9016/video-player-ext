/****************************************************************************
** Meta object code from reading C++ file 'qiodevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qiodevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qiodevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QIODevice_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QIODevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QIODevice_t qt_meta_stringdata_QIODevice = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QIODevice"
QT_MOC_LITERAL(1, 10, 9), // "readyRead"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "bytesWritten"
QT_MOC_LITERAL(4, 34, 5), // "bytes"
QT_MOC_LITERAL(5, 40, 12), // "aboutToClose"
QT_MOC_LITERAL(6, 53, 19) // "readChannelFinished"

    },
    "QIODevice\0readyRead\0\0bytesWritten\0"
    "bytes\0aboutToClose\0readChannelFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QIODevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,
       6,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QIODevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QIODevice *_t = static_cast<QIODevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->aboutToClose(); break;
        case 3: _t->readChannelFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QIODevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIODevice::readyRead)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QIODevice::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIODevice::bytesWritten)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QIODevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIODevice::aboutToClose)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QIODevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIODevice::readChannelFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QIODevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QIODevice.data,
      qt_meta_data_QIODevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QIODevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QIODevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QIODevice.stringdata0))
        return static_cast<void*>(const_cast< QIODevice*>(this));
    return QObject::qt_metacast(_clname);
}

int QIODevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QIODevice::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QIODevice::bytesWritten(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QIODevice::aboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QIODevice::readChannelFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
