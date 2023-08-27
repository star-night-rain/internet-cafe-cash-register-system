#include "userdialog.h"
#include "ui_userdialog.h"
#include "global.h"

UserDialog::UserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    ui->pushButton_4->setEnabled(false);
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    type = query.value("type").toInt();
    QString name = query.value("name").toString();
    if(type)
        ui->lineEdit_4->setText("您是VIP会员可享受八折优惠!");
    else
        ui->lineEdit_4->setText("充值会员可享受八折优惠!");
    Balance = query.value("balance").toFloat();
    Password = query.value("password").toString();;
    cardid = query.value("id").toInt();
    timer = new QTimer(this);
    timer_2= new QTimer(this);
    ui->label_6->setText(name);
    ui->label_6->setAlignment(Qt::AlignCenter);
    ui->label_7->setText(Account);
    ui->label_7->setAlignment(Qt::AlignCenter);
    ui->label->setAlignment(Qt::AlignCenter);
    QTimer* timer_3 =new QTimer;
    connect(timer_3, SIGNAL(timeout()), this, SLOT(Judge()));
    timer_3->start(100);

    ui->pushButton->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_2->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_3->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 170, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_4->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 170, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_13->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_7->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_11->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_5->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_8->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_6->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_10->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_9->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_14->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
}

UserDialog::~UserDialog()
{
    delete ui;
}

void UserDialog::Judge()
{
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    int status = query.value("status").toInt();
    QString password = query.value("password").toString();
    if(password!=Password||status==2)
        this->close();
}

void UserDialog::closeEvent(QCloseEvent * event)
{



}

void UserDialog::update()
{
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    int times = query.value("usecount").toInt();
    sql = QString("update cardinfo set usecount = '%1' where account = '%2';").arg(times+1).arg(Account);
    query.exec(sql);
    sql = QString("update cardinfo set balance = '%1' where account = '%2';").arg(Balance-cost).arg(Account);
    query.exec(sql);
    query.clear();
    query.prepare("update cardinfo set status = ? where account = ?");
    query.addBindValue(0);
    query.addBindValue(Account);
    query.exec();

    QString str = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    sql = QString("update cardinfo set lastuse = '%1' where account = '%2';").arg(str).arg(Account);
    query.exec(sql);

    sql = QString("update cardinfo set endtime = '%1' where account = '%2';").
            arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).arg(Account);
    query.exec();
    qDebug()<<cardid<<" "<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    qDebug()<<cost<<" "<<currentTime.toString("yyyy-MM-dd hh:mm:ss");
    sql = QString("update billings set endtime = '%1',amount = '%2',status = '%3' where starttime = '%4'"
                  "and cardid = '%5';").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).arg(cost).arg(1).
                    arg(currentTime.toString("yyyy-MM-dd hh:mm:ss")).arg(this->cardid);
    if(query.exec(sql))
    qDebug()<<"Sdsd";
}

void UserDialog::timerUpdate(){

    QDateTime endTime=  QDateTime::currentDateTime();
    QString str =QDateTime::fromMSecsSinceEpoch(endTime.toMSecsSinceEpoch() - currentTime.toMSecsSinceEpoch()).toUTC().toString("hh:mm:ss");
    ui->lineEdit_2->setText(str);

}

void UserDialog::costUpdate()
{
    QDateTime endTime=  QDateTime::currentDateTime();
    QString str =QDateTime::fromMSecsSinceEpoch(endTime.toMSecsSinceEpoch() - currentTime.toMSecsSinceEpoch()).toUTC().toString("ss");
    cost = str.toInt()*8;
    if(this->type==1)
        cost*=0.8;
    ui->lineEdit_3->setText(QString::number(cost));
    if(cost>=Balance)
    {
        update();
        //timerUpdate();            ?????????????
        timer->stop();
        timer_2->stop();
        ui->pushButton_3->setEnabled(false);
        ui->pushButton_4->setEnabled(false);
        ui->lineEdit_4->setText("余额不足！请及时充值！");
        int symbol = QMessageBox::warning(this,tr("网络已断开！"),tr("余额不足！请及时充值！"),QMessageBox::Yes | QMessageBox::Cancel);
        if(symbol == QMessageBox::Cancel)
            this->close();
    }
}



