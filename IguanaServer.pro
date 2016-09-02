#-------------------------------------------------
#
# Project created by QtCreator 2016-08-20T11:19:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IguanaServer
TEMPLATE = app


SOURCES += main.cpp\
        iguanawindow.cpp

HEADERS  += iguanawindow.h

RESOURCES += \
    iguanaserver.qrc

# install
#target.path = $$[QT_INSTALL_EXAMPLES]/desktop/iguanaserver
#sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS IguanaServer.pro resources images
#sources.path = $$[QT_INSTALL_EXAMPLES]/desktop/iguanaserver
#INSTALLS += target sources

#symbian: include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)

#wince* {
 #       CONFIG(debug, release|debug) {
  #              addPlugins.files = $$QT_BUILD_TREE/plugins/imageformats/qsvgd4.dll
   #     }
    #    CONFIG(release, release|debug) {
     #           addPlugins.files = $$QT_BUILD_TREE/plugins/imageformats/qsvg4.dll
      #  }
       # addPlugins.path = imageformats
        #DEPLOYMENT += addPlugins
#}

