/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../calculator.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCalculatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCalculatorENDCLASS = QtMocHelpers::stringData(
    "Calculator",
    "QML.Element",
    "auto",
    "resultTextChanged",
    "",
    "resultText",
    "processTextChanged",
    "processText",
    "inputNumber",
    "number",
    "inputOperator",
    "op",
    "calculate",
    "clear",
    "clearEntry",
    "toggleSign",
    "backspace",
    "percent",
    "square",
    "squareRoot",
    "reciprocal"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCalculatorENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[18];
    char stringdata4[1];
    char stringdata5[11];
    char stringdata6[19];
    char stringdata7[12];
    char stringdata8[12];
    char stringdata9[7];
    char stringdata10[14];
    char stringdata11[3];
    char stringdata12[10];
    char stringdata13[6];
    char stringdata14[11];
    char stringdata15[11];
    char stringdata16[10];
    char stringdata17[8];
    char stringdata18[7];
    char stringdata19[11];
    char stringdata20[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCalculatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCalculatorENDCLASS_t qt_meta_stringdata_CLASSCalculatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "Calculator"
        QT_MOC_LITERAL(11, 11),  // "QML.Element"
        QT_MOC_LITERAL(23, 4),  // "auto"
        QT_MOC_LITERAL(28, 17),  // "resultTextChanged"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 10),  // "resultText"
        QT_MOC_LITERAL(58, 18),  // "processTextChanged"
        QT_MOC_LITERAL(77, 11),  // "processText"
        QT_MOC_LITERAL(89, 11),  // "inputNumber"
        QT_MOC_LITERAL(101, 6),  // "number"
        QT_MOC_LITERAL(108, 13),  // "inputOperator"
        QT_MOC_LITERAL(122, 2),  // "op"
        QT_MOC_LITERAL(125, 9),  // "calculate"
        QT_MOC_LITERAL(135, 5),  // "clear"
        QT_MOC_LITERAL(141, 10),  // "clearEntry"
        QT_MOC_LITERAL(152, 10),  // "toggleSign"
        QT_MOC_LITERAL(163, 9),  // "backspace"
        QT_MOC_LITERAL(173, 7),  // "percent"
        QT_MOC_LITERAL(181, 6),  // "square"
        QT_MOC_LITERAL(188, 10),  // "squareRoot"
        QT_MOC_LITERAL(199, 10)   // "reciprocal"
    },
    "Calculator",
    "QML.Element",
    "auto",
    "resultTextChanged",
    "",
    "resultText",
    "processTextChanged",
    "processText",
    "inputNumber",
    "number",
    "inputOperator",
    "op",
    "calculate",
    "clear",
    "clearEntry",
    "toggleSign",
    "backspace",
    "percent",
    "square",
    "squareRoot",
    "reciprocal"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCalculatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
       2,  115, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   94,    4, 0x06,    3 /* Public */,
       6,    1,   97,    4, 0x06,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,  100,    4, 0x02,    7 /* Public */,
      10,    1,  103,    4, 0x02,    9 /* Public */,
      12,    0,  106,    4, 0x02,   11 /* Public */,
      13,    0,  107,    4, 0x02,   12 /* Public */,
      14,    0,  108,    4, 0x02,   13 /* Public */,
      15,    0,  109,    4, 0x02,   14 /* Public */,
      16,    0,  110,    4, 0x02,   15 /* Public */,
      17,    0,  111,    4, 0x02,   16 /* Public */,
      18,    0,  112,    4, 0x02,   17 /* Public */,
      19,    0,  113,    4, 0x02,   18 /* Public */,
      20,    0,  114,    4, 0x02,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015103, uint(1), 0,
       5, QMetaType::QString, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Calculator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSCalculatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCalculatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'processText'
        QString,
        // property 'resultText'
        QString,
        // Q_OBJECT / Q_GADGET
        Calculator,
        // method 'resultTextChanged'
        void,
        const QString &,
        // method 'processTextChanged'
        void,
        const QString &,
        // method 'inputNumber'
        void,
        const QString &,
        // method 'inputOperator'
        void,
        const QString &,
        // method 'calculate'
        void,
        // method 'clear'
        void,
        // method 'clearEntry'
        void,
        // method 'toggleSign'
        void,
        // method 'backspace'
        void,
        // method 'percent'
        void,
        // method 'square'
        void,
        // method 'squareRoot'
        void,
        // method 'reciprocal'
        void
    >,
    nullptr
} };

void Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calculator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resultTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->processTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->inputNumber((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->inputOperator((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->calculate(); break;
        case 5: _t->clear(); break;
        case 6: _t->clearEntry(); break;
        case 7: _t->toggleSign(); break;
        case 8: _t->backspace(); break;
        case 9: _t->percent(); break;
        case 10: _t->square(); break;
        case 11: _t->squareRoot(); break;
        case 12: _t->reciprocal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Calculator::*)(const QString & );
            if (_t _q_method = &Calculator::resultTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Calculator::*)(const QString & );
            if (_t _q_method = &Calculator::processTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Calculator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->processText(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->resultText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Calculator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProcessText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setResultText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCalculatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Calculator::resultTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Calculator::processTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
