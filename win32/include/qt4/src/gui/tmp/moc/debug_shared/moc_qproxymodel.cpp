/****************************************************************************
** Meta object code from reading C++ file 'qproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../itemviews/qproxymodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProxyModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x08,
      64,   61,   12,   12, 0x08,
     116,   61,   12,   12, 0x08,
     159,   61,   12,   12, 0x08,
     210,   61,   12,   12, 0x08,
     252,   61,   12,   12, 0x08,
     307,   61,   12,   12, 0x08,
     353,   61,   12,   12, 0x08,
     407,   61,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QProxyModel[] = {
    "QProxyModel\0\0,\0"
    "_q_sourceDataChanged(QModelIndex,QModelIndex)\0"
    ",,\0_q_sourceRowsAboutToBeInserted(QModelIndex,int,int)\0"
    "_q_sourceRowsInserted(QModelIndex,int,int)\0"
    "_q_sourceRowsAboutToBeRemoved(QModelIndex,int,int)\0"
    "_q_sourceRowsRemoved(QModelIndex,int,int)\0"
    "_q_sourceColumnsAboutToBeInserted(QModelIndex,int,int)\0"
    "_q_sourceColumnsInserted(QModelIndex,int,int)\0"
    "_q_sourceColumnsAboutToBeRemoved(QModelIndex,int,int)\0"
    "_q_sourceColumnsRemoved(QModelIndex,int,int)\0"
};

void QProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QProxyModel *_t = static_cast<QProxyModel *>(_o);
        switch (_id) {
        case 0: _t->d_func()->_q_sourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->d_func()->_q_sourceRowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->d_func()->_q_sourceRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->d_func()->_q_sourceRowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->d_func()->_q_sourceRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->d_func()->_q_sourceColumnsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->d_func()->_q_sourceColumnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->d_func()->_q_sourceColumnsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->d_func()->_q_sourceColumnsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QProxyModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QProxyModel,
      qt_meta_data_QProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProxyModel))
        return static_cast<void*>(const_cast< QProxyModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
