/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
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
struct qt_meta_tag_ZN12CustomObjectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN12CustomObjectE = QtMocHelpers::stringData(
    "CustomObject",
    "customSignal",
    "",
    "customEnough",
    "customNotEnough",
    "dispenseCoffee",
    "dispenseCappuchino",
    "dispenseEspresso"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN12CustomObjectE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    0,   52,    2, 0x06,    3 /* Public */,
       5,    0,   53,    2, 0x06,    4 /* Public */,
       6,    0,   54,    2, 0x06,    5 /* Public */,
       7,    0,   55,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CustomObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN12CustomObjectE.offsetsAndSizes,
    qt_meta_data_ZN12CustomObjectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN12CustomObjectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CustomObject, std::true_type>,
        // method 'customSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customEnough'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customNotEnough'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dispenseCoffee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dispenseCappuchino'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dispenseEspresso'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CustomObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CustomObject *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->customSignal(); break;
        case 1: _t->customEnough(); break;
        case 2: _t->customNotEnough(); break;
        case 3: _t->dispenseCoffee(); break;
        case 4: _t->dispenseCappuchino(); break;
        case 5: _t->dispenseEspresso(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::customSignal; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::customEnough; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::customNotEnough; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::dispenseCoffee; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::dispenseCappuchino; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::dispenseEspresso; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *CustomObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN12CustomObjectE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CustomObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CustomObject::customSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CustomObject::customEnough()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CustomObject::customNotEnough()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CustomObject::dispenseCoffee()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CustomObject::dispenseCappuchino()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CustomObject::dispenseEspresso()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "sinit_entered",
    "",
    "S_OptionCappuchino_onEntry",
    "S_OptionEspresso_onEntry",
    "S_OptionCoffee_onEntry",
    "S_waitForOption_onEntry",
    "S_waitingForCoins",
    "S_5C_inserted",
    "S_10C_inserted",
    "S_20C_inserted",
    "S_50C_inserted",
    "S_100C_inserted",
    "ProcessMoney",
    "money",
    "S_ProcessingCoffee",
    "S_dispensedCappuchino",
    "S_dispensedEspresso",
    "S_dispensedCoffee"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    0,  116,    2, 0x08,    7 /* Private */,
       9,    0,  117,    2, 0x08,    8 /* Private */,
      10,    0,  118,    2, 0x08,    9 /* Private */,
      11,    0,  119,    2, 0x08,   10 /* Private */,
      12,    0,  120,    2, 0x08,   11 /* Private */,
      13,    1,  121,    2, 0x08,   12 /* Private */,
      15,    0,  124,    2, 0x08,   14 /* Private */,
      16,    0,  125,    2, 0x08,   15 /* Private */,
      17,    0,  126,    2, 0x08,   16 /* Private */,
      18,    0,  127,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'sinit_entered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_OptionCappuchino_onEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_OptionEspresso_onEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_OptionCoffee_onEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_waitForOption_onEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_waitingForCoins'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_5C_inserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_10C_inserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_20C_inserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_50C_inserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_100C_inserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ProcessMoney'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'S_ProcessingCoffee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_dispensedCappuchino'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_dispensedEspresso'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_dispensedCoffee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sinit_entered(); break;
        case 1: _t->S_OptionCappuchino_onEntry(); break;
        case 2: _t->S_OptionEspresso_onEntry(); break;
        case 3: _t->S_OptionCoffee_onEntry(); break;
        case 4: _t->S_waitForOption_onEntry(); break;
        case 5: _t->S_waitingForCoins(); break;
        case 6: _t->S_5C_inserted(); break;
        case 7: _t->S_10C_inserted(); break;
        case 8: _t->S_20C_inserted(); break;
        case 9: _t->S_50C_inserted(); break;
        case 10: _t->S_100C_inserted(); break;
        case 11: _t->ProcessMoney((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->S_ProcessingCoffee(); break;
        case 13: _t->S_dispensedCappuchino(); break;
        case 14: _t->S_dispensedEspresso(); break;
        case 15: _t->S_dispensedCoffee(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
