#include "payment.h"
#include "ui_payment.h"
#include "global.h"
payment::payment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::payment)
{
    ui->setupUi(this);
}

payment::~payment()
{
    delete ui;
}

void payment::on_pushButton_clicked()
{
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(rechangeAccount);
    UserDialog* u= new UserDialog;
    sql = QString("update cardinfo set balance = '%1' where account = '%2';").arg(money+Balance).arg(rechangeAccount);
    query.exec(sql);
    QMessageBox::information(this,tr("充值成功"),tr("已成功为您充值%1元!").arg(money),QMessageBox::Ok);
    QString time =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    query.exec(QString("insert into cardrecords(cardid,operationtime,operation,money,"
                       "del) values('%1','%2','%3','%4','%5')").arg(u->cardid).arg(time).arg(0).arg(money).arg(0));
    Balance +=money;
    this->close();
}

void payment::on_pushButton_2_clicked()
{
    RechangeDialog* rc = new RechangeDialog;
    this->close();
    rc->show();
}
