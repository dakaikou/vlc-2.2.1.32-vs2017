/****************************************************************************
** Meta object code from reading C++ file 'qmdisubwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qmdisubwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmdisubwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMdiSubWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   15,   14,   14, 0x05,
      87,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   14,   14,   14, 0x0a,
     122,   14,   14,   14, 0x0a,
     135,   14,   14,   14, 0x08,
     161,   14,   14,   14, 0x08,
     189,  187,   14,   14, 0x08,

 // properties: name, type, flags
     235,  231, 0x02095103,
     254,  231, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QMdiSubWindow[] = {
    "QMdiSubWindow\0\0oldState,newState\0"
    "windowStateChanged(Qt::WindowStates,Qt::WindowStates)\0"
    "aboutToActivate()\0showSystemMenu()\0"
    "showShaded()\0_q_updateStaysOnTopHint()\0"
    "_q_enterInteractiveMode()\0,\0"
    "_q_processFocusChanged(QWidget*,QWidget*)\0"
    "int\0keyboardSingleStep\0keyboardPageStep\0"
};

void QMdiSubWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMdiSubWindow *_t = static_cast<QMdiSubWindow *>(_o);
        switch (_id) {
        case 0: _t->windowStateChanged((*reinterpret_cast< Qt::WindowStates(*)>(_a[1])),(*reinterpret_cast< Qt::WindowStates(*)>(_a[2]))); break;
        case 1: _t->aboutToActivate(); break;
        case 2: _t->showSystemMenu(); break;
        case 3: _t->showShaded(); break;
        case 4: _t->d_func()->_q_updateStaysOnTopHint(); break;
        case 5: _t->d_func()->_q_enterInteractiveMode(); break;
        case 6: _t->d_func()->_q_processFocusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QMdiSubWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QMdiSubWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMdiSubWindow,
      qt_meta_data_QMdiSubWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMdiSubWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMdiSubWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMdiSubWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMdiSubWindow))
        return static_cast<void*>(const_cast< QMdiSubWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMdiSubWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = keyboardSingleStep(); break;
        case 1: *reinterpret_cast< int*>(_v) = keyboardPageStep(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setKeyboardSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 1: setKeyboardPageStep(*reinterpret_cast< int*>(_v)); break;
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
void QMdiSubWindow::windowStateChanged(Qt::WindowStates _t1, Qt::WindowStates _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMdiSubWindow::aboutToActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
