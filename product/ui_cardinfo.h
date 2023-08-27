/********************************************************************************
** Form generated from reading UI file 'cardinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDINFO_H
#define UI_CARDINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_cardinfo
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;
    QTableView *tableView;

    void setupUi(QDialog *cardinfo)
    {
        if (cardinfo->objectName().isEmpty())
            cardinfo->setObjectName(QString::fromUtf8("cardinfo"));
        cardinfo->resize(1940, 1500);
        lineEdit = new QLineEdit(cardinfo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(580, 1410, 281, 51));
        QFont font;
        font.setPointSize(12);
        lineEdit->setFont(font);
        label = new QLabel(cardinfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 1410, 131, 41));
        label->setFont(font);
        pushButton = new QPushButton(cardinfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(980, 1410, 221, 51));
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(cardinfo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1310, 1410, 221, 51));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        frame = new QFrame(cardinfo);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1940, 1500));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/photo/data.jpg)}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 1940, 1301));
        tableView->setFocusPolicy(Qt::NoFocus);
        frame->raise();
        lineEdit->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(cardinfo);

        QMetaObject::connectSlotsByName(cardinfo);
    } // setupUi

    void retranslateUi(QDialog *cardinfo)
    {
        cardinfo->setWindowTitle(QApplication::translate("cardinfo", "\347\224\250\346\210\267\350\265\204\346\226\231\345\272\223", nullptr));
        label->setText(QApplication::translate("cardinfo", "\350\264\246\345\217\267\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("cardinfo", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QApplication::translate("cardinfo", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cardinfo: public Ui_cardinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDINFO_H
