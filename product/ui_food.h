/********************************************************************************
** Form generated from reading UI file 'food.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOOD_H
#define UI_FOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_food
{
public:

    void setupUi(QDialog *food)
    {
        if (food->objectName().isEmpty())
            food->setObjectName(QString::fromUtf8("food"));
        food->resize(400, 300);

        retranslateUi(food);

        QMetaObject::connectSlotsByName(food);
    } // setupUi

    void retranslateUi(QDialog *food)
    {
        food->setWindowTitle(QApplication::translate("food", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class food: public Ui_food {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOOD_H
