/****************************************************************************
** Meta object code from reading C++ file 'qmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       8,   34, // properties
       2,   58, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   13,   12,   12, 0x05,
      61,   45,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     113,  105,   12,   12, 0x0a,
     131,  105,   12,   12, 0x0a,

 // properties: name, type, flags
      13,  159, 0x15095103,
      45,  165, 0x0009510b,
     190,  185, 0x01095103,
     199,  185, 0x01095103,
     233,  212, 0x0009510b,
     242,  185, 0x01095103,
     273,  261, 0x0009510b,
     285,  185, 0x01095103,

 // enums: name, flags, count, data
     313, 0x0,    5,   66,
     261, 0x1,    5,   76,

 // enum data: key, value
     324, uint(QMainWindow::AnimatedDocks),
     338, uint(QMainWindow::AllowNestedDocks),
     355, uint(QMainWindow::AllowTabbedDocks),
     372, uint(QMainWindow::ForceTabbedDocks),
     389, uint(QMainWindow::VerticalTabs),
     324, uint(QMainWindow::AnimatedDocks),
     338, uint(QMainWindow::AllowNestedDocks),
     355, uint(QMainWindow::AllowTabbedDocks),
     372, uint(QMainWindow::ForceTabbedDocks),
     389, uint(QMainWindow::VerticalTabs),

       0        // eod
};

static const char qt_meta_stringdata_QMainWindow[] = {
    "QMainWindow\0\0iconSize\0iconSizeChanged(QSize)\0"
    "toolButtonStyle\0"
    "toolButtonStyleChanged(Qt::ToolButtonStyle)\0"
    "enabled\0setAnimated(bool)\0"
    "setDockNestingEnabled(bool)\0QSize\0"
    "Qt::ToolButtonStyle\0bool\0animated\0"
    "documentMode\0QTabWidget::TabShape\0"
    "tabShape\0dockNestingEnabled\0DockOptions\0"
    "dockOptions\0unifiedTitleAndToolBarOnMac\0"
    "DockOption\0AnimatedDocks\0AllowNestedDocks\0"
    "AllowTabbedDocks\0ForceTabbedDocks\0"
    "VerticalTabs\0"
};

void QMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMainWindow *_t = static_cast<QMainWindow *>(_o);
        switch (_id) {
        case 0: _t->iconSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 1: _t->toolButtonStyleChanged((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 2: _t->setAnimated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setDockNestingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

#ifdef Q_NO_DATA_RELOCATION
static const QMetaObjectAccessor qt_meta_extradata_QMainWindow[] = {
        QTabWidget::getStaticMetaObject,
#else
static const QMetaObject *qt_meta_extradata_QMainWindow[] = {
        &QTabWidget::staticMetaObject,
#endif //Q_NO_DATA_RELOCATION
    0
};

const QMetaObjectExtraData QMainWindow::staticMetaObjectExtraData = {
    qt_meta_extradata_QMainWindow,  qt_static_metacall 
};

const QMetaObject QMainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMainWindow,
      qt_meta_data_QMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMainWindow))
        return static_cast<void*>(const_cast< QMainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QSize*>(_v) = iconSize(); break;
        case 1: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = toolButtonStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isAnimated(); break;
        case 3: *reinterpret_cast< bool*>(_v) = documentMode(); break;
        case 4: *reinterpret_cast< QTabWidget::TabShape*>(_v) = tabShape(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isDockNestingEnabled(); break;
        case 6: *reinterpret_cast<int*>(_v) = QFlag(dockOptions()); break;
        case 7: *reinterpret_cast< bool*>(_v) = unifiedTitleAndToolBarOnMac(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 1: setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 2: setAnimated(*reinterpret_cast< bool*>(_v)); break;
        case 3: setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        case 4: setTabShape(*reinterpret_cast< QTabWidget::TabShape*>(_v)); break;
        case 5: setDockNestingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: setDockOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 7: setUnifiedTitleAndToolBarOnMac(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMainWindow::iconSizeChanged(const QSize & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMainWindow::toolButtonStyleChanged(Qt::ToolButtonStyle _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
