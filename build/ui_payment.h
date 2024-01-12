/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_payment
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *payment)
    {
        if (payment->objectName().isEmpty())
            payment->setObjectName(QString::fromUtf8("payment"));
        payment->resize(1123, 838);
        frame = new QFrame(payment);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(130, 70, 861, 681));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/wechat.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(payment);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(920, 790, 201, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(payment);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 780, 191, 41));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::NoFocus);

        retranslateUi(payment);

        QMetaObject::connectSlotsByName(payment);
    } // setupUi

    void retranslateUi(QDialog *payment)
    {
        payment->setWindowTitle(QApplication::translate("payment", "\346\224\257\344\273\230\347\252\227\345\217\243", nullptr));
        pushButton->setText(QApplication::translate("payment", "\345\267\262\346\224\257\344\273\230", nullptr));
        pushButton_2->setText(QApplication::translate("payment", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class payment: public Ui_payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
