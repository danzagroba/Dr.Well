/****************************************************************************
** Meta object code from reading C++ file 'telainicialmedico.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../telainicialmedico.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telainicialmedico.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17TelaInicialMedicoE_t {};
} // unnamed namespace

template <> constexpr inline auto TelaInicialMedico::qt_create_metaobjectdata<qt_meta_tag_ZN17TelaInicialMedicoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TelaInicialMedico",
        "agendaRequisitada",
        "",
        "prontuarioRequisitado",
        "historicoRequisitado",
        "sairRequisitado",
        "on_pushButtonAgenda_clicked",
        "on_pushButtonProntuario_clicked",
        "on_pushButtonHistorico_clicked",
        "on_pushButtonSair_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'agendaRequisitada'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'prontuarioRequisitado'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'historicoRequisitado'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sairRequisitado'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_pushButtonAgenda_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonProntuario_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonHistorico_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSair_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TelaInicialMedico, qt_meta_tag_ZN17TelaInicialMedicoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TelaInicialMedico::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17TelaInicialMedicoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17TelaInicialMedicoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17TelaInicialMedicoE_t>.metaTypes,
    nullptr
} };

void TelaInicialMedico::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TelaInicialMedico *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->agendaRequisitada(); break;
        case 1: _t->prontuarioRequisitado(); break;
        case 2: _t->historicoRequisitado(); break;
        case 3: _t->sairRequisitado(); break;
        case 4: _t->on_pushButtonAgenda_clicked(); break;
        case 5: _t->on_pushButtonProntuario_clicked(); break;
        case 6: _t->on_pushButtonHistorico_clicked(); break;
        case 7: _t->on_pushButtonSair_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TelaInicialMedico::*)()>(_a, &TelaInicialMedico::agendaRequisitada, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TelaInicialMedico::*)()>(_a, &TelaInicialMedico::prontuarioRequisitado, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TelaInicialMedico::*)()>(_a, &TelaInicialMedico::historicoRequisitado, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TelaInicialMedico::*)()>(_a, &TelaInicialMedico::sairRequisitado, 3))
            return;
    }
}

const QMetaObject *TelaInicialMedico::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaInicialMedico::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17TelaInicialMedicoE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TelaInicialMedico::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TelaInicialMedico::agendaRequisitada()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TelaInicialMedico::prontuarioRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TelaInicialMedico::historicoRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TelaInicialMedico::sairRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
