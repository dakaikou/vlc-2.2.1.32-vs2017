/****************************************************************************
** Meta object code from reading C++ file 'qworkspace.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qworkspace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qworkspace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QWorkspace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       2,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   12,   11,   11, 0x0a,
      66,   11,   11,   11, 0x0a,
      76,   11,   11,   11, 0x0a,
      83,   11,   11,   11, 0x0a,
      98,   11,   11,   11, 0x0a,
     118,   11,   11,   11, 0x0a,
     136,   11,   11,   11, 0x0a,
     157,   11,   11,   11, 0x0a,
     182,   11,   11,   11, 0x08,
     209,   11,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,
     258,   11,   11,   11, 0x08,
     288,   11,   11,   11, 0x08,
     324,   11,   11,   11, 0x08,
     343,   11,   11,   11, 0x08,

 // properties: name, type, flags
     370,  365, 0x01095103,
     395,  388, 0x42095103,

       0        // eod
};

static const char qt_meta_stringdata_QWorkspace[] = {
    "QWorkspace\0\0w\0windowActivated(QWidget*)\0"
    "setActiveWindow(QWidget*)\0cascade()\0"
    "tile()\0arrangeIcons()\0closeActiveWindow()\0"
    "closeAllWindows()\0activateNextWindow()\0"
    "activatePreviousWindow()\0"
    "_q_normalizeActiveWindow()\0"
    "_q_minimizeActiveWindow()\0"
    "_q_showOperationMenu()\0"
    "_q_popupOperationMenu(QPoint)\0"
    "_q_operationMenuActivated(QAction*)\0"
    "_q_updateActions()\0_q_scrollBarChanged()\0"
    "bool\0scrollBarsEnabled\0QBrush\0background\0"
};

void QWorkspace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWorkspace *_t = static_cast<QWorkspace *>(_o);
        switch (_id) {
        case 0: _t->windowActivated((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->setActiveWindow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->cascade(); break;
        case 3: _t->tile(); break;
        case 4: _t->arrangeIcons(); break;
        case 5: _t->closeActiveWindow(); break;
        case 6: _t->closeAllWindows(); break;
        case 7: _t->activateNextWindow(); break;
        case 8: _t->activatePreviousWindow(); break;
        case 9: _t->d_func()->_q_normalizeActiveWindow(); break;
        case 10: _t->d_func()->_q_minimizeActiveWindow(); break;
        case 11: _t->d_func()->_q_showOperationMenu(); break;
        case 12: _t->d_func()->_q_popupOperationMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_operationMenuActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 14: _t->d_func()->_q_updateActions(); break;
        case 15: _t->d_func()->_q_scrollBarChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QWorkspace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWorkspace::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QWorkspace,
      qt_meta_data_QWorkspace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWorkspace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWorkspace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWorkspace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWorkspace))
        return static_cast<void*>(const_cast< QWorkspace*>(this));
    return QWidget::qt_metacast(_clname);
}

int QWorkspace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = scrollBarsEnabled(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = background(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setScrollBarsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setBackground(*reinterpret_cast< QBrush*>(_v)); break;
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
void QWorkspace::windowActivated(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
