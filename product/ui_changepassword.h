/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;

    void setupUi(QDialog *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QString::fromUtf8("ChangePassword"));
        ChangePassword->resize(1200, 900);
        label = new QLabel(ChangePassword);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 100, 241, 81));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(ChangePassword);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 230, 121, 51));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(ChangePassword);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 330, 121, 51));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(ChangePassword);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 430, 161, 51));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(ChangePassword);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(520, 230, 361, 51));
        lineEdit->setFont(font1);
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(ChangePassword);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(520, 330, 361, 51));
        lineEdit_2->setFont(font1);
        lineEdit_2->setFocusPolicy(Qt::StrongFocus);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(ChangePassword);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(520, 430, 361, 51));
        lineEdit_3->setFont(font1);
        lineEdit_3->setFocusPolicy(Qt::StrongFocus);
        lineEdit_3->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(ChangePassword);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(980, 810, 181, 61));
        pushButton->setFont(font1);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(ChangePassword);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 600, 171, 71));
        pushButton_2->setFont(font1);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        frame = new QFrame(ChangePassword);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1200, 900));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/pwd.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QDialog *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "\346\233\264\346\224\271\345\257\206\347\240\201", nullptr));
        label->setText(QApplication::translate("ChangePassword", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_2->setText(QApplication::translate("ChangePassword", "\345\216\237\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("ChangePassword", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QApplication::translate("ChangePassword", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("ChangePassword", "\350\257\267\350\276\223\345\205\245\345\216\237\345\257\206\347\240\201", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("ChangePassword", "\350\256\276\347\275\256\346\226\260\345\257\206\347\240\201", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("ChangePassword", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("ChangePassword", "\351\200\200\345\207\272", nullptr));
        pushButton_2->setText(QApplication::translate("ChangePassword", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
