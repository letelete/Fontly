#-------------------------------------------------
#
# Project created by QtCreator 2017-10-09T15:32:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = source
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    sections\fontpicker.cpp \
    sections\myfonts.cpp \
    sections\settings.cpp \
    sections\myfonts_folders.cpp \
    sections\myfonts_folderopen.cpp \
    core\fontly_main.cpp \
    core/sections.cpp \
    core/shadow.cpp

HEADERS += \
        core\fontly_main.hpp \
    sections\includes\fontpicker.hpp \
    sections\includes\myfonts.hpp \
    sections\includes\settings.hpp \
    sections\includes\myfonts_folderopen.hpp \
    sections\includes\myfonts_folders.hpp \
    core/sections.hpp \
    core/shadow.hpp

FORMS += \
        ui\fontly.ui \
    ui\fontpicker.ui \
    ui\myfonts.ui \
    ui\settings.ui \
    ui/myfonts_folders.ui \
    ui/myfonts_folderopen.ui

RESOURCES += \
    ..\assets\icons.qrc

CONFIG += c++11


