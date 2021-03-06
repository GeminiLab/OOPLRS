#-------------------------------------------------
#
# Project created by QtCreator 2017-05-21T17:47:04
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = server
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp \
    mainwindow.cpp \
    serverconn.cpp \
    ../cih/globalConf.cpp \
    werewolf.cpp \
    connect.cpp \
    record.cpp \
    over.cpp \
    commvar.cpp \
    server.cpp \
    inprocess.cpp

HEADERS  += mainwindow.h \
    serverconn.h \
    ../cih/globalConf.h \
    werewolf.h \
    connect.h \
    record.h \
    over.h \
    commvar.h \
    server.h \
    inprocess.h

FORMS    += mainwindow.ui \
    werewolf.ui \
    connect.ui \
    over.ui \
    inprocess.ui

RESOURCES += \
    picture.qrc
