/****************************************************************************
** Meta object code from reading C++ file 'qundoview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qundoview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qundoview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QUndoView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x0a,
      45,   39,   10,   10, 0x0a,

 // properties: name, type, flags
      75,   67, 0x0a095103,
      92,   86, 0x45095103,

       0        // eod
};

static const char qt_meta_stringdata_QUndoView[] = {
    "QUndoView\0\0stack\0setStack(QUndoStack*)\0"
    "group\0setGroup(QUndoGroup*)\0QString\0"
    "emptyLabel\0QIcon\0cleanIcon\0"
};

void QUndoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QUndoView *_t = static_cast<QUndoView *>(_o);
        switch (_id) {
        case 0: _t->setStack((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        case 1: _t->setGroup((*reinterpret_cast< QUndoGroup*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QUndoView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QUndoView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QUndoView,
      qt_meta_data_QUndoView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QUndoView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QUndoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QUndoView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QUndoView))
        return static_cast<void*>(const_cast< QUndoView*>(this));
    return QListView::qt_metacast(_clname);
}

int QUndoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = emptyLabel(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = cleanIcon(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEmptyLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: setCleanIcon(*reinterpret_cast< QIcon*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
