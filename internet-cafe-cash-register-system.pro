#-------------------------------------------------
#
# Project created by QtCreator 2023-08-18T18:11:34
#
#-------------------------------------------------

QT       += core gui charts sql widgets network multimediawidgets multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = internet-cafe-cash-register-system
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
    src/adminchat.cpp \
    src/admindialog.cpp \
    src/billings.cpp \
    src/cardinfo.cpp \
    src/cardrecords.cpp \
    src/changename.cpp \
    src/changepassword.cpp \
    src/chat.cpp \
    src/consumdialog.cpp \
    src/daysail.cpp \
    src/facerec.cpp \
    src/food.cpp \
    src/global.cpp \
    src/logindialog.cpp \
    src/logoutdialog.cpp \
    src/main.cpp \
    src/menber.cpp \
    src/mencom.cpp \
    src/newuser.cpp \
    src/payment.cpp \
    src/qq.cpp \
    src/rechangedialog.cpp \
    src/returnmoney.cpp \
    src/selectdialog.cpp \
    src/storeadmin.cpp \
    src/storeuser.cpp \
    src/topup.cpp \
    src/userdialog.cpp \
    src/widget.cpp

HEADERS += \
    include/adminchat.h \
    include/admindialog.h \
    include/billings.h \
    include/cardinfo.h \
    include/cardrecords.h \
    include/changename.h \
    include/changepassword.h \
    include/chat.h \
    include/connection.h \
    include/consumdialog.h \
    include/daysail.h \
    include/facerec.h \
    include/food.h \
    include/global.h \
    include/logindialog.h \
    include/logoutdialog.h \
    include/menber.h \
    include/mencom.h \
    include/newuser.h \
    include/payment.h \
    include/qq.h \
    include/rechangedialog.h \
    include/returnmoney.h \
    include/selectdialog.h \
    include/storeadmin.h \
    include/storeuser.h \
    include/topup.h \
    include/userdialog.h \
    include/widget.h

FORMS += \
    ui/adminchat.ui \
    ui/admindialog.ui \
    ui/billings.ui \
    ui/cardinfo.ui \
    ui/cardrecords.ui \
    ui/changename.ui \
    ui/changepassword.ui \
    ui/chat.ui \
    ui/consumdialog.ui \
    ui/daysail.ui \
    ui/facerec.ui \
    ui/food.ui \
    ui/logindialog.ui \
    ui/logoutdialog.ui \
    ui/menber.ui \
    ui/mencom.ui \
    ui/newuser.ui \
    ui/payment.ui \
    ui/qq.ui \
    ui/rechangedialog.ui \
    ui/returnmoney.ui \
    ui/selectdialog.ui \
    ui/storeadmin.ui \
    ui/storeuser.ui \
    ui/topup.ui \
    ui/userdialog.ui \
    ui/widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture.qrc

DISTFILES +=



