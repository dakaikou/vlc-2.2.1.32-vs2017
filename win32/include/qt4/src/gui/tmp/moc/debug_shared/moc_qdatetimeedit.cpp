/****************************************************************************
** Meta object code from reading C++ file 'qdatetimeedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qdatetimeedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdatetimeedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDateTimeEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      16,   49, // properties
       2,  113, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      47,   15,   14,   14, 0x05,
      66,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   85,   14,   14, 0x0a,
     117,   15,   14,   14, 0x0a,
     137,  132,   14,   14, 0x0a,
     152,   14,   14,   14, 0x08,

 // properties: name, type, flags
      85,  169, 0x10595103,
      15,  179, 0x0e495103,
     132,  185, 0x0f495103,
     191,  169, 0x10095107,
     207,  169, 0x10095107,
     223,  179, 0x0e095107,
     235,  179, 0x0e095107,
     247,  185, 0x0f095107,
     259,  185, 0x0f095107,
     279,  271, 0x0009510b,
     303,  294, 0x00095009,
     329,  321, 0x0a095103,
     348,  343, 0x01095103,
     366,  362, 0x02095103,
     386,  362, 0x02095001,
     412,  399, 0x0009510b,

 // properties: notify_signal_id
       0,
       2,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     271, 0x0,   11,  121,
     294, 0x1,   11,  143,

 // enum data: key, value
     421, uint(QDateTimeEdit::NoSection),
     431, uint(QDateTimeEdit::AmPmSection),
     443, uint(QDateTimeEdit::MSecSection),
     455, uint(QDateTimeEdit::SecondSection),
     469, uint(QDateTimeEdit::MinuteSection),
     483, uint(QDateTimeEdit::HourSection),
     495, uint(QDateTimeEdit::DaySection),
     506, uint(QDateTimeEdit::MonthSection),
     519, uint(QDateTimeEdit::YearSection),
     531, uint(QDateTimeEdit::TimeSections_Mask),
     549, uint(QDateTimeEdit::DateSections_Mask),
     421, uint(QDateTimeEdit::NoSection),
     431, uint(QDateTimeEdit::AmPmSection),
     443, uint(QDateTimeEdit::MSecSection),
     455, uint(QDateTimeEdit::SecondSection),
     469, uint(QDateTimeEdit::MinuteSection),
     483, uint(QDateTimeEdit::HourSection),
     495, uint(QDateTimeEdit::DaySection),
     506, uint(QDateTimeEdit::MonthSection),
     519, uint(QDateTimeEdit::YearSection),
     531, uint(QDateTimeEdit::TimeSections_Mask),
     549, uint(QDateTimeEdit::DateSections_Mask),

       0        // eod
};

static const char qt_meta_stringdata_QDateTimeEdit[] = {
    "QDateTimeEdit\0\0date\0dateTimeChanged(QDateTime)\0"
    "timeChanged(QTime)\0dateChanged(QDate)\0"
    "dateTime\0setDateTime(QDateTime)\0"
    "setDate(QDate)\0time\0setTime(QTime)\0"
    "_q_resetButton()\0QDateTime\0QDate\0QTime\0"
    "maximumDateTime\0minimumDateTime\0"
    "maximumDate\0minimumDate\0maximumTime\0"
    "minimumTime\0Section\0currentSection\0"
    "Sections\0displayedSections\0QString\0"
    "displayFormat\0bool\0calendarPopup\0int\0"
    "currentSectionIndex\0sectionCount\0"
    "Qt::TimeSpec\0timeSpec\0NoSection\0"
    "AmPmSection\0MSecSection\0SecondSection\0"
    "MinuteSection\0HourSection\0DaySection\0"
    "MonthSection\0YearSection\0TimeSections_Mask\0"
    "DateSections_Mask\0"
};

void QDateTimeEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDateTimeEdit *_t = static_cast<QDateTimeEdit *>(_o);
        switch (_id) {
        case 0: _t->dateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 1: _t->timeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 2: _t->dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->setDateTime((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 4: _t->setDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 5: _t->setTime((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_resetButton(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDateTimeEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDateTimeEdit::staticMetaObject = {
    { &QAbstractSpinBox::staticMetaObject, qt_meta_stringdata_QDateTimeEdit,
      qt_meta_data_QDateTimeEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDateTimeEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDateTimeEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDateTimeEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDateTimeEdit))
        return static_cast<void*>(const_cast< QDateTimeEdit*>(this));
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QDateTimeEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QDateTime*>(_v) = dateTime(); break;
        case 1: *reinterpret_cast< QDate*>(_v) = date(); break;
        case 2: *reinterpret_cast< QTime*>(_v) = time(); break;
        case 3: *reinterpret_cast< QDateTime*>(_v) = maximumDateTime(); break;
        case 4: *reinterpret_cast< QDateTime*>(_v) = minimumDateTime(); break;
        case 5: *reinterpret_cast< QDate*>(_v) = maximumDate(); break;
        case 6: *reinterpret_cast< QDate*>(_v) = minimumDate(); break;
        case 7: *reinterpret_cast< QTime*>(_v) = maximumTime(); break;
        case 8: *reinterpret_cast< QTime*>(_v) = minimumTime(); break;
        case 9: *reinterpret_cast< Section*>(_v) = currentSection(); break;
        case 10: *reinterpret_cast<int*>(_v) = QFlag(displayedSections()); break;
        case 11: *reinterpret_cast< QString*>(_v) = displayFormat(); break;
        case 12: *reinterpret_cast< bool*>(_v) = calendarPopup(); break;
        case 13: *reinterpret_cast< int*>(_v) = currentSectionIndex(); break;
        case 14: *reinterpret_cast< int*>(_v) = sectionCount(); break;
        case 15: *reinterpret_cast< Qt::TimeSpec*>(_v) = timeSpec(); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 1: setDate(*reinterpret_cast< QDate*>(_v)); break;
        case 2: setTime(*reinterpret_cast< QTime*>(_v)); break;
        case 3: setMaximumDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 4: setMinimumDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 5: setMaximumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 6: setMinimumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 7: setMaximumTime(*reinterpret_cast< QTime*>(_v)); break;
        case 8: setMinimumTime(*reinterpret_cast< QTime*>(_v)); break;
        case 9: setCurrentSection(*reinterpret_cast< Section*>(_v)); break;
        case 11: setDisplayFormat(*reinterpret_cast< QString*>(_v)); break;
        case 12: setCalendarPopup(*reinterpret_cast< bool*>(_v)); break;
        case 13: setCurrentSectionIndex(*reinterpret_cast< int*>(_v)); break;
        case 15: setTimeSpec(*reinterpret_cast< Qt::TimeSpec*>(_v)); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 3: clearMaximumDateTime(); break;
        case 4: clearMinimumDateTime(); break;
        case 5: clearMaximumDate(); break;
        case 6: clearMinimumDate(); break;
        case 7: clearMaximumTime(); break;
        case 8: clearMinimumTime(); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDateTimeEdit::dateTimeChanged(const QDateTime & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDateTimeEdit::timeChanged(const QTime & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDateTimeEdit::dateChanged(const QDate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_QTimeEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QTimeEdit[] = {
    "QTimeEdit\0"
};

void QTimeEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QTimeEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTimeEdit::staticMetaObject = {
    { &QDateTimeEdit::staticMetaObject, qt_meta_stringdata_QTimeEdit,
      qt_meta_data_QTimeEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTimeEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTimeEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTimeEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTimeEdit))
        return static_cast<void*>(const_cast< QTimeEdit*>(this));
    return QDateTimeEdit::qt_metacast(_clname);
}

int QTimeEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDateTimeEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QDateEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QDateEdit[] = {
    "QDateEdit\0"
};

void QDateEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDateEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDateEdit::staticMetaObject = {
    { &QDateTimeEdit::staticMetaObject, qt_meta_stringdata_QDateEdit,
      qt_meta_data_QDateEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDateEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDateEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDateEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDateEdit))
        return static_cast<void*>(const_cast< QDateEdit*>(this));
    return QDateTimeEdit::qt_metacast(_clname);
}

int QDateEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDateTimeEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
