/****************************************************************************
** Meta object code from reading C++ file 'qdirmodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../itemviews/qdirmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdirmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDirModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   11,   10,   10, 0x0a,
      39,   10,   10,   10, 0x2a,
      49,   10,   10,   10, 0x08,

 // properties: name, type, flags
      67,   62, 0x01095103,
      83,   62, 0x01095103,
      92,   62, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QDirModel[] = {
    "QDirModel\0\0parent\0refresh(QModelIndex)\0"
    "refresh()\0_q_refresh()\0bool\0resolveSymlinks\0"
    "readOnly\0lazyChildCount\0"
};

void QDirModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDirModel *_t = static_cast<QDirModel *>(_o);
        switch (_id) {
        case 0: _t->refresh((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->d_func()->_q_refresh(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDirModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDirModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QDirModel,
      qt_meta_data_QDirModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDirModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDirModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDirModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDirModel))
        return static_cast<void*>(const_cast< QDirModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QDirModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< bool*>(_v) = resolveSymlinks(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isReadOnly(); break;
        case 2: *reinterpret_cast< bool*>(_v) = lazyChildCount(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setResolveSymlinks(*reinterpret_cast< bool*>(_v)); break;
        case 1: setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 2: setLazyChildCount(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
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
QT_END_MOC_NAMESPACE
