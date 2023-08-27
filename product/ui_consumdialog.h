/********************************************************************************
** Form generated from reading UI file 'consumdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSUMDIALOG_H
#define UI_CONSUMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ConsumDialog
{
public:

    void setupUi(QDialog *ConsumDialog)
    {
        if (ConsumDialog->objectName().isEmpty())
            ConsumDialog->setObjectName(QString::fromUtf8("ConsumDialog"));
        ConsumDialog->resize(400, 300);

        retranslateUi(ConsumDialog);

        QMetaObject::connectSlotsByName(ConsumDialog);
    } // setupUi

    void retranslateUi(QDialog *ConsumDialog)
    {
        ConsumDialog->setWindowTitle(QApplication::translate("ConsumDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsumDialog: public Ui_ConsumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMDIALOG_H
