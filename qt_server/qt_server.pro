QT += core
QT -= gui

CONFIG += c++11

TARGET = qt_server
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    bcm2835_stub.cpp \
    PinClass.cpp \
    pwmclass.cpp

HEADERS += \
    bcm2835.h \
    PinClass.h \
    pwmclass.h
