/********************************************************************************
** Form generated from reading UI file 'logoutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOUTDIALOG_H
#define UI_LOGOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LogoutDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QFrame *frame;

    void setupUi(QDialog *LogoutDialog)
    {
        if (LogoutDialog->objectName().isEmpty())
            LogoutDialog->setObjectName(QString::fromUtf8("LogoutDialog"));
        LogoutDialog->resize(608, 725);
        label = new QLabel(LogoutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 210, 271, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setFocusPolicy(Qt::NoFocus);
        pushButton = new QPushButton(LogoutDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 450, 191, 51));
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(LogoutDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 540, 191, 51));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        plainTextEdit = new QPlainTextEdit(LogoutDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 290, 481, 131));
        plainTextEdit->setFont(font);
        plainTextEdit->setFocusPolicy(Qt::NoFocus);
        plainTextEdit->setReadOnly(true);
        frame = new QFrame(LogoutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(230, 40, 151, 141));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/6.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(LogoutDialog);

        QMetaObject::connectSlotsByName(LogoutDialog);
    } // setupUi

    void retranslateUi(QDialog *LogoutDialog)
    {
        LogoutDialog->setWindowTitle(QApplication::translate("LogoutDialog", "\347\224\250\346\210\267\350\207\252\344\270\273\346\263\250\351\224\200\347\241\256\350\256\244", nullptr));
        label->setText(QApplication::translate("LogoutDialog", "\347\224\250\346\210\267\346\263\250\351\224\200\347\241\256\350\256\244", nullptr));
        pushButton->setText(QApplication::translate("LogoutDialog", "\347\241\256\350\256\244\346\263\250\351\224\200", nullptr));
        pushButton_2->setText(QApplication::translate("LogoutDialog", "\345\217\226\346\266\210\346\263\250\351\224\200", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("LogoutDialog", "\350\257\267\347\241\256\350\256\244\346\230\257\345\220\246\346\263\250\351\224\200\350\257\245\350\264\246\345\217\267\357\274\214\347\202\271\345\207\273\347\241\256\345\256\232\346\263\250\351\224\200\345\220\216\357\274\214\350\264\246\345\217\267\345\260\206\346\263\250\351\224\200\357\274\214\346\263\250\351\224\200\346\223\215\344\275\234\345\260\206\344\270\215\350\203\275\346\222\244\351\224\200\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogoutDialog: public Ui_LogoutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOUTDIALOG_H
