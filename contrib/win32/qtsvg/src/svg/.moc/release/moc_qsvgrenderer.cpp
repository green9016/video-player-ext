/****************************************************************************
** Meta object code from reading C++ file 'qsvgrenderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qsvgrenderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsvgrenderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSvgRenderer_t {
    QByteArrayData data[15];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSvgRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSvgRenderer_t qt_meta_stringdata_QSvgRenderer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QSvgRenderer"
QT_MOC_LITERAL(1, 13, 13), // "repaintNeeded"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "load"
QT_MOC_LITERAL(4, 33, 8), // "filename"
QT_MOC_LITERAL(5, 42, 8), // "contents"
QT_MOC_LITERAL(6, 51, 17), // "QXmlStreamReader*"
QT_MOC_LITERAL(7, 69, 6), // "render"
QT_MOC_LITERAL(8, 76, 9), // "QPainter*"
QT_MOC_LITERAL(9, 86, 1), // "p"
QT_MOC_LITERAL(10, 88, 6), // "bounds"
QT_MOC_LITERAL(11, 95, 9), // "elementId"
QT_MOC_LITERAL(12, 105, 7), // "viewBox"
QT_MOC_LITERAL(13, 113, 15), // "framesPerSecond"
QT_MOC_LITERAL(14, 129, 12) // "currentFrame"

    },
    "QSvgRenderer\0repaintNeeded\0\0load\0"
    "filename\0contents\0QXmlStreamReader*\0"
    "render\0QPainter*\0p\0bounds\0elementId\0"
    "viewBox\0framesPerSecond\0currentFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSvgRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       3,    1,   58,    2, 0x0a /* Public */,
       3,    1,   61,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       7,    2,   67,    2, 0x0a /* Public */,
       7,    3,   72,    2, 0x0a /* Public */,
       7,    2,   79,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QByteArray,    5,
    QMetaType::Bool, 0x80000000 | 6,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QRectF,    9,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, QMetaType::QRectF,    9,   11,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   11,

 // properties: name, type, flags
      12, QMetaType::QRectF, 0x00095103,
      13, QMetaType::Int, 0x00095103,
      14, QMetaType::Int, 0x00095103,

       0        // eod
};

void QSvgRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSvgRenderer *_t = static_cast<QSvgRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->repaintNeeded(); break;
        case 1: { bool _r = _t->load((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->load((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->load((*reinterpret_cast< QXmlStreamReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->render((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 5: _t->render((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 6: _t->render((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3]))); break;
        case 7: _t->render((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSvgRenderer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSvgRenderer::repaintNeeded)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QSvgRenderer *_t = static_cast<QSvgRenderer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRectF*>(_v) = _t->viewBoxF(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->framesPerSecond(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentFrame(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QSvgRenderer *_t = static_cast<QSvgRenderer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setViewBox(*reinterpret_cast< QRectF*>(_v)); break;
        case 1: _t->setFramesPerSecond(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrentFrame(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QSvgRenderer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSvgRenderer.data,
      qt_meta_data_QSvgRenderer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSvgRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSvgRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSvgRenderer.stringdata0))
        return static_cast<void*>(const_cast< QSvgRenderer*>(this));
    return QObject::qt_metacast(_clname);
}

int QSvgRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSvgRenderer::repaintNeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
