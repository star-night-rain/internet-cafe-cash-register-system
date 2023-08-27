/********************************************************************************
** Form generated from reading UI file 'topup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPUP_H
#define UI_TOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_topUp
{
public:

    void setupUi(QDialog *topUp)
    {
        if (topUp->objectName().isEmpty())
            topUp->setObjectName(QString::fromUtf8("topUp"));
        topUp->resize(400, 300);

        retranslateUi(topUp);

        QMetaObject::connectSlotsByName(topUp);
    } // setupUi

    void retranslateUi(QDialog *topUp)
    {
        topUp->setWindowTitle(QApplication::translate("topUp", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class topUp: public Ui_topUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPUP_H