void UserDialog::on_pushButton_3_clicked()
{
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    int status = query.value("status").toInt();
    if(status)
    {
        QMessageBox::warning(this,tr("上机失败"),tr("当前账户正在别处使用<br>"
                                                "无法再次上机!"),QMessageBox::Ok);
        return;
    }
    if(Balance<=0)
    {
        QMessageBox::warning(this,tr("上机失败"),tr("当前账户余额不足！"),QMessageBox::Ok);
        return;
    }
    QMessageBox box(QMessageBox::Information, tr("消费模式"), tr("请先选择消费模式"),QMessageBox::Yes
                    | QMessageBox::No | QMessageBox::Ok |QMessageBox::Open);
   // box.setStandardButtons(QMessageBox::Yes | QMessageBox::Apply | QMessageBox::Ok);
    box.setButtonText(QMessageBox::Yes, QString("普通消费"));
    box.setButtonText(QMessageBox::Ok, QString("包夜"));
    box.setButtonText(QMessageBox::Open, QString("包天"));
    box.setButtonText(QMessageBox::No, QString(" 退出"));
    int result = box.exec();
    int flag = 0;
    if(result ==QMessageBox::Ok)
    {
        QString a = QDateTime::currentDateTime().toString("hh");
        int h = a.toInt();
        if(h<=7||h>=22)
        {
            cost = 55;
            if(type)
                cost*=0.8;
            if(Balance<cost)
            {
                QMessageBox::warning(this,tr("余额不足"),tr("包夜需要%1元！<br>"
                                                        "您当前的余额为%2元").arg(cost).arg(Balance),QMessageBox::Ok);
                return;
            }
            flag = 1;
        }
        else {
            QMessageBox::warning(this,"失败","当前不属于包夜时间段",QMessageBox::Ok);
            return;
        }
    }
    else if(result ==QMessageBox::Open)
    {
        cost = 150;
        if(type)
            cost*=0.8;
        if(Balance<cost)
        {
            QMessageBox::warning(this,tr("余额不足"),tr("包天需要%1元！<br>"
                                                    "您当前的余额为%2元").arg(cost).arg(Balance),QMessageBox::Ok);
            return;
        }
        flag = 2;
    }
    else if(result == QMessageBox::No)
        return;
    query.clear();
    query.prepare("update cardinfo set status = ? where account = ?");
    query.addBindValue(1);
    query.addBindValue(Account);
    query.exec();

    currentTime =  QDateTime::currentDateTime();
    QString time = currentTime.toString("yyyy-MM-dd hh:mm:ss"); //???????????????????????????????
    if(query.exec(QString("insert into billings(cardid,starttime,endtime,"
                       "amount,status,del) values('%1','%2','%3','%4','%5','%6')").
                        arg(cardid).arg(time).arg("").arg(0).arg(0).arg(0)))

    timer_2 = new QTimer (this);
    if(flag==0)
    {
        connect(timer_2, SIGNAL(timeout()), this, SLOT(costUpdate()));
        timer_2->start(10);
    }
    else
        ui->lineEdit_3->setText(QString::number(cost));



    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
    timer->start(10);

    QString str = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    ui->lineEdit->setText(str);

    sql = QString("update cardinfo set lastuse = '%1' where account = '%2';").arg(str).arg(Account);
    query.exec(sql);

    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(true);
}

void UserDialog::on_pushButton_4_clicked()
{
    if(timer->isActive())
    {
        update();
        timer->stop();
        if(timer_2->isActive())
            timer_2->stop();
        QMessageBox::information(this,tr("下机提醒"),tr("您已下机<br>您本次共消费%1元").arg(cost),QMessageBox::Ok);
    }
    Widget* w=new Widget;
    this->close();
    w->show();
}

