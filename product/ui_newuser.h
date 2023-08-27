/********************************************************************************
** Form generated from reading UI file 'newuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSER_H
#define UI_NEWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_newUser
{
public:

    void setupUi(QDialog *newUser)
    {
        if (newUser->objectName().isEmpty())
            newUser->setObjectName(QString::fromUtf8("newUser"));
        newUser->resize(400, 300);

        retranslateUi(newUser);

        QMetaObject::connectSlotsByName(newUser);
    } // setupUi

    void retranslateUi(QDialog *newUser)
    {
        newUser->setWindowTitle(QApplication::translate("newUser", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newUser: public Ui_newUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSER_H
