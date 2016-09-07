#-------------------------------------------------
#
# Project created by QtCreator 2016-08-20T11:19:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IguanaServer
TEMPLATE = app


SOURCES += main.cpp\
        iguanawindow.cpp

HEADERS  += iguanawindow.h

RESOURCES += \
    iguanaserver.qrc

CONFIG+= static
CONFIG-=app_bundle