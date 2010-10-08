# -------------------------------------------------
# Project created by QtCreator 2010-09-18T21:56:04
# -------------------------------------------------
QT += network \
    webkit \
    xml
TARGET = TorrentsV2
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    qsxml.cpp \
    webview.cpp \
    Qnotification.cpp \
    downloadmanager.cpp
HEADERS += mainwindow.h \
    qsxml.h \
    webview.h \
    Qnotification.h \
    downloadmanager.h
FORMS += mainwindow.ui
RESOURCES += jquery.qrc \
    images.qrc
CONFIG += link_pkgconfig
PKGCONFIG += libnotify
