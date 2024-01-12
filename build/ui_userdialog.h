/********************************************************************************
** Form generated from reading UI file 'userdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDIALOG_H
#define UI_USERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QFrame *frame;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_11;
    QPushButton *pushButton_14;
    QFrame *frame_2;

    void setupUi(QDialog *UserDialog)
    {
        if (UserDialog->objectName().isEmpty())
            UserDialog->setObjectName(QString::fromUtf8("UserDialog"));
        UserDialog->resize(2000, 1500);
        label = new QLabel(UserDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 100, 941, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(30);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(UserDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(590, 410, 281, 81));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(UserDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(590, 530, 271, 71));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(UserDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(590, 630, 221, 81));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(UserDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(770, 420, 521, 61));
        lineEdit->setFont(font1);
        lineEdit->setFocusPolicy(Qt::NoFocus);
        lineEdit->setDragEnabled(false);
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(UserDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(770, 530, 521, 61));
        lineEdit_2->setFont(font1);
        lineEdit_2->setFocusPolicy(Qt::NoFocus);
        lineEdit_2->setDragEnabled(false);
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(UserDialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(770, 640, 521, 61));
        lineEdit_3->setFont(font1);
        lineEdit_3->setFocusPolicy(Qt::NoFocus);
        lineEdit_3->setDragEnabled(false);
        lineEdit_3->setReadOnly(true);
        lineEdit_4 = new QLineEdit(UserDialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(770, 790, 521, 61));
        lineEdit_4->setFont(font1);
        lineEdit_4->setFocusPolicy(Qt::NoFocus);
        lineEdit_4->setDragEnabled(false);
        lineEdit_4->setReadOnly(true);
        label_5 = new QLabel(UserDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(570, 780, 301, 91));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(UserDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1470, 440, 331, 81));
        QFont font2;
        font2.setPointSize(15);
        pushButton->setFont(font2);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(UserDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1470, 590, 331, 81));
        pushButton_2->setFont(font2);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(UserDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 1080, 381, 121));
        pushButton_3->setFont(font2);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_4 = new QPushButton(UserDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1110, 1080, 381, 121));
        pushButton_4->setFont(font2);
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_5 = new QPushButton(UserDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 610, 381, 111));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Agency FB"));
        font3.setPointSize(15);
        pushButton_5->setFont(font3);
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_6 = new QPushButton(UserDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(-10, 950, 381, 111));
        pushButton_6->setFont(font3);
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_7 = new QPushButton(UserDialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 440, 381, 111));
        pushButton_7->setFont(font3);
        pushButton_7->setFocusPolicy(Qt::NoFocus);
        pushButton_8 = new QPushButton(UserDialog);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 780, 381, 111));
        pushButton_8->setFont(font3);
        pushButton_8->setFocusPolicy(Qt::NoFocus);
        pushButton_9 = new QPushButton(UserDialog);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 1290, 381, 111));
        pushButton_9->setFont(font3);
        pushButton_9->setFocusPolicy(Qt::NoFocus);
        pushButton_10 = new QPushButton(UserDialog);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 1120, 381, 111));
        pushButton_10->setFont(font3);
        pushButton_10->setFocusPolicy(Qt::NoFocus);
        pushButton_13 = new QPushButton(UserDialog);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(1720, 1420, 281, 71));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Agency FB"));
        font4.setPointSize(12);
        pushButton_13->setFont(font4);
        pushButton_13->setFocusPolicy(Qt::NoFocus);
        frame = new QFrame(UserDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(1780, 30, 171, 151));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/user.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(UserDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1760, 191, 211, 51));
        QFont font5;
        font5.setPointSize(12);
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(UserDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1760, 260, 201, 51));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_11 = new QPushButton(UserDialog);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(0, 270, 381, 111));
        pushButton_11->setFont(font2);
        pushButton_11->setFocusPolicy(Qt::NoFocus);
        pushButton_14 = new QPushButton(UserDialog);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(0, 100, 381, 111));
        pushButton_14->setFont(font2);
        pushButton_14->setFocusPolicy(Qt::NoFocus);
        frame_2 = new QFrame(UserDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 2000, 1500));
        frame_2->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/uerdialog.jpg);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        label_5->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_13->raise();
        frame->raise();
        label_6->raise();
        label_7->raise();
        pushButton_11->raise();
        pushButton_14->raise();

        retranslateUi(UserDialog);
        QObject::connect(pushButton_13, SIGNAL(clicked()), UserDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(UserDialog);
    } // setupUi

    void retranslateUi(QDialog *UserDialog)
    {
        UserDialog->setWindowTitle(QApplication::translate("UserDialog", "\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("UserDialog", "\346\230\237\351\231\205\347\275\221\345\220\247\347\245\235\346\202\250\344\270\212\347\275\221\346\204\211\345\277\253\357\274\201", nullptr));
        label_2->setText(QApplication::translate("UserDialog", "\344\270\212\346\234\272\346\227\266\351\227\264\357\274\232", nullptr));
        label_3->setText(QApplication::translate("UserDialog", "\347\264\257\350\256\241\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QApplication::translate("UserDialog", "\347\264\257\350\256\241\350\264\271\347\224\250\357\274\232", nullptr));
        lineEdit_4->setText(QString());
        label_5->setText(QApplication::translate("UserDialog", "\346\270\251\351\246\250\346\217\220\347\244\272\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("UserDialog", "\346\224\266\350\264\271\346\240\207\345\207\206", nullptr));
        pushButton_2->setText(QApplication::translate("UserDialog", "\346\237\245\347\234\213\345\270\256\345\212\251", nullptr));
        pushButton_3->setText(QApplication::translate("UserDialog", "\345\274\200\345\247\213\344\270\212\347\275\221", nullptr));
        pushButton_4->setText(QApplication::translate("UserDialog", "\347\273\223\346\235\237\344\270\212\347\275\221", nullptr));
        pushButton_5->setText(QApplication::translate("UserDialog", "\344\275\231\351\242\235\346\237\245\350\257\242", nullptr));
        pushButton_6->setText(QApplication::translate("UserDialog", "\344\274\232\345\221\230\345\212\236\347\220\206", nullptr));
        pushButton_7->setText(QApplication::translate("UserDialog", "\345\205\205\345\200\274", nullptr));
        pushButton_8->setText(QApplication::translate("UserDialog", "\345\257\206\347\240\201\344\277\256\346\224\271", nullptr));
        pushButton_9->setText(QApplication::translate("UserDialog", "\350\264\246\345\217\267\346\263\250\351\224\200", nullptr));
        pushButton_10->setText(QApplication::translate("UserDialog", "\351\200\200\350\264\271", nullptr));
        pushButton_13->setText(QApplication::translate("UserDialog", "\351\200\200\345\207\272", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        pushButton_11->setText(QApplication::translate("UserDialog", "\345\225\206\345\237\216\347\263\273\347\273\237", nullptr));
        pushButton_14->setText(QApplication::translate("UserDialog", "\346\230\237\351\231\205 Chat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDialog: public Ui_UserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDIALOG_H
