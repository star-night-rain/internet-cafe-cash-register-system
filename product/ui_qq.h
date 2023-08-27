/********************************************************************************
** Form generated from reading UI file 'qq.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQ_H
#define UI_QQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QQ
{
public:
    QFrame *frame;
    QPushButton *pushButton;

    void setupUi(QDialog *QQ)
    {
        if (QQ->objectName().isEmpty())
            QQ->setObjectName(QString::fromUtf8("QQ"));
        QQ->resize(1200, 1000);
        frame = new QFrame(QQ);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(100, 110, 711, 701));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/qq.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(QQ);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(910, 860, 181, 61));
        QFont font;
        font.setPointSize(13);
        pushButton->setFont(font);

        retranslateUi(QQ);

        QMetaObject::connectSlotsByName(QQ);
    } // setupUi

    void retranslateUi(QDialog *QQ)
    {
        QQ->setWindowTitle(QApplication::translate("QQ", "\346\224\257\344\273\230\347\252\227\345\217\243", nullptr));
        pushButton->setText(QApplication::translate("QQ", "\345\267\262\346\224\257\344\273\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QQ: public Ui_QQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQ_H
