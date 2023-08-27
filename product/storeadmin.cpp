#include "storeadmin.h"
#include "ui_storeadmin.h"

storeAdmin::storeAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::storeAdmin)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);

    ui->label_21->setAlignment(Qt::AlignCenter);
    ui->label_23->setAlignment(Qt::AlignCenter);
    ui->label_25->setAlignment(Qt::AlignCenter);
    ui->label_26->setAlignment(Qt::AlignCenter);
    ui->label_28->setAlignment(Qt::AlignCenter);


    ui->pushButton_3->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 170, 255);border-radius:25px;border:10px solid gray}");


}

storeAdmin::~storeAdmin()
{
    delete ui;
}

void storeAdmin::on_pushButton_3_clicked()
{
    QSqlQuery query;
    QString sql;
    int amount = 0;
    if(ui->spinBox_13)
     {
        amount += ui->spinBox_13->value()*10;
        sql = QString("select * from foods where name = '%1';").arg("方便面");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count+ui->spinBox_13->value()).arg("方便面");
        query.exec(sql);
    }
    if(ui->spinBox_11)
     {
        amount += ui->spinBox_11->value()*2;
        sql = QString("select * from foods where name = '%1';").arg("火腿肠");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count+ui->spinBox_11->value()).arg("火腿肠");
        query.exec(sql);
    }
    if(ui->spinBox_12)
    {
        amount += ui->spinBox_12->value()*6;
        sql = QString("select * from foods where name = '%1';").arg("啤酒");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count+ui->spinBox_12->value()).arg("啤酒");
        query.exec(sql);
    }
    if(ui->spinBox_15)
     {
        amount += ui->spinBox_15->value()*6;
        sql = QString("select * from foods where name = '%1';").arg("汽水");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count+ui->spinBox_15->value()).arg("汽水");
        query.exec(sql);
    }
    if(ui->spinBox_14)
     {
        amount += ui->spinBox_14->value()*5;
        sql = QString("select * from foods where name = '%1';").arg("面包");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count+ui->spinBox_14->value()).arg("面包");
        query.exec(sql);
    }
    if(amount)
    {
        QMessageBox::information(this,"进货成功","订单已下达<br>请耐心等待",QMessageBox::Ok);
        this->close();
    }
}
