QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Administrador.cpp \
    Clinica.cpp \
    Consulta.cpp \
    Medico.cpp \
    Paciente.cpp \
    Pessoa.cpp \
    Secretario.cpp \
    Usuario.cpp \
    main.cpp \
    mainwindow.cpp \
    telainicialadministrador.cpp \
    telainicialmedico.cpp \
    telainicialsecretario.cpp \
    telalogin.cpp \
    telaregistro.cpp \

HEADERS += \
    Administrador.h \
    Clinica.h \
    Consulta.h \
    Medico.h \
    Paciente.h \
    Pessoa.h \
    Secretario.h \
    Usuario.h \
    mainwindow.h \
    telainicialadministrador.h \
    telainicialmedico.h \
    telainicialsecretario.h \
    telalogin.h \
    telaregistro.h

FORMS += \
    mainwindow.ui \
    telainicialadministrador.ui \
    telainicialmedico.ui \
    telainicialsecretario.ui \
    telalogin.ui \
    telaregistro.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
