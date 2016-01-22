QT += core qml
QT -= gui

CONFIG += c++11

TARGET = qml-sandbox
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    util.cpp

DISTFILES += \
    main.qml \
    LICENSE \
    README.md

HEADERS += \
    util.h
