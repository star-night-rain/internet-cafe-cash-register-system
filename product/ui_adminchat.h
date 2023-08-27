/********************************************************************************
** Form generated from reading UI file 'adminchat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCHAT_H
#define UI_ADMINCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminChat
{
public:
    QPlainTextEdit *recvEdit;
    QPushButton *openBt;
    QPushButton *closeBt;
    QLineEdit *sendEdit;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame;
    QPushButton *sendBt;

    void setupUi(QDialog *adminChat)
    {
        if (adminChat->objectName().isEmpty())
            adminChat->setObjectName(QString::fromUtf8("adminChat"));
        adminChat->resize(1500, 1350);
        recvEdit = new QPlainTextEdit(adminChat);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(310, 220, 951, 651));
        QFont font;
        font.setPointSize(13);
        recvEdit->setFont(font);
        recvEdit->setFocusPolicy(Qt::NoFocus);
        recvEdit->setReadOnly(true);
        openBt = new QPushButton(adminChat);
        openBt->setObjectName(QString::fromUtf8("openBt"));
        openBt->setGeometry(QRect(330, 1090, 231, 71));
        openBt->setFont(font);
        openBt->setFocusPolicy(Qt::NoFocus);
        closeBt = new QPushButton(adminChat);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));
        closeBt->setGeometry(QRect(670, 1090, 251, 71));
        closeBt->setFont(font);
        closeBt->setFocusPolicy(Qt::NoFocus);
        sendEdit = new QLineEdit(adminChat);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(330, 980, 911, 61));
        sendEdit->setFont(font);
        sendEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(adminChat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 910, 231, 61));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(adminChat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 150, 221, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame = new QFrame(adminChat);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1500, 1350));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/photo/chat.jpg)}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        sendBt = new QPushButton(frame);
        sendBt->setObjectName(QString::fromUtf8("sendBt"));
        sendBt->setGeometry(QRect(1040, 1090, 251, 71));
        sendBt->setFont(font);
        sendBt->setFocusPolicy(Qt::NoFocus);
        frame->raise();
        recvEdit->raise();
        openBt->raise();
        closeBt->raise();
        sendEdit->raise();
        label->raise();
        label_2->raise();

        retranslateUi(adminChat);

        QMetaObject::connectSlotsByName(adminChat);
    } // setupUi

    void retranslateUi(QDialog *adminChat)
    {
        adminChat->setWindowTitle(QApplication::translate("adminChat", "\345\256\242\346\210\267\347\253\257", nullptr));
        openBt->setText(QApplication::translate("adminChat", "\346\211\223\345\274\200\345\256\242\346\210\267\347\253\257", nullptr));
        closeBt->setText(QApplication::translate("adminChat", "\345\205\263\351\227\255\345\256\242\346\210\267\347\253\257", nullptr));
        sendEdit->setText(QString());
        label->setText(QApplication::translate("adminChat", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        label_2->setText(QApplication::translate("adminChat", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        sendBt->setText(QApplication::translate("adminChat", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminChat: public Ui_adminChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCHAT_H
