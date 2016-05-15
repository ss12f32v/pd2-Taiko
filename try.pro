#-------------------------------------------------
#
# Project created by QtCreator 2016-05-11T19:35:26
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = try
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp \
    result.cpp

HEADERS  += mainwindow.h \
    game.h \
    result.h

FORMS    += mainwindow.ui \
    game.ui \
    result.ui

RESOURCES += \
    pic.qrc
