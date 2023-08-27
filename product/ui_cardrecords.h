/********************************************************************************
** Form generated from reading UI file 'cardrecords.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDRECORDS_H
#define UI_CARDRECORDS_H

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

class Ui_cardrecords
{
public:
    QFrame *frame;
    QTableView *tableView_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *cardrecords)
    {
        if (cardrecords->objectName().isEmpty())
            cardrecords->setObjectName(QString::fromUtf8("cardrecords"));
        cardrecords->resize(2000, 1500);
        frame = new QFrame(cardrecords);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 2000, 1500));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/photo/data.jpg)}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableView_2 = new QTableView(frame);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(370, 270, 1275, 951));
        tableView_2->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1030, 1410, 221, 51));
        QFont font;
        font.setPointSize(12);
        pushButton_3->setFont(font);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1310, 1410, 221, 51));
        pushButton_4->setFont(font);
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 1410, 131, 51));
        label->setFont(font);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(630, 1410, 331, 51));
        lineEdit->setFont(font);

        retranslateUi(cardrecords);

        QMetaObject::connectSlotsByName(cardrecords);
    } // setupUi

    void retranslateUi(QDialog *cardrecords)
    {
        cardrecords->setWindowTitle(QApplication::translate("cardrecords", "\345\205\205\345\200\274\347\263\273\347\273\237", nullptr));
        pushButton_3->setText(QApplication::translate("cardrecords", "\346\237\245\350\257\242", nullptr));
        pushButton_4->setText(QApplication::translate("cardrecords", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
        label->setText(QApplication::translate("cardrecords", "\350\264\246\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cardrecords: public Ui_cardrecords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDRECORDS_H
