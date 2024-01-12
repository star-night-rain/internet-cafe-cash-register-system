/********************************************************************************
** Form generated from reading UI file 'admindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_7;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_9;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_10;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_11;
    QTableView *tableView_2;
    QPushButton *boardBt;
    QPushButton *deplaneBt;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *frame_2;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName(QString::fromUtf8("AdminDialog"));
        AdminDialog->resize(2880, 1800);
        scrollArea = new QScrollArea(AdminDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(1960, 20, 900, 550));
        scrollArea->setFocusPolicy(Qt::NoFocus);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 898, 548));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(AdminDialog);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(1960, 610, 900, 550));
        scrollArea_2->setFocusPolicy(Qt::NoFocus);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 898, 548));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        scrollArea_3 = new QScrollArea(AdminDialog);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(1960, 1210, 900, 550));
        scrollArea_3->setFocusPolicy(Qt::NoFocus);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 898, 548));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        scrollArea_4 = new QScrollArea(AdminDialog);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(20, 20, 900, 550));
        scrollArea_4->setFocusPolicy(Qt::NoFocus);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 898, 548));
        scrollArea_4->setWidget(scrollAreaWidgetContents_7);
        scrollArea_5 = new QScrollArea(AdminDialog);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setGeometry(QRect(20, 610, 900, 550));
        scrollArea_5->setFocusPolicy(Qt::NoFocus);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 898, 548));
        scrollArea_5->setWidget(scrollAreaWidgetContents_9);
        scrollArea_6 = new QScrollArea(AdminDialog);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setGeometry(QRect(30, 1210, 900, 550));
        scrollArea_6->setFocusPolicy(Qt::NoFocus);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 898, 548));
        scrollArea_6->setWidget(scrollAreaWidgetContents_10);
        scrollArea_7 = new QScrollArea(AdminDialog);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setGeometry(QRect(1000, 1210, 900, 550));
        scrollArea_7->setFocusPolicy(Qt::NoFocus);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_11 = new QWidget();
        scrollAreaWidgetContents_11->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_11"));
        scrollAreaWidgetContents_11->setGeometry(QRect(0, 0, 898, 548));
        scrollArea_7->setWidget(scrollAreaWidgetContents_11);
        tableView_2 = new QTableView(AdminDialog);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(980, 520, 921, 631));
        tableView_2->setFocusPolicy(Qt::TabFocus);
        tableView_2->horizontalHeader()->setCascadingSectionResizes(false);
        boardBt = new QPushButton(AdminDialog);
        boardBt->setObjectName(QString::fromUtf8("boardBt"));
        boardBt->setGeometry(QRect(1160, 350, 271, 91));
        QFont font;
        font.setPointSize(13);
        boardBt->setFont(font);
        boardBt->setFocusPolicy(Qt::NoFocus);
        boardBt->setCheckable(true);
        boardBt->setChecked(true);
        boardBt->setAutoExclusive(true);
        deplaneBt = new QPushButton(AdminDialog);
        deplaneBt->setObjectName(QString::fromUtf8("deplaneBt"));
        deplaneBt->setGeometry(QRect(1470, 350, 271, 91));
        deplaneBt->setFont(font);
        deplaneBt->setFocusPolicy(Qt::NoFocus);
        deplaneBt->setCheckable(true);
        deplaneBt->setAutoExclusive(true);
        label_2 = new QLabel(AdminDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1020, 120, 261, 151));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(AdminDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1320, 120, 261, 151));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(AdminDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1610, 120, 281, 151));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 85, 0);\n"
"\n"
""));
        frame_2 = new QFrame(AdminDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 2880, 1880));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/admin.jpg);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->raise();
        scrollArea->raise();
        scrollArea_2->raise();
        scrollArea_3->raise();
        scrollArea_4->raise();
        scrollArea_5->raise();
        scrollArea_6->raise();
        scrollArea_7->raise();
        tableView_2->raise();
        boardBt->raise();
        deplaneBt->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(AdminDialog);

        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QApplication::translate("AdminDialog", "\347\256\241\347\220\206\347\253\257", nullptr));
        boardBt->setText(QApplication::translate("AdminDialog", "\344\270\212\346\234\272", nullptr));
        deplaneBt->setText(QApplication::translate("AdminDialog", "\344\270\213\346\234\272", nullptr));
        label_2->setText(QApplication::translate("AdminDialog", "\347\273\274\345\220\210\346\224\266\345\205\245", nullptr));
        label_3->setText(QApplication::translate("AdminDialog", "\346\225\243\345\256\242\346\266\210\350\264\271", nullptr));
        label_4->setText(QApplication::translate("AdminDialog", "\344\274\232\345\221\230\346\266\210\350\264\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
