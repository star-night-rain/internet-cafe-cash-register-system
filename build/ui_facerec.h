/********************************************************************************
** Form generated from reading UI file 'facerec.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEREC_H
#define UI_FACEREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_faceRec
{
public:
    QProgressBar *progressBar;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_camera;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *faceRec)
    {
        if (faceRec->objectName().isEmpty())
            faceRec->setObjectName(QString::fromUtf8("faceRec"));
        faceRec->resize(898, 606);
        progressBar = new QProgressBar(faceRec);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(140, 140, 641, 51));
        progressBar->setValue(24);
        verticalLayoutWidget = new QWidget(faceRec);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 220, 711, 361));
        verticalLayout_camera = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_camera->setObjectName(QString::fromUtf8("verticalLayout_camera"));
        verticalLayout_camera->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(faceRec);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 60, 611, 61));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(faceRec);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 60, 591, 51));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(faceRec);

        QMetaObject::connectSlotsByName(faceRec);
    } // setupUi

    void retranslateUi(QDialog *faceRec)
    {
        faceRec->setWindowTitle(QApplication::translate("faceRec", "\350\272\253\344\273\275\351\252\214\350\257\201", nullptr));
        label->setText(QApplication::translate("faceRec", "\344\272\272\350\204\270\350\257\206\345\210\253\344\270\255", nullptr));
        label_2->setText(QApplication::translate("faceRec", "\344\272\272\350\204\270\350\257\206\345\210\253\345\267\262\351\200\232\350\277\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class faceRec: public Ui_faceRec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEREC_H
