#-------------------------------------------------
#
# Project created by QtCreator 2014-04-07T10:22:44
#
#-------------------------------------------------

QT       += core gui

CONFIG += debug


TARGET = CurrentDriveCheckout
TEMPLATE = app

QT       += core gui opengl


OBJECTS_DIR = ./BIN/
MOC_DIR = ./BIN/

QMAKE_CXXFLAGS	 += -g -Wall -std=c++0x

DEPENDPATH += 	../Sandbox/ \
                #/media/Telerobotics/code/Sandbox\

INCLUDEPATH += 	/usr/local/include/opencv\
                /usr/local/include/opencv2\
                /usr/include/flycapture\
                /usr/local/include/eigen3\
                /usr/local/include\
                /usr/include\
                /usr/local/DAQ\
                /usr/local/include/usbhid\
                /usr/include/gsl\
                ../Sandbox/ \
                #/media/Telerobotics/code/Sandbox\

LIBS += -L/usr/local/DAQ\
        -L/usr/local/lib\
        -L/usr/lib\
        -L../OmnimagnetLibs/AD_IO_Lib \
        -L../OmnimagnetLibs/Math_Lib \
        -L../OmnimagnetLibs/Producer_Lib \
        -lopencv_imgproc\
        -lopencv_highgui\
        -lopencv_core\
        -lopencv_calib3d\
        -lopencv_video\
        -ls626\
        -lflycapture\
        -lcomedi\
        -lmccusb\
        -lAD_IO\
        -lMath\
        -lProducer\



SOURCES += main.cpp\
        mainwindow.cpp \
        GUI/InterfaceButtons.cpp \
        GUI/NumberWithUnits.cpp \
        Devices/AMC_30A8.cpp \
        Devices/Advantech_PCI_1724U_ADIO.cpp \
        Devices/Advantech_PCI_1724U.cpp \
        Devices/MultipleOmnimagnetSetup.cpp \
        Devices/Omnimagnet.cpp
#    ../../../media/Telerobotics/code/Sandbox/GUI/InterfaceButtons.cpp \
#    ../../../media/Telerobotics/code/Sandbox/GUI/NumberWithUnits.cpp \
#    ../../../media/Telerobotics/code/Sandbox/Devices/AMC_30A8.cpp \
#    ../../../media/Telerobotics/code/Sandbox/Devices/Advantech_PCI_1724U_ADIO.cpp \
#    ../../../media/Telerobotics/code/Sandbox/Devices/Advantech_PCI_1724U.cpp \
#    ../../../media/Telerobotics/code/Sandbox/Devices/MultipleOmnimagnetSetup.cpp \
#    ../../../media/Telerobotics/code/Sandbox/Devices/Omnimagnet.cpp

HEADERS  += mainwindow.h \
        GUI/InterfaceButtons.h \
        GUI/NumberWithUnits.h \
        Devices/AMC_30A8.h \
        Devices/Advantech_PCI_1724U_ADIO.h \
        Devices/Advantech_PCI_1724U.h \
        Utilities/utilities.h \
        Devices/MultipleOmnimagnetSetup.h \
        Devices/Omnimagnet.h \
        Utilities/Math.h \
        Producers/Producers.h
#    ../../../media/Telerobotics/code/Sandbox/GUI/InterfaceButtons.h \
#    ../../../media/Telerobotics/code/Sandbox/GUI/NumberWithUnits.h \
#    ../../../media/Telerobotics/code/Sandbox/Devices/AMC_30A8.h \
#    ../../../media/Telerobotics/code/Sandbox/Devices/Advantech_PCI_1724U_ADIO.h \
#    ../../../media/Telerobotics/code/Sandbox/Devices/Advantech_PCI_1724U.h \
#    ../../../media/Telerobotics/code/Sandbox/Utilities/utilities.h \
#    ../../../media/Telerobotics/code/Sandbox/Devices/MultipleOmnimagnetSetup.h \
#    ../../../media/Telerobotics/code/Sandbox/Devices/Omnimagnet.h \
#    ../../../media/Telerobotics/code/Sandbox/Utilities/Math.h \
#    ../../../media/Telerobotics/code/Sandbox/Producers/Producers.h

FORMS    += mainwindow.ui
