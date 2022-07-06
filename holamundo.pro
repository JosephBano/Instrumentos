TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cuerda.cpp \
        instrumento.cpp \
        main.cpp \
        percusion.cpp \
        viento.cpp

HEADERS += \
    cuerda.h \
    instrumento.h \
    percusion.h \
    viento.h
