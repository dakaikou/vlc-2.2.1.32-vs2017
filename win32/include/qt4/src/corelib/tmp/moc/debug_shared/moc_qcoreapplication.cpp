/****************************************************************************
** Meta object code from reading C++ file 'qcoreapplication.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../kernel/qcoreapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcoreapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCoreApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      32,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   17,   17,   17, 0x0a,

 // properties: name, type, flags
      63,   55, 0x0a095103,
      79,   55, 0x0a095103,
      98,   55, 0x0a095103,
     115,   55, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_QCoreApplication[] = {
    "QCoreApplication\0\0aboutToQuit()\0"
    "unixSignal(int)\0quit()\0QString\0"
    "applicationName\0applicationVersion\0"
    "organizationName\0organizationDomain\0"
};

void QCoreApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCoreApplication *_t = static_cast<QCoreApplication *>(_o);
        switch (_id) {
        case 0: _t->aboutToQuit(); break;
        case 1: _t->unixSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->quit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCoreApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCoreApplication::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCoreApplication,
      qt_meta_data_QCoreApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCoreApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCoreApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCoreApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCoreApplication))
        return static_cast<void*>(const_cast< QCoreApplication*>(this));
    return QObject::qt_metacast(_clname);
}

int QCoreApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = applicationName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = applicationVersion(); break;
        case 2: *reinterpret_cast< QString*>(_v) = organizationName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = organizationDomain(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setApplicationName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setApplicationVersion(*reinterpret_cast< QString*>(_v)); break;
        case 2: setOrganizationName(*reinterpret_cast< QString*>(_v)); break;
        case 3: setOrganizationDomain(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCoreApplication::aboutToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QCoreApplication::unixSignal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
