/****************************************************************************
** Meta object code from reading C++ file 'qdockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qdockwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDockWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   49, // properties
       1,   65, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   13,   12,   12, 0x05,
      80,   71,   12,   12, 0x05,
     115,  102,   12,   12, 0x05,
     164,  156,   12,   12, 0x05,
     193,  188,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     233,   12,   12,   12, 0x08,
     253,   12,   12,   12, 0x08,

 // properties: name, type, flags
     278,  273, 0x01095103,
      13,  287, 0x0049510b,
     102,  306, 0x0049510b,
     334,  326, 0x0a095103,

 // properties: notify_signal_id
       0,
       0,
       2,
       0,

 // enums: name, flags, count, data
     287, 0x1,    8,   69,

 // enum data: key, value
     346, uint(QDockWidget::DockWidgetClosable),
     365, uint(QDockWidget::DockWidgetMovable),
     383, uint(QDockWidget::DockWidgetFloatable),
     403, uint(QDockWidget::DockWidgetVerticalTitleBar),
     430, uint(QDockWidget::DockWidgetFeatureMask),
     452, uint(QDockWidget::AllDockWidgetFeatures),
     474, uint(QDockWidget::NoDockWidgetFeatures),
     495, uint(QDockWidget::Reserved),

       0        // eod
};

static const char qt_meta_stringdata_QDockWidget[] = {
    "QDockWidget\0\0features\0"
    "featuresChanged(QDockWidget::DockWidgetFeatures)\0"
    "topLevel\0topLevelChanged(bool)\0"
    "allowedAreas\0allowedAreasChanged(Qt::DockWidgetAreas)\0"
    "visible\0visibilityChanged(bool)\0area\0"
    "dockLocationChanged(Qt::DockWidgetArea)\0"
    "_q_toggleView(bool)\0_q_toggleTopLevel()\0"
    "bool\0floating\0DockWidgetFeatures\0"
    "Qt::DockWidgetAreas\0QString\0windowTitle\0"
    "DockWidgetClosable\0DockWidgetMovable\0"
    "DockWidgetFloatable\0DockWidgetVerticalTitleBar\0"
    "DockWidgetFeatureMask\0AllDockWidgetFeatures\0"
    "NoDockWidgetFeatures\0Reserved\0"
};

void QDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDockWidget *_t = static_cast<QDockWidget *>(_o);
        switch (_id) {
        case 0: _t->featuresChanged((*reinterpret_cast< QDockWidget::DockWidgetFeatures(*)>(_a[1]))); break;
        case 1: _t->topLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->allowedAreasChanged((*reinterpret_cast< Qt::DockWidgetAreas(*)>(_a[1]))); break;
        case 3: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->dockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_toggleView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_toggleTopLevel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDockWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDockWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDockWidget,
      qt_meta_data_QDockWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDockWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDockWidget))
        return static_cast<void*>(const_cast< QDockWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< bool*>(_v) = isFloating(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(features()); break;
        case 2: *reinterpret_cast< Qt::DockWidgetAreas*>(_v) = allowedAreas(); break;
        case 3: *reinterpret_cast< QString*>(_v) = windowTitle(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFloating(*reinterpret_cast< bool*>(_v)); break;
        case 1: setFeatures(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: setAllowedAreas(*reinterpret_cast< Qt::DockWidgetAreas*>(_v)); break;
        case 3: setWindowTitle(*reinterpret_cast< QString*>(_v)); break;
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
void QDockWidget::featuresChanged(QDockWidget::DockWidgetFeatures _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDockWidget::topLevelChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDockWidget::allowedAreasChanged(Qt::DockWidgetAreas _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDockWidget::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDockWidget::dockLocationChanged(Qt::DockWidgetArea _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
