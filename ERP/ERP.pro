#-------------------------------------------------
#
# Project created by QtCreator 2016-09-07T09:37:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ERP
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    fileHandler.cpp \
    debughandler.cpp \
    parameterhandler.cpp

HEADERS  += \
    mainwindow.h \
    fileHandler.h \
    debughandler.h \
    parameterhandler.h

FORMS    += \
    mainwindow.ui
