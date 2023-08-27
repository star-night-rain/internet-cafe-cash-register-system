#include "rechangedialog.h"
#include "ui_rechangedialog.h"
#include "global.h"
RechangeDialog::RechangeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RechangeDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    ui->lineEdit_2->close();
    ui->pushButton_8->close();
    ui->lineEdit->setMaxLength(11);
    ui->lineEdit->setValidator(new QIntValidator(ui->lineEdit));
    ui->lineEdit_2->setMaxLength(12);
    ui->lineEdit_2->setValidator(new QIntValidator(1,999999999999,this));
    ui->lineEdit->setText(Account);

    ui->pushButton->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_2->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_3->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_4->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_5->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_6->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_7->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_8->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 170, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_9->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
}

RechangeDialog::~RechangeDialog()
{
    delete ui;
}

void RechangeDialog::rechange(int x)
{
    payment* p = new payment;
    p->money = x;
    p->rechangeAccount = ui->lineEdit->text().trimmed();
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(p->rechangeAccount);
    if(query.exec(sql)&&query.next())
    {
        int flag = QMessageBox::information(this,"充值确认",tr("确定要为该账号充值%1元吗?").arg(x),QMessageBox::Yes|QMessageBox::No);
        if(flag==QMessageBox::Yes)
        {

            p->show();
            this->close();
        }
    }
    else {
        QMessageBox::warning(this,tr("该账号不存在"),tr("请输入正确的账号！"),QMessageBox::Ok);
    }
}

void RechangeDialog::on_pushButton_9_clicked()
{
    this->close();

}

void RechangeDialog::on_pushButton_7_clicked()
{
    ui->lineEdit_2->show();
    ui->pushButton_8->show();
}

void RechangeDialog::on_pushButton_8_clicked()
{
    int money = ui->lineEdit_2->text().trimmed().toInt();
    rechange(money);
}

void RechangeDialog::on_pushButton_clicked()
{
    rechange(10);
}

void RechangeDialog::on_pushButton_2_clicked()
{
    rechange(30);
}

void RechangeDialog::on_pushButton_3_clicked()
{
    rechange(50);
}

void RechangeDialog::on_pushButton_4_clicked()
{
    rechange(100);
}

void RechangeDialog::on_pushButton_5_clicked()
{
    rechange(200);
}

void RechangeDialog::on_pushButton_6_clicked()
{
    rechange(500);
}
