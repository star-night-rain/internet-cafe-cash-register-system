#include "qq.h"
#include "ui_qq.h"

QQ::QQ(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QQ)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
}

QQ::~QQ()
{
    delete ui;
}


void QQ::on_pushButton_clicked()
{
    this->close();
}
