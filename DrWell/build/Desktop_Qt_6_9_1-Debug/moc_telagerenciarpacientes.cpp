/****************************************************************************
** Meta object code from reading C++ file 'telagerenciarpacientes.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../telagerenciarpacientes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telagerenciarpacientes.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22TelaGerenciarPacientesE_t {};
} // unnamed namespace

template <> constexpr inline auto TelaGerenciarPacientes::qt_create_metaobjectdata<qt_meta_tag_ZN22TelaGerenciarPacientesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TelaGerenciarPacientes",
        "voltarRequisitado",
        "",
        "cadastrarRequisitado",
        "on_pushButtonVoltar_clicked",
        "on_pushButtonCadastrar_clicked",
        "on_lineEditPaciente_editingFinished",
        "on_pushButtonRemover_clicked",
        "on_pushButtonEditar_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'voltarRequisitado'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cadastrarRequisitado'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_pushButtonVoltar_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonCadastrar_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEditPaciente_editingFinished'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonRemover_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonEditar_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TelaGerenciarPacientes, qt_meta_tag_ZN22TelaGerenciarPacientesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TelaGerenciarPacientes::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22TelaGerenciarPacientesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22TelaGerenciarPacientesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22TelaGerenciarPacientesE_t>.metaTypes,
    nullptr
} };

void TelaGerenciarPacientes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TelaGerenciarPacientes *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->voltarRequisitado(); break;
        case 1: _t->cadastrarRequisitado(); break;
        case 2: _t->on_pushButtonVoltar_clicked(); break;
        case 3: _t->on_pushButtonCadastrar_clicked(); break;
        case 4: _t->on_lineEditPaciente_editingFinished(); break;
        case 5: _t->on_pushButtonRemover_clicked(); break;
        case 6: _t->on_pushButtonEditar_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TelaGerenciarPacientes::*)()>(_a, &TelaGerenciarPacientes::voltarRequisitado, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TelaGerenciarPacientes::*)()>(_a, &TelaGerenciarPacientes::cadastrarRequisitado, 1))
            return;
    }
}

const QMetaObject *TelaGerenciarPacientes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaGerenciarPacientes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22TelaGerenciarPacientesE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TelaGerenciarPacientes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TelaGerenciarPacientes::voltarRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TelaGerenciarPacientes::cadastrarRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
