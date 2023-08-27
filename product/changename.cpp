#include "changename.h"
#include "ui_changename.h"
#include "global.h"
ChangeName::ChangeName(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeName)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    ui->lineEdit->setMaxLength(10);
}

ChangeName::~ChangeName()
{
    delete ui;
}

void ChangeName::on_pushButton_clicked()
{
    SelectDialog* s =new SelectDialog;
    this->close();
    s->show();
}

void ChangeName::on_pushButton_2_clicked()
{
    QString newName = ui->lineEdit->text().trimmed();
    if(newName.isEmpty())
    {
        QMessageBox::warning(this,tr("修改昵称失败"),tr("昵称不能为空"),QMessageBox::Ok);
        return;
    }
    QSqlQuery query;
    QString sql = QString("select * from userinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    QString name = query.value("name").toString();
    if(newName.compare(name)==0)
    {
         QMessageBox::warning(this,tr("请不要使用原昵称"),tr("请确保输入的新昵称与原昵称不同！"),QMessageBox::Ok);
         return;
    }
    sql = QString("update userinfo set name = '%1' where account = '%2';").arg(newName).arg(Account);
    if(query.exec(sql))
     {
        int flag = QMessageBox::information(this,tr("修改昵称成功"),tr("即将返回用户界面"),QMessageBox::Yes|QMessageBox::No);
        if(flag==QMessageBox::Ok)
         {
               UserDialog* u =new UserDialog;
               this->close();
               u->show();
           }
        else {
            SelectDialog* s = new SelectDialog;
            this->close();
            s->show();
        }
    }
    else {
         QMessageBox::warning(this,tr("修改昵称失败"),tr("请重新尝试！"),QMessageBox::Ok);
    }
}
