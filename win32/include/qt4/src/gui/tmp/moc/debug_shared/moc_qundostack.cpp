/****************************************************************************
** Meta object code from reading C++ file 'qundostack.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../util/qundostack.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qundostack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QUndoStack[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x05,
      40,   34,   11,   11, 0x05,
      67,   59,   11,   11, 0x05,
      96,   88,   11,   11, 0x05,
     126,  117,   11,   11, 0x05,
     160,  151,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     185,   11,   11,   11, 0x0a,
     196,   12,   11,   11, 0x0a,
     210,   11,   11,   11, 0x0a,
     217,   11,   11,   11, 0x0a,
     231,  224,   11,   11, 0x0a,
     247,   11,   11,   11, 0x2a,

 // properties: name, type, flags
     224,  259, 0x01095103,
     268,  264, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QUndoStack[] = {
    "QUndoStack\0\0idx\0indexChanged(int)\0"
    "clean\0cleanChanged(bool)\0canUndo\0"
    "canUndoChanged(bool)\0canRedo\0"
    "canRedoChanged(bool)\0undoText\0"
    "undoTextChanged(QString)\0redoText\0"
    "redoTextChanged(QString)\0setClean()\0"
    "setIndex(int)\0undo()\0redo()\0active\0"
    "setActive(bool)\0setActive()\0bool\0int\0"
    "undoLimit\0"
};

void QUndoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QUndoStack *_t = static_cast<QUndoStack *>(_o);
        switch (_id) {
        case 0: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->undoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->redoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setClean(); break;
        case 7: _t->setIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->undo(); break;
        case 9: _t->redo(); break;
        case 10: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setActive(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QUndoStack::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QUndoStack::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QUndoStack,
      qt_meta_data_QUndoStack, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QUndoStack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QUndoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QUndoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QUndoStack))
        return static_cast<void*>(const_cast< QUndoStack*>(this));
    return QObject::qt_metacast(_clname);
}

int QUndoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isActive(); break;
        case 1: *reinterpret_cast< int*>(_v) = undoLimit(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: setUndoLimit(*reinterpret_cast< int*>(_v)); break;
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

// SIGNAL 0
void QUndoStack::indexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QUndoStack::cleanChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QUndoStack::canUndoChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QUndoStack::canRedoChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QUndoStack::undoTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QUndoStack::redoTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
