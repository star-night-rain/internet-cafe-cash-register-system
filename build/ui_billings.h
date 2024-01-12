/********************************************************************************
** Form generated from reading UI file 'billings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLINGS_H
#define UI_BILLINGS_H

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

class Ui_billings
{
public:
    QFrame *frame;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *billings)
    {
        if (billings->objectName().isEmpty())
            billings->setObjectName(QString::fromUtf8("billings"));
        billings->resize(2000, 1500);
        frame = new QFrame(billings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 2000, 1500));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image: url(:/photo/data.jpg)}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(340, 270, 1371, 951));
        tableView->setFocusPolicy(Qt::NoFocus);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1030, 1370, 221, 51));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(billings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1340, 1370, 221, 51));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        lineEdit = new QLineEdit(billings);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(660, 1370, 281, 51));
        lineEdit->setFont(font);
        label = new QLabel(billings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(520, 1380, 131, 41));
        label->setFont(font);

        retranslateUi(billings);

        QMetaObject::connectSlotsByName(billings);
    } // setupUi

    void retranslateUi(QDialog *billings)
    {
        billings->setWindowTitle(QApplication::translate("billings", "\346\266\210\350\264\271\347\263\273\347\273\237", nullptr));
        pushButton->setText(QApplication::translate("billings", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QApplication::translate("billings", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
        label->setText(QApplication::translate("billings", "\350\264\246\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class billings: public Ui_billings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLINGS_H
