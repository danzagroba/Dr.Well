/****************************************************************************
** Meta object code from reading C++ file 'telainicialsecretario.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../telainicialsecretario.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telainicialsecretario.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
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
struct qt_meta_tag_ZN21TelaInicialSecretarioE_t {};
} // unnamed namespace

template <> constexpr inline auto TelaInicialSecretario::qt_create_metaobjectdata<qt_meta_tag_ZN21TelaInicialSecretarioE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TelaInicialSecretario",
        "sairRequisitado",
        "",
        "pacientesRequisitado",
        "consultasRequisitado",
        "on_pushButtonSair_clicked",
        "on_pushButtonConsultas_clicked",
        "on_pushButtonPacientes_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sairRequisitado'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pacientesRequisitado'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'consultasRequisitado'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_pushButtonSair_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonConsultas_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonPacientes_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TelaInicialSecretario, qt_meta_tag_ZN21TelaInicialSecretarioE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TelaInicialSecretario::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21TelaInicialSecretarioE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21TelaInicialSecretarioE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21TelaInicialSecretarioE_t>.metaTypes,
    nullptr
} };

void TelaInicialSecretario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TelaInicialSecretario *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sairRequisitado(); break;
        case 1: _t->pacientesRequisitado(); break;
        case 2: _t->consultasRequisitado(); break;
        case 3: _t->on_pushButtonSair_clicked(); break;
        case 4: _t->on_pushButtonConsultas_clicked(); break;
        case 5: _t->on_pushButtonPacientes_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TelaInicialSecretario::*)()>(_a, &TelaInicialSecretario::sairRequisitado, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TelaInicialSecretario::*)()>(_a, &TelaInicialSecretario::pacientesRequisitado, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TelaInicialSecretario::*)()>(_a, &TelaInicialSecretario::consultasRequisitado, 2))
            return;
    }
}

const QMetaObject *TelaInicialSecretario::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaInicialSecretario::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21TelaInicialSecretarioE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TelaInicialSecretario::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void TelaInicialSecretario::sairRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TelaInicialSecretario::pacientesRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TelaInicialSecretario::consultasRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
