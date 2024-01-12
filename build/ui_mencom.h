/********************************************************************************
** Form generated from reading UI file 'mencom.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENCOM_H
#define UI_MENCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_menCom
{
public:

    void setupUi(QDialog *menCom)
    {
        if (menCom->objectName().isEmpty())
            menCom->setObjectName(QString::fromUtf8("menCom"));
        menCom->resize(400, 300);

        retranslateUi(menCom);

        QMetaObject::connectSlotsByName(menCom);
    } // setupUi

    void retranslateUi(QDialog *menCom)
    {
        menCom->setWindowTitle(QApplication::translate("menCom", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menCom: public Ui_menCom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENCOM_H
