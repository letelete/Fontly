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
    core/shadow.cpp \
    fontpicker/fontpicker.cpp \
    core/fontly.cpp \
    core/const_data.cpp

HEADERS += \
    core/shadow.hpp \
    fontpicker/fontpicker.hpp \
    core/fontly.hpp \
    core/const_data.hpp


FORMS += \
        ui\fontly.ui \
    ui\fontpicker.ui \

RESOURCES += \
    ..\assets\icons.qrc

CONFIG += c++11

RC_FILE = myapp.rc

MY_RESOURCES = \
  config/strings.json

OTHER_FILES += $$MY_RESOURCES

DISTFILES +=

