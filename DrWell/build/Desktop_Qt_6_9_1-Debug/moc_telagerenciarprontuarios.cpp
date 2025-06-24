/****************************************************************************
** Meta object code from reading C++ file 'telagerenciarprontuarios.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../telagerenciarprontuarios.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telagerenciarprontuarios.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN24TelaGerenciarProntuariosE_t {};
} // unnamed namespace

template <> constexpr inline auto TelaGerenciarProntuarios::qt_create_metaobjectdata<qt_meta_tag_ZN24TelaGerenciarProntuariosE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TelaGerenciarProntuarios",
        "voltarRequisitado",
        "",
        "abrirRequisitado",
        "on_pushButtonVoltar_clicked",
        "on_pushButtonAbrir_clicked",
        "on_lineEditPaciente_editingFinished"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'voltarRequisitado'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'abrirRequisitado'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_pushButtonVoltar_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonAbrir_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEditPaciente_editingFinished'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TelaGerenciarProntuarios, qt_meta_tag_ZN24TelaGerenciarProntuariosE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TelaGerenciarProntuarios::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24TelaGerenciarProntuariosE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24TelaGerenciarProntuariosE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24TelaGerenciarProntuariosE_t>.metaTypes,
    nullptr
} };

void TelaGerenciarProntuarios::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TelaGerenciarProntuarios *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->voltarRequisitado(); break;
        case 1: _t->abrirRequisitado(); break;
        case 2: _t->on_pushButtonVoltar_clicked(); break;
        case 3: _t->on_pushButtonAbrir_clicked(); break;
        case 4: _t->on_lineEditPaciente_editingFinished(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TelaGerenciarProntuarios::*)()>(_a, &TelaGerenciarProntuarios::voltarRequisitado, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TelaGerenciarProntuarios::*)()>(_a, &TelaGerenciarProntuarios::abrirRequisitado, 1))
            return;
    }
}

const QMetaObject *TelaGerenciarProntuarios::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaGerenciarProntuarios::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24TelaGerenciarProntuariosE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TelaGerenciarProntuarios::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TelaGerenciarProntuarios::voltarRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TelaGerenciarProntuarios::abrirRequisitado()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
