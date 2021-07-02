CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(sicmyplugin)
TEMPLATE    = lib

HEADERS     = sicmyplugin.h \
    sicmy.h
SOURCES     = sicmyplugin.cpp \
    sicmy.cpp
RESOURCES   = \
    myLED.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(sicmy.pri)

FORMS += \
    sicmy.ui
