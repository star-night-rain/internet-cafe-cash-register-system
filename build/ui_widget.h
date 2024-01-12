/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_3;
    QFrame *frame;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1800, 1500);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 650, 161, 81));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(600, 770, 131, 61));
        label_2->setFont(font);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(760, 660, 451, 61));
        QFont font1;
        font1.setPointSize(15);
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(760, 770, 451, 61));
        lineEdit_2->setFont(font1);
        lineEdit_2->setFocusPolicy(Qt::ClickFocus);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 1070, 261, 71));
        pushButton->setFont(font1);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 930, 271, 81));
        pushButton_2->setFont(font1);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        radioButton = new QRadioButton(Widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(800, 860, 141, 51));
        radioButton->setFont(font1);
        radioButton_2 = new QRadioButton(Widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(970, 860, 191, 51));
        radioButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1110, 1060, 261, 71));
        pushButton_3->setFont(font1);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
""));
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1801, 1511));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/photo/login.png)}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 400, 771, 111));
        QFont font2;
        font2.setPointSize(22);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);
        frame->raise();
        label_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        radioButton->raise();
        radioButton_2->raise();
        pushButton_3->raise();
        label->raise();

        retranslateUi(Widget);
        QObject::connect(pushButton_3, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("Widget", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Widget", "\345\257\206\347\240\201\357\274\232", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        radioButton->setText(QApplication::translate("Widget", "\347\224\250\346\210\267", nullptr));
        radioButton_2->setText(QApplication::translate("Widget", "\347\256\241\347\220\206\345\221\230", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QApplication::translate("Widget", "\346\230\237\351\231\205\347\275\221\345\220\247\344\272\221\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