void UserDialog::on_pushButton_5_clicked()
{

    QMessageBox::information(this,tr("查询成功！"),tr("您的当前余额为%1元！").arg(Balance));
}

void UserDialog::on_pushButton_6_clicked()
{
    if(this->type)
    {
        QMessageBox::information(this,tr("办理失败"),tr("您已是VIP会员<br>无需重复办理"),QMessageBox::Ok);
        return;
    }
    int flag = QMessageBox::information(this,tr("会员详细"),tr("会员福利多多！<br>"
                                         "上网享受八折优惠！<br>"
                                         "充值享受七点五折优惠!<br>"
                                         "是否花费%1元开通VIP会员？").arg(1000),QMessageBox::Yes|QMessageBox::No);
    if(flag==QMessageBox::Yes)
    {
        QSqlQuery query;
        if(Balance>=1000)
        {
            ui->lineEdit_4->setText("您是VIP会员可享受八折优惠!");
            QString sql = QString("update cardinfo set balance = '%1',type = '%2' where account = '%3';").arg(Balance-1000).arg(1).arg(Account);
            Balance -=1000;
            this->type = 1;
            query.exec(sql);
            QMessageBox::warning(this,tr("成功"),tr("开通会员成功！"),QMessageBox::Ok);
        }
        else
            QMessageBox::warning(this,tr("失败"),tr("您的余额不足！请先充值！"),QMessageBox::Ok);
    }
}

void UserDialog::on_pushButton_9_clicked()
{
    LogoutDialog* lo = new LogoutDialog;
  //  this->close();
    lo->show();
}


void UserDialog::on_pushButton_10_clicked()
{
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    int status = query.value("status").toInt();
    if(status)
    {
        QMessageBox::warning(this,tr("退费失败"),tr("该账号正在使用!"),QMessageBox::Ok);
        return;
    }
    if(Balance<0)
    {
        QMessageBox::warning(this,tr("退费失败"),tr("该账号目前处于欠费状态!"),QMessageBox::Ok);
        return;
    }
    int flag = QMessageBox::warning(this,tr("申请退款"),tr("确认退款吗?"),QMessageBox::Yes | QMessageBox::No);
    if(flag==QMessageBox::Yes)
    {
        sql = QString("update cardinfo set balance = 0 where account = '%1';").arg(Account);
        query.exec(sql);

        QMessageBox::information(this,tr("退款成功"),tr("已成功为您退款%1元").arg(Balance),QMessageBox::Ok);
        QString time =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        query.exec(QString("insert into cardrecords(cardid,operationtime,operation,money,"
                           "del) values('%1','%2','%3','%4','%5')").arg(cardid).arg(time).arg(1).arg(Balance).arg(0));
        Balance = 0;

    }
}

void UserDialog::on_pushButton_8_clicked()
{
    ChangePassword* cp = new ChangePassword;
   // this->close();
    cp->show();
}

void UserDialog::on_pushButton_7_clicked()
{
    RechangeDialog* re =new RechangeDialog;
 //   this->close();
    re->show();
}

void UserDialog::on_pushButton_clicked()
{
    QMessageBox::information(this,tr("收费标准"),tr("普通收费标准<br>"
                                                "全天每小时8元<br>"
                                                "包夜标准<br>"
                                                "22-7点一共55元<br>"
                                                "包天标准<br>"
                                                "24小时一共150元<br><br>"
                                                "温馨提示<br>"
                                                "不足一小时按一小时收费<br>"
                                                "VIP会员可享八折优惠！"),QMessageBox::Ok);
}

void UserDialog::on_pushButton_2_clicked()
{
    QMessageBox::information(this,tr("帮助"),tr("温馨提示<br>上网过程中如果遇到任何问题请直接联系管理人员！"),QMessageBox::Ok);
}



void UserDialog::on_pushButton_14_clicked()
{
    Chat* c = new Chat;
    c->show();
}

void UserDialog::on_pushButton_11_clicked()
{
    storeUser* s = new storeUser;
    s->show();
}
