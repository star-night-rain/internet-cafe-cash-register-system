/********************************************************************************
** Form generated from reading UI file 'storeadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREADMIN_H
#define UI_STOREADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_storeAdmin
{
public:
    QFrame *frame;
    QPushButton *pushButton_3;
    QLabel *label_20;
    QLabel *label_21;
    QSpinBox *spinBox_11;
    QLabel *label_22;
    QSpinBox *spinBox_12;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QSpinBox *spinBox_13;
    QSpinBox *spinBox_14;
    QLabel *label_26;
    QSpinBox *spinBox_15;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_9;

    void setupUi(QDialog *storeAdmin)
    {
        if (storeAdmin->objectName().isEmpty())
            storeAdmin->setObjectName(QString::fromUtf8("storeAdmin"));
        storeAdmin->resize(1500, 1250);
        frame = new QFrame(storeAdmin);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1500, 1250));
        QFont font;
        font.setPointSize(12);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/photo/store.jpg)}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(990, 960, 301, 101));
        QFont font1;
        font1.setPointSize(15);
        pushButton_3->setFont(font1);
        label_20 = new QLabel(frame);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(250, 810, 300, 180));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/ham.png);"));
        label_21 = new QLabel(frame);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(250, 1000, 290, 70));
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        spinBox_11 = new QSpinBox(frame);
        spinBox_11->setObjectName(QString::fromUtf8("spinBox_11"));
        spinBox_11->setGeometry(QRect(580, 870, 120, 70));
        spinBox_11->setFont(font1);
        label_22 = new QLabel(frame);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(250, 490, 300, 180));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/beer.png);\n"
""));
        spinBox_12 = new QSpinBox(frame);
        spinBox_12->setObjectName(QString::fromUtf8("spinBox_12"));
        spinBox_12->setGeometry(QRect(580, 520, 120, 70));
        spinBox_12->setFont(font1);
        label_23 = new QLabel(frame);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(250, 670, 290, 70));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_24 = new QLabel(frame);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(250, 180, 300, 180));
        label_24->setFont(font);
        label_24->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/noodles.jpg);"));
        label_25 = new QLabel(frame);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(250, 370, 290, 70));
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        spinBox_13 = new QSpinBox(frame);
        spinBox_13->setObjectName(QString::fromUtf8("spinBox_13"));
        spinBox_13->setGeometry(QRect(570, 230, 120, 70));
        spinBox_13->setFont(font1);
        spinBox_14 = new QSpinBox(frame);
        spinBox_14->setObjectName(QString::fromUtf8("spinBox_14"));
        spinBox_14->setGeometry(QRect(1180, 240, 120, 70));
        spinBox_14->setFont(font1);
        label_26 = new QLabel(frame);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(850, 370, 290, 70));
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        spinBox_15 = new QSpinBox(frame);
        spinBox_15->setObjectName(QString::fromUtf8("spinBox_15"));
        spinBox_15->setGeometry(QRect(1190, 540, 120, 70));
        spinBox_15->setFont(font1);
        label_27 = new QLabel(frame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(850, 480, 300, 180));
        label_27->setFont(font);
        label_27->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/soda.jpg);"));
        label_28 = new QLabel(frame);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(850, 670, 290, 70));
        label_28->setFont(font1);
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(850, 190, 300, 180));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/bread.jpg);"));

        retranslateUi(storeAdmin);

        QMetaObject::connectSlotsByName(storeAdmin);
    } // setupUi

    void retranslateUi(QDialog *storeAdmin)
    {
        storeAdmin->setWindowTitle(QApplication::translate("storeAdmin", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("storeAdmin", "\350\277\233\350\264\247", nullptr));
        label_20->setText(QString());
        label_21->setText(QApplication::translate("storeAdmin", "2\345\205\203", nullptr));
        label_22->setText(QString());
        label_23->setText(QApplication::translate("storeAdmin", "6\345\205\203", nullptr));
        label_24->setText(QString());
        label_25->setText(QApplication::translate("storeAdmin", "10\345\205\203", nullptr));
        label_26->setText(QApplication::translate("storeAdmin", "5\345\205\203", nullptr));
        label_27->setText(QString());
        label_28->setText(QApplication::translate("storeAdmin", "6\345\205\203", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class storeAdmin: public Ui_storeAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREADMIN_H
