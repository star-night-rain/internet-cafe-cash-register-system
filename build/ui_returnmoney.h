/********************************************************************************
** Form generated from reading UI file 'returnmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNMONEY_H
#define UI_RETURNMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_returnMoney
{
public:

    void setupUi(QDialog *returnMoney)
    {
        if (returnMoney->objectName().isEmpty())
            returnMoney->setObjectName(QString::fromUtf8("returnMoney"));
        returnMoney->resize(400, 300);

        retranslateUi(returnMoney);

        QMetaObject::connectSlotsByName(returnMoney);
    } // setupUi

    void retranslateUi(QDialog *returnMoney)
    {
        returnMoney->setWindowTitle(QApplication::translate("returnMoney", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class returnMoney: public Ui_returnMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNMONEY_H
