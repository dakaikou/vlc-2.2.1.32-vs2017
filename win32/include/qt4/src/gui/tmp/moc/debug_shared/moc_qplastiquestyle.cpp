/****************************************************************************
** Meta object code from reading C++ file 'qplastiquestyle.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../styles/qplastiquestyle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplastiquestyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPlastiqueStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   23,   17,   16, 0x09,
     142,  125,   17,   16, 0x29,
     218,  205,   17,   16, 0x29,
     309,  265,  261,   16, 0x09,
     476,  439,  261,   16, 0x29,
     621,  591,  261,   16, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_QPlastiqueStyle[] = {
    "QPlastiqueStyle\0\0QIcon\0standardIcon,opt,widget\0"
    "standardIconImplementation(StandardPixmap,const QStyleOption*,const QW"
    "idget*)\0"
    "standardIcon,opt\0"
    "standardIconImplementation(StandardPixmap,const QStyleOption*)\0"
    "standardIcon\0standardIconImplementation(StandardPixmap)\0"
    "int\0control1,control2,orientation,option,widget\0"
    "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::Cont"
    "rolType,Qt::Orientation,const QStyleOption*,const QWidget*)\0"
    "control1,control2,orientation,option\0"
    "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::Cont"
    "rolType,Qt::Orientation,const QStyleOption*)\0"
    "control1,control2,orientation\0"
    "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::Cont"
    "rolType,Qt::Orientation)\0"
};

void QPlastiqueStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPlastiqueStyle *_t = static_cast<QPlastiqueStyle *>(_o);
        switch (_id) {
        case 0: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])),(*reinterpret_cast< const QStyleOption*(*)>(_a[2])),(*reinterpret_cast< const QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 1: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])),(*reinterpret_cast< const QStyleOption*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 2: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->layoutSpacingImplementation((*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QStyleOption*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->layoutSpacingImplementation((*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QStyleOption*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->layoutSpacingImplementation((*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPlastiqueStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPlastiqueStyle::staticMetaObject = {
    { &QWindowsStyle::staticMetaObject, qt_meta_stringdata_QPlastiqueStyle,
      qt_meta_data_QPlastiqueStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPlastiqueStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPlastiqueStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPlastiqueStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlastiqueStyle))
        return static_cast<void*>(const_cast< QPlastiqueStyle*>(this));
    return QWindowsStyle::qt_metacast(_clname);
}

int QPlastiqueStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindowsStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
