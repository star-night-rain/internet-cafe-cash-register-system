/********************************************************************************
** Form generated from reading UI file 'changename.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGENAME_H
#define UI_CHANGENAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChangeName
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QDialog *ChangeName)
    {
        if (ChangeName->objectName().isEmpty())
            ChangeName->setObjectName(QString::fromUtf8("ChangeName"));
        ChangeName->resize(438, 441);
        label = new QLabel(ChangeName);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 80, 191, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        pushButton = new QPushButton(ChangeName);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 400, 141, 41));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(ChangeName);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 270, 171, 61));
        QFont font1;
        font1.setPointSize(15);
        pushButton_2->setFont(font1);
        lineEdit = new QLineEdit(ChangeName);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 180, 251, 41));
        lineEdit->setFont(font);
        label_2 = new QLabel(ChangeName);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 180, 121, 41));
        label_2->setFont(font);

        retranslateUi(ChangeName);

        QMetaObject::connectSlotsByName(ChangeName);
    } // setupUi

    void retranslateUi(QDialog *ChangeName)
    {
        ChangeName->setWindowTitle(QApplication::translate("ChangeName", "\346\230\265\347\247\260\346\233\264\346\224\271", nullptr));
        label->setText(QApplication::translate("ChangeName", "\344\277\256\346\224\271\346\230\265\347\247\260", nullptr));
        pushButton->setText(QApplication::translate("ChangeName", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QApplication::translate("ChangeName", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("ChangeName", "\350\257\267\350\276\223\345\205\245\346\226\260\346\230\265\347\247\260", nullptr));
        label_2->setText(QApplication::translate("ChangeName", "\346\226\260\346\230\265\347\247\260\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeName: public Ui_ChangeName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGENAME_H
