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
    "dispenseEspresso",
    "dispense5c",
    "dispense10c",
    "dispense20c",
    "dispense50c",
    "dispense100c",
    "NoChange",
    "changeOver",
    "NoCoffeeType"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN12CustomObjectE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,
       3,    0,   99,    2, 0x06,    2 /* Public */,
       4,    0,  100,    2, 0x06,    3 /* Public */,
       5,    0,  101,    2, 0x06,    4 /* Public */,
       6,    0,  102,    2, 0x06,    5 /* Public */,
       7,    0,  103,    2, 0x06,    6 /* Public */,
       8,    0,  104,    2, 0x06,    7 /* Public */,
       9,    0,  105,    2, 0x06,    8 /* Public */,
      10,    0,  106,    2, 0x06,    9 /* Public */,
      11,    0,  107,    2, 0x06,   10 /* Public */,
      12,    0,  108,    2, 0x06,   11 /* Public */,
      13,    0,  109,    2, 0x06,   12 /* Public */,
      14,    0,  110,    2, 0x06,   13 /* Public */,
      15,    0,  111,    2, 0x06,   14 /* Public */,

 // signals: parameters
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dispense5c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dispense10c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dispense20c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dispense50c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dispense100c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NoChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeOver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NoCoffeeType'
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
        case 6: _t->dispense5c(); break;
        case 7: _t->dispense10c(); break;
        case 8: _t->dispense20c(); break;
        case 9: _t->dispense50c(); break;
        case 10: _t->dispense100c(); break;
        case 11: _t->NoChange(); break;
        case 12: _t->changeOver(); break;
        case 13: _t->NoCoffeeType(); break;
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
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::dispense5c; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::dispense10c; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::dispense20c; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::dispense50c; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::dispense100c; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::NoChange; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::changeOver; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (CustomObject::*)();
            if (_q_method_type _q_method = &CustomObject::NoCoffeeType; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
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

// SIGNAL 6
void CustomObject::dispense5c()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CustomObject::dispense10c()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void CustomObject::dispense20c()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void CustomObject::dispense50c()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void CustomObject::dispense100c()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void CustomObject::NoChange()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void CustomObject::changeOver()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void CustomObject::NoCoffeeType()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
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
    "S_dispensedCoffee",
    "s_dispensingChange",
    "S_dispensing100c",
    "S_dispensing50c",
    "S_dispensing20c",
    "S_dispensing10c",
    "S_dispensing5c",
    "S_waitForChangePickup",
    "updateChangeUI",
    "onShutdown",
    "updateCoffeeTypeUI"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x08,    1 /* Private */,
       3,    0,  171,    2, 0x08,    2 /* Private */,
       4,    0,  172,    2, 0x08,    3 /* Private */,
       5,    0,  173,    2, 0x08,    4 /* Private */,
       6,    0,  174,    2, 0x08,    5 /* Private */,
       7,    0,  175,    2, 0x08,    6 /* Private */,
       8,    0,  176,    2, 0x08,    7 /* Private */,
       9,    0,  177,    2, 0x08,    8 /* Private */,
      10,    0,  178,    2, 0x08,    9 /* Private */,
      11,    0,  179,    2, 0x08,   10 /* Private */,
      12,    0,  180,    2, 0x08,   11 /* Private */,
      13,    1,  181,    2, 0x08,   12 /* Private */,
      15,    0,  184,    2, 0x08,   14 /* Private */,
      16,    0,  185,    2, 0x08,   15 /* Private */,
      17,    0,  186,    2, 0x08,   16 /* Private */,
      18,    0,  187,    2, 0x08,   17 /* Private */,
      19,    0,  188,    2, 0x08,   18 /* Private */,
      20,    0,  189,    2, 0x08,   19 /* Private */,
      21,    0,  190,    2, 0x08,   20 /* Private */,
      22,    0,  191,    2, 0x08,   21 /* Private */,
      23,    0,  192,    2, 0x08,   22 /* Private */,
      24,    0,  193,    2, 0x08,   23 /* Private */,
      25,    0,  194,    2, 0x08,   24 /* Private */,
      26,    0,  195,    2, 0x08,   25 /* Private */,
      27,    0,  196,    2, 0x08,   26 /* Private */,
      28,    0,  197,    2, 0x08,   27 /* Private */,

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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 's_dispensingChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_dispensing100c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_dispensing50c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_dispensing20c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_dispensing10c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_dispensing5c'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'S_waitForChangePickup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateChangeUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCoffeeTypeUI'
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
        case 16: _t->s_dispensingChange(); break;
        case 17: _t->S_dispensing100c(); break;
        case 18: _t->S_dispensing50c(); break;
        case 19: _t->S_dispensing20c(); break;
        case 20: _t->S_dispensing10c(); break;
        case 21: _t->S_dispensing5c(); break;
        case 22: _t->S_waitForChangePickup(); break;
        case 23: _t->updateChangeUI(); break;
        case 24: _t->onShutdown(); break;
        case 25: _t->updateCoffeeTypeUI(); break;
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
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
