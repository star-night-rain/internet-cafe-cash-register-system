/********************************************************************************
** Form generated from reading UI file 'storeuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREUSER_H
#define UI_STOREUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_storeUser
{
public:
    QLabel *label_9;
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_5;
    QLabel *label_10;
    QSpinBox *spinBox_4;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *storeUser)
    {
        if (storeUser->objectName().isEmpty())
            storeUser->setObjectName(QString::fromUtf8("storeUser"));
        storeUser->resize(1500, 1250);
        label_9 = new QLabel(storeUser);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(840, 180, 300, 180));
        QFont font;
        font.setPointSize(12);
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/bread.jpg);"));
        frame = new QFrame(storeUser);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1500, 1250));
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/photo/store.jpg)}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(990, 960, 301, 101));
        QFont font1;
        font1.setPointSize(15);
        pushButton->setFont(font1);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 810, 300, 180));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/ham.png);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 1000, 290, 70));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        spinBox_2 = new QSpinBox(frame);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(580, 870, 120, 70));
        spinBox_2->setFont(font1);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 490, 300, 180));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/beer.png);\n"
""));
        spinBox_3 = new QSpinBox(frame);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(580, 520, 120, 70));
        spinBox_3->setFont(font1);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 670, 290, 70));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 180, 300, 180));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/noodles.jpg);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 370, 290, 70));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(570, 230, 120, 70));
        spinBox->setFont(font1);
        spinBox_5 = new QSpinBox(frame);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(1180, 240, 120, 70));
        spinBox_5->setFont(font1);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(840, 360, 290, 70));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        spinBox_4 = new QSpinBox(frame);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(1190, 540, 120, 70));
        spinBox_4->setFont(font1);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(850, 480, 300, 180));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/soda.jpg);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(850, 670, 290, 70));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame->raise();
        label_9->raise();

        retranslateUi(storeUser);

        QMetaObject::connectSlotsByName(storeUser);
    } // setupUi

    void retranslateUi(QDialog *storeUser)
    {
        storeUser->setWindowTitle(QApplication::translate("storeUser", "\345\225\206\345\237\216", nullptr));
        label_9->setText(QString());
        pushButton->setText(QApplication::translate("storeUser", "\346\217\220\344\272\244\350\256\242\345\215\225", nullptr));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("storeUser", "2\345\205\203", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("storeUser", "6\345\205\203", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("storeUser", "10\345\205\203", nullptr));
        label_10->setText(QApplication::translate("storeUser", "5\345\205\203", nullptr));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("storeUser", "6\345\205\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class storeUser: public Ui_storeUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREUSER_H
