/****************************************************************************
** Meta object code from reading C++ file 'qtoolbutton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qtoolbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtoolbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QToolButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   69, // properties
       1,   81, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   12,   12,   12, 0x0a,
      50,   44,   12,   12, 0x0a,
      90,   12,   12,   12, 0x0a,
     117,   12,   12,   12, 0x08,
     136,   12,   12,   12, 0x08,
     158,   12,   12,   12, 0x08,
     185,   12,   12,   12, 0x08,
     213,  206,   12,   12, 0x1a,
     236,  206,   12,   12, 0x1a,
     263,  259,   12,   12, 0x1a,

 // properties: name, type, flags
     326,  306, 0x0009510b,
     356,  336, 0x0009510b,
     377,  372, 0x01095103,
     401,  387, 0x0009510b,

 // enums: name, flags, count, data
     306, 0x0,    3,   85,

 // enum data: key, value
     411, uint(QToolButton::DelayedPopup),
     424, uint(QToolButton::MenuButtonPopup),
     440, uint(QToolButton::InstantPopup),

       0        // eod
};

static const char qt_meta_stringdata_QToolButton[] = {
    "QToolButton\0\0triggered(QAction*)\0"
    "showMenu()\0style\0"
    "setToolButtonStyle(Qt::ToolButtonStyle)\0"
    "setDefaultAction(QAction*)\0"
    "_q_buttonPressed()\0_q_updateButtonDown()\0"
    "_q_menuTriggered(QAction*)\0"
    "_q_actionTriggered()\0enable\0"
    "setUsesBigPixmap(bool)\0setUsesTextLabel(bool)\0"
    "pos\0setTextPosition(QToolButton::TextPosition)\0"
    "ToolButtonPopupMode\0popupMode\0"
    "Qt::ToolButtonStyle\0toolButtonStyle\0"
    "bool\0autoRaise\0Qt::ArrowType\0arrowType\0"
    "DelayedPopup\0MenuButtonPopup\0InstantPopup\0"
};

void QToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QToolButton *_t = static_cast<QToolButton *>(_o);
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->showMenu(); break;
        case 2: _t->setToolButtonStyle((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 3: _t->setDefaultAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_buttonPressed(); break;
        case 5: _t->d_func()->_q_updateButtonDown(); break;
        case 6: _t->d_func()->_q_menuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->d_func()->_q_actionTriggered(); break;
        case 8: _t->setUsesBigPixmap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setUsesTextLabel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setTextPosition((*reinterpret_cast< QToolButton::TextPosition(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QToolButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QToolButton::staticMetaObject = {
    { &QAbstractButton::staticMetaObject, qt_meta_stringdata_QToolButton,
      qt_meta_data_QToolButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QToolButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QToolButton))
        return static_cast<void*>(const_cast< QToolButton*>(this));
    return QAbstractButton::qt_metacast(_clname);
}

int QToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ToolButtonPopupMode*>(_v) = popupMode(); break;
        case 1: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = toolButtonStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = autoRaise(); break;
        case 3: *reinterpret_cast< Qt::ArrowType*>(_v) = arrowType(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPopupMode(*reinterpret_cast< ToolButtonPopupMode*>(_v)); break;
        case 1: setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 2: setAutoRaise(*reinterpret_cast< bool*>(_v)); break;
        case 3: setArrowType(*reinterpret_cast< Qt::ArrowType*>(_v)); break;
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
void QToolButton::triggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
