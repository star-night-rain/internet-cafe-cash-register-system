#include "storeuser.h"
#include "ui_storeuser.h"
#include "global.h"
storeUser::storeUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::storeUser)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);

    ui->label_2->setAlignment(Qt::AlignCenter);
    ui->label_4->setAlignment(Qt::AlignCenter);
    ui->label_6->setAlignment(Qt::AlignCenter);
    ui->label_8->setAlignment(Qt::AlignCenter);
    ui->label_10->setAlignment(Qt::AlignCenter);


    QSqlQuery query;
    QString sql = QString("select * from foods where name = '%1';").arg("方便面");
    query.exec(sql);
    query.next();
    int nums = query.value("count").toInt();
    ui->spinBox->setMaximum(nums);

    sql = QString("select * from foods where name = '%1';").arg("火腿肠");
    query.exec(sql);
    query.next();
    nums = query.value("count").toInt();
    ui->spinBox_2->setMaximum(nums);

    sql = QString("select * from foods where name = '%1';").arg("啤酒");
    query.exec(sql);
    query.next();
    nums = query.value("count").toInt();
    ui->spinBox_3->setMaximum(nums);

    sql = QString("select * from foods where name = '%1';").arg("汽水");
    query.exec(sql);
    query.next();
    nums = query.value("count").toInt();
    ui->spinBox_4->setMaximum(nums);

    sql = QString("select * from foods where name = '%1';").arg("面包");
    query.exec(sql);
    query.next();
    nums = query.value("count").toInt();
    ui->spinBox_5->setMaximum(nums);
    ui->pushButton->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");


}

storeUser::~storeUser()
{
    delete ui;
}

void storeUser::on_pushButton_clicked()
{
    QSqlQuery query;
    QString sql;
    int amount = 0;
    if(ui->spinBox)
     {
        amount += ui->spinBox->value()*10;
        sql = QString("select * from foods where name = '%1';").arg("方便面");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count-ui->spinBox->value()).arg("方便面");
        query.exec(sql);
    }
    if(ui->spinBox_2)
     {
        amount += ui->spinBox_2->value()*2;
        qDebug()<<amount    ;
        sql = QString("select * from foods where name = '%1';").arg("火腿肠");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count-ui->spinBox_2->value()).arg("火腿肠");
        query.exec(sql);
    }
    if(ui->spinBox_3)
    {
        amount += ui->spinBox_3->value()*6;
        qDebug()<<amount    ;
        sql = QString("select * from foods where name = '%1';").arg("啤酒");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count-ui->spinBox_3->value()).arg("啤酒");
        query.exec(sql);
    }
    if(ui->spinBox_4)
     {
        amount += ui->spinBox_4->value()*6;
        qDebug()<<amount    ;
        sql = QString("select * from foods where name = '%1';").arg("汽水");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count-ui->spinBox_4->value()).arg("汽水");
        query.exec(sql);
    }
    if(ui->spinBox_5)
     {
        amount += ui->spinBox_5->value()*5;
        qDebug()<<amount    ;
        sql = QString("select * from foods where name = '%1';").arg("面包");
        query.exec(sql);
        query.next();
        int count = query.value("count").toInt();
        sql = QString("update foods set count = '%1' where name = '%2';").arg(count-ui->spinBox_5->value()).arg("面包");
        query.exec(sql);
    }
    sql = QString("select * from cardinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    sql = QString("update cardinfo set balance = '%1' where account = '%2';").arg(Balance-amount).arg(Account);
    query.exec(sql);
    Balance-=amount;
    if(amount!=0)
    {
        this->close();
        QQ* q = new QQ;
        q->show();
    }
}
