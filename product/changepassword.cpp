#include "changepassword.h"
#include "ui_changepassword.h"
#include "global.h"
ChangePassword::ChangePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePassword)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    ui->lineEdit->setMaxLength(16);
    ui->lineEdit_2->setMaxLength(16);
    ui->lineEdit_3->setMaxLength(16);
    ui->pushButton->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_2->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
}

ChangePassword::~ChangePassword()
{
    delete ui;
}

void ChangePassword::on_pushButton_clicked()
{
    this->close();
}

void ChangePassword::on_pushButton_2_clicked()
{
    QString oldPassword = ui->lineEdit->text().trimmed();
    QString newPassword_1 = ui->lineEdit_2->text().trimmed();
    QString newPassword_2 = ui->lineEdit_3->text().trimmed();
    if(oldPassword.isEmpty())
    {
        QMessageBox::warning(this,tr("修改密码失败"),tr("请输入原密码！"),QMessageBox::Ok);
        return;
    }
    else if(newPassword_1.isEmpty())
    {
        QMessageBox::warning(this,tr("修改密码失败"),tr("请设置新密码！"),QMessageBox::Ok);
        return;
    }
    else if(newPassword_2.isEmpty())
    {
        QMessageBox::warning(this,tr("修改密码失败"),tr("请再次输入新密码！"),QMessageBox::Ok);
        return;
    }
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    QString password = query.value("password").toString();
    int status = query.value("status").toInt();
    if(status)
    {
        QMessageBox::warning(this,tr("修改密码失败"),tr("该账号正在上机<br>请先下机"),QMessageBox::Ok);
        return;
    }
    if(oldPassword.compare(password)!=0)
    {
        QMessageBox::warning(this,tr("原密码错误"),tr("请确保输入的原密码是正确的！"),QMessageBox::Ok);
        return;
    }
    else if(newPassword_1.compare(newPassword_2)!=0)
    {
        QMessageBox::warning(this,tr("两次输入的新密码不一致"),tr("请确保两次输入的新密码一致！"),QMessageBox::Ok);
        return;
    }
    else if(oldPassword.compare(newPassword_1)==0)
    {
        QMessageBox::warning(this,tr("请不要使用旧密码"),tr("请保证新密码与原密码不同！"),QMessageBox::Ok);
        return;
    }
    sql = QString("update cardinfo set password = '%1' where account = '%2';").arg(newPassword_1).arg(Account);
    if(query.exec(sql))
     {   if(QMessageBox::information(this,tr("修改密码成功"),tr("请重新登录！"),QMessageBox::Ok)==QMessageBox::Ok)
        {
            Widget* w =new Widget;
            this->close();
            w->show();
        }
    }
    else {
            QMessageBox::warning(this,tr("修改密码失败"),tr("请重新尝试！"),QMessageBox::Ok);
        }
}
