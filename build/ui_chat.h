/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QFrame *frame;
    QPushButton *openBt;
    QPushButton *closeBt;
    QPushButton *sendBt;
    QLineEdit *sendEdit;
    QLabel *label;
    QPlainTextEdit *recvEdit;
    QLabel *label_2;

    void setupUi(QDialog *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->resize(1500, 1350);
        frame = new QFrame(Chat);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1500, 1350));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/photo/chat.jpg)}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        openBt = new QPushButton(frame);
        openBt->setObjectName(QString::fromUtf8("openBt"));
        openBt->setGeometry(QRect(370, 1050, 201, 61));
        QFont font;
        font.setPointSize(13);
        openBt->setFont(font);
        openBt->setFocusPolicy(Qt::NoFocus);
        closeBt = new QPushButton(frame);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));
        closeBt->setGeometry(QRect(710, 1050, 201, 61));
        closeBt->setFont(font);
        closeBt->setFocusPolicy(Qt::NoFocus);
        sendBt = new QPushButton(frame);
        sendBt->setObjectName(QString::fromUtf8("sendBt"));
        sendBt->setGeometry(QRect(1090, 1050, 201, 61));
        sendBt->setFont(font);
        sendBt->setFocusPolicy(Qt::NoFocus);
        sendEdit = new QLineEdit(frame);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));
        sendEdit->setGeometry(QRect(300, 940, 751, 61));
        sendEdit->setFont(font);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 880, 261, 41));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        recvEdit = new QPlainTextEdit(frame);
        recvEdit->setObjectName(QString::fromUtf8("recvEdit"));
        recvEdit->setGeometry(QRect(300, 220, 991, 601));
        recvEdit->setFont(font);
        recvEdit->setFocusPolicy(Qt::NoFocus);
        recvEdit->setReadOnly(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 150, 241, 41));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QDialog *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "\346\234\215\345\212\241\347\253\257", nullptr));
        openBt->setText(QApplication::translate("Chat", "\346\211\223\345\274\200\346\234\215\345\212\241\345\231\250", nullptr));
        closeBt->setText(QApplication::translate("Chat", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", nullptr));
        sendBt->setText(QApplication::translate("Chat", "\345\217\221\351\200\201", nullptr));
        label->setText(QApplication::translate("Chat", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        label_2->setText(QApplication::translate("Chat", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
