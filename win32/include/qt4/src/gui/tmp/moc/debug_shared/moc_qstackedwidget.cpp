/****************************************************************************
** Meta object code from reading C++ file 'qstackedwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qstackedwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstackedwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStackedWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      42,   36,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   36,   15,   15, 0x0a,
      84,   82,   15,   15, 0x0a,

 // properties: name, type, flags
     115,  111, 0x02495103,
     128,  111, 0x02095001,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_QStackedWidget[] = {
    "QStackedWidget\0\0currentChanged(int)\0"
    "index\0widgetRemoved(int)\0setCurrentIndex(int)\0"
    "w\0setCurrentWidget(QWidget*)\0int\0"
    "currentIndex\0count\0"
};

void QStackedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QStackedWidget *_t = static_cast<QStackedWidget *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->widgetRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setCurrentWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QStackedWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QStackedWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QStackedWidget,
      qt_meta_data_QStackedWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QStackedWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QStackedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QStackedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStackedWidget))
        return static_cast<void*>(const_cast< QStackedWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int QStackedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 1: *reinterpret_cast< int*>(_v) = count(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
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
void QStackedWidget::currentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QStackedWidget::widgetRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
