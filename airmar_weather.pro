######################################################################
# Automatically generated by qmake (2.01a) Mon Feb 24 22:18:08 2014
######################################################################

TEMPLATE = app
TARGET = airmar_weather
DEPENDPATH += .
INCLUDEPATH += /usr/include/qwt-qt4 \
 /usr/include/qt4
 #qt4/QtNetwork \
               #/usr/include/qwt
#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += core gui network
LIBS += /usr/lib/libqwt-qt4.so
# /usr/lib/qt4
#-qt4.so.5
# Input
HEADERS += hostname.h mainwindow.h parser.h weatherdata.h
FORMS += hostname.ui mainwindow.ui
SOURCES += hostname.cpp main.cpp mainwindow.cpp parser.cpp weatherdata.cpp


OTHER_FILES += \
    Compass.qml

DEFINES += RPI
