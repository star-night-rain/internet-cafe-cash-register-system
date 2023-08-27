#include "consumdialog.h"
#include "ui_consumdialog.h"

ConsumDialog::ConsumDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsumDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
}

ConsumDialog::~ConsumDialog()
{
    delete ui;
}
