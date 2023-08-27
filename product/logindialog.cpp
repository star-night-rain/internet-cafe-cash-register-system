#include "logindialog.h"
#include "ui_logindialog.h"
#include "global.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->lineEdit_2->setMaxLength(11);
    ui->lineEdit_2->setValidator(new QIntValidator(ui->lineEdit_2));
    ui->lineEdit_3->setMaxLength(16);
    ui->lineEdit_4->setMaxLength(16);
    ui->lineEdit_5->setMaxLength(12);
    ui->lineEdit_5->setValidator(new QIntValidator(ui->lineEdit_5));
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    ui->pushButton->setStyleSheet("QPushButton{color:black;background-color:rgb(144,227,255);border-radius:30px;border:10px solid gray}");
    ui->pushButton_2->setStyleSheet("QPushButton{color:black;background-color:rgb(144,227,255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_3->setStyleSheet("QPushButton{color:black;background-color:rgb(144,227,255);border-radius:25px;border:10px solid gray}");
    ui->lineEdit->setStyleSheet("QLineEdit{background-color:transparent}"//透明
                                          "QLineEdit{border-width:0;border-style:outset}");//无边框
    ui->lineEdit_2->setStyleSheet("QLineEdit{background-color:transparent}"//透明
                                          "QLineEdit{border-width:0;border-style:outset}");//无边框
    ui->lineEdit_3->setStyleSheet("QLineEdit{background-color:transparent}"//透明
                                          "QLineEdit{border-width:0;border-style:outset}");//无边框
    ui->lineEdit_4->setStyleSheet("QLineEdit{background-color:transparent}"//透明
                                          "QLineEdit{border-width:0;border-style:outset}");//无边框
    ui->lineEdit_5->setStyleSheet("QLineEdit{background-color:transparent}"//透明
                                          "QLineEdit{border-width:0;border-style:outset}");//无边框
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_2_clicked()
{
    Widget* w = new Widget;
    this->close();
    w->show();
}

void LoginDialog::on_pushButton_clicked()
{
    if(ui->lineEdit->text().trimmed().isEmpty())
   {
       QMessageBox::warning(this,tr("注册失败"),tr("昵称不能为空!"),QMessageBox::Ok);
       return;
   }
     else if(ui->lineEdit_2->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,tr("注册失败"),tr("账号不能为空!"),QMessageBox::Ok);
        return;
    }
    else if(ui->lineEdit_3->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,tr("注册失败"),tr("密码不能为空!"),QMessageBox::Ok);
        return;
    }
    else if(ui->lineEdit_4->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,tr("注册失败"),tr("请再次输入密码!"),QMessageBox::Ok);
        return;
    }
    else if(ui->lineEdit_5->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,tr("注册失败"),tr("初始余额不能为空!"),QMessageBox::Ok);
        return;
    }
    QString name = ui->lineEdit->text().trimmed();
    QString account = ui->lineEdit_2->text().trimmed();
    QString password_1 = ui->lineEdit_3->text().trimmed();
    QString password_2 = ui->lineEdit_4->text().trimmed();
    if(password_1.compare(password_2)!=0)
    {
         QMessageBox::warning(this,tr("注册失败"),tr("请确保两次输入的密码相同!"),QMessageBox::Ok);
         return;
    }
    QString str = ui->lineEdit_5->text().trimmed();
    float balance = str.toFloat();
    if(balance<=0)
    {
        QMessageBox::warning(this,tr("注册失败"),tr("初始余额必须大于0!"),QMessageBox::Ok);
        return;
    }
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(account);
    QDateTime currentTime = QDateTime::currentDateTime();
    QString time = currentTime.toString("yyyy-MM-dd hh:mm:ss");
    QDateTime endtime = currentTime.addYears(10);
    QString end = endtime.toString("yyyy-MM-dd hh:mm:ss");

    if(query.exec(sql))
    {
        if(query.next())
            QMessageBox::warning(this,tr("注册失败"),tr("该账号已被注册！"),QMessageBox::Ok);
        else
        {
            query.exec(QString("insert into cardinfo(name,account,password,type,status,"
                               "starttime,endtime,lastuse,usecount,balance,del) "
                               "values('%1','%2','%3','%4','%5','%6','%7','%8','%9','%10','%11')").
                                arg(name).arg(account).arg(password_1).arg(0).arg(0).arg(time).arg(end).
                                arg(time).arg(0).arg(balance).arg(0));
            if(query.exec(sql)){
                      QMessageBox::information(this,"成功","注册成功！");
                      Widget* w = new Widget;
                      this->close();
                      w->show();
             }
            else
            {
                      QMessageBox::warning(this,"失败","注册失败！",QMessageBox::Ok);

            }
        }
    }
    else
        QMessageBox::warning(this,tr("注册失败"),tr("请稍后重试！"),QMessageBox::Ok);
}
