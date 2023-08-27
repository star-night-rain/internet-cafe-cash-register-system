#-------------------------------------------------
#
# Project created by QtCreator 2023-08-18T18:11:34
#
#-------------------------------------------------

QT       += core gui charts sql widgets network multimediawidgets multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = product
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

CONFIG += c++11

SOURCES += \
        adminchat.cpp \
        admindialog.cpp \
        billings.cpp \
        cardinfo.cpp \
        cardrecords.cpp \
        changepassword.cpp \
        chat.cpp \
        daysail.cpp \
        facerec.cpp \
        food.cpp \
        global.cpp \
        logindialog.cpp \
        logoutdialog.cpp \
        main.cpp \
        menber.cpp \
        mencom.cpp \
        newuser.cpp \
        payment.cpp \
        qq.cpp \
        rechangedialog.cpp \
        returnmoney.cpp \
        storeadmin.cpp \
        storeuser.cpp \
        topup.cpp \
        userdialog.cpp \
        widget.cpp

HEADERS += \
        adminchat.h \
        admindialog.h \
        billings.h \
        cardinfo.h \
        cardrecords.h \
        changepassword.h \
        chat.h \
        connection.h \
        daysail.h \
        facerec.h \
        food.h \
        global.h \
        logindialog.h \
        logoutdialog.h \
        menber.h \
        mencom.h \
        newuser.h \
        payment.h \
        qq.h \
        rechangedialog.h \
        returnmoney.h \
        storeadmin.h \
        storeuser.h \
        topup.h \
        userdialog.h \
        widget.h

FORMS += \
        adminchat.ui \
        admindialog.ui \
        billings.ui \
        cardinfo.ui \
        cardrecords.ui \
        changepassword.ui \
        chat.ui \
        daysail.ui \
        facerec.ui \
        food.ui \
        logindialog.ui \
        logoutdialog.ui \
        menber.ui \
        mencom.ui \
        newuser.ui \
        payment.ui \
        qq.ui \
        rechangedialog.ui \
        returnmoney.ui \
        storeadmin.ui \
        storeuser.ui \
        topup.ui \
        userdialog.ui \
        widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture.qrc



