/****************************************************************************
** Meta object code from reading C++ file 'qlabel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qlabel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      12,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    8,    7,    7, 0x05,
      36,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,    7,    7,    7, 0x0a,
      74,    7,    7,    7, 0x0a,
      93,    7,    7,    7, 0x0a,
     120,  114,    7,    7, 0x0a,
     138,    7,    7,    7, 0x0a,
     150,    7,    7,    7, 0x0a,
     165,    7,    7,    7, 0x0a,
     173,    7,    7,    7, 0x08,
     196,    7,    7,    7, 0x08,
     219,    7,    7,    7, 0x08,

 // properties: name, type, flags
     251,  243, 0x0a095103,
     271,  256, 0x0009510b,
     290,  282, 0x41095103,
     302,  297, 0x01095103,
     331,  317, 0x0009510b,
     341,  297, 0x01095103,
     354,  350, 0x02095103,
     361,  350, 0x02095103,
     368,  297, 0x01095103,
     411,  386, 0x0009510b,
     432,  297, 0x01095001,
     448,  243, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_QLabel[] = {
    "QLabel\0\0link\0linkActivated(QString)\0"
    "linkHovered(QString)\0setText(QString)\0"
    "setPixmap(QPixmap)\0setPicture(QPicture)\0"
    "movie\0setMovie(QMovie*)\0setNum(int)\0"
    "setNum(double)\0clear()\0_q_movieUpdated(QRect)\0"
    "_q_movieResized(QSize)\0_q_linkHovered(QString)\0"
    "QString\0text\0Qt::TextFormat\0textFormat\0"
    "QPixmap\0pixmap\0bool\0scaledContents\0"
    "Qt::Alignment\0alignment\0wordWrap\0int\0"
    "margin\0indent\0openExternalLinks\0"
    "Qt::TextInteractionFlags\0textInteractionFlags\0"
    "hasSelectedText\0selectedText\0"
};

void QLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QLabel *_t = static_cast<QLabel *>(_o);
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->linkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 4: _t->setPicture((*reinterpret_cast< const QPicture(*)>(_a[1]))); break;
        case 5: _t->setMovie((*reinterpret_cast< QMovie*(*)>(_a[1]))); break;
        case 6: _t->setNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setNum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->clear(); break;
        case 9: _t->d_func()->_q_movieUpdated((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 10: _t->d_func()->_q_movieResized((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 11: _t->d_func()->_q_linkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLabel::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QLabel,
      qt_meta_data_QLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLabel))
        return static_cast<void*>(const_cast< QLabel*>(this));
    return QFrame::qt_metacast(_clname);
}

int QLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = text(); break;
        case 1: *reinterpret_cast< Qt::TextFormat*>(_v) = textFormat(); break;
        case 2: _a[0] = const_cast<void*>(reinterpret_cast<const void*>(pixmap())); break;
        case 3: *reinterpret_cast< bool*>(_v) = hasScaledContents(); break;
        case 4: *reinterpret_cast< Qt::Alignment*>(_v) = alignment(); break;
        case 5: *reinterpret_cast< bool*>(_v) = wordWrap(); break;
        case 6: *reinterpret_cast< int*>(_v) = margin(); break;
        case 7: *reinterpret_cast< int*>(_v) = indent(); break;
        case 8: *reinterpret_cast< bool*>(_v) = openExternalLinks(); break;
        case 9: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = textInteractionFlags(); break;
        case 10: *reinterpret_cast< bool*>(_v) = hasSelectedText(); break;
        case 11: *reinterpret_cast< QString*>(_v) = selectedText(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setTextFormat(*reinterpret_cast< Qt::TextFormat*>(_v)); break;
        case 2: setPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 3: setScaledContents(*reinterpret_cast< bool*>(_v)); break;
        case 4: setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 5: setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 6: setMargin(*reinterpret_cast< int*>(_v)); break;
        case 7: setIndent(*reinterpret_cast< int*>(_v)); break;
        case 8: setOpenExternalLinks(*reinterpret_cast< bool*>(_v)); break;
        case 9: setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QLabel::linkActivated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLabel::linkHovered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
