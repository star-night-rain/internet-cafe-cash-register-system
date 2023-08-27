/********************************************************************************
** Form generated from reading UI file 'daysail.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAYSAIL_H
#define UI_DAYSAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_daySail
{
public:

    void setupUi(QDialog *daySail)
    {
        if (daySail->objectName().isEmpty())
            daySail->setObjectName(QString::fromUtf8("daySail"));
        daySail->resize(400, 300);

        retranslateUi(daySail);

        QMetaObject::connectSlotsByName(daySail);
    } // setupUi

    void retranslateUi(QDialog *daySail)
    {
        daySail->setWindowTitle(QApplication::translate("daySail", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class daySail: public Ui_daySail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAYSAIL_H
