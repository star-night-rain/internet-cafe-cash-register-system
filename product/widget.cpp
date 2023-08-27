#include "widget.h"
#include "ui_widget.h"
#include "global.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(ui->lineEdit));
    ui->lineEdit->setMaxLength(11);
    ui->lineEdit_2->setMaxLength(16);
    ui->radioButton->setChecked(true);
    ui->pushButton->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_2->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 170, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_3->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->lineEdit->setStyleSheet("QLineEdit{background-color:transparent}"//透明
                                          "QLineEdit{border-width:0;border-style:outset}");//无边框
    ui->lineEdit_2->setStyleSheet("QLineEdit{background-color:transparent}"//透明
                                          "QLineEdit{border-width:0;border-style:outset}");//无边框
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButton_clicked()
{
    LoginDialog* dlg = new LoginDialog;
    this->close();
    dlg->show();
}



void Widget::on_pushButton_2_clicked()
{
    QString account = ui->lineEdit->text().trimmed();
    QString password = ui->lineEdit_2->text().trimmed();
    if(account==tr(""))
        QMessageBox::warning(this,tr("登录失败"),tr("账号不能为空！"),QMessageBox::Ok);
    else if(password==tr(""))
        QMessageBox::warning(this,tr("登录失败"),tr("密码不能为空！"),QMessageBox::Ok);
    else if(!ui->radioButton->isChecked()&&!ui->radioButton_2->isChecked())
        QMessageBox::warning(this,tr("登录失败"),tr("请选择登录身份！"),QMessageBox::Ok);
    else {
        QSqlQuery query;
        QString sql = QString("select * from cardinfo where account = '%1';").arg(account);
        if(query.exec(sql)&&query.next())
        {
            int status = query.value("status").toInt();
            if(status==2)
            {
                QMessageBox::warning(this,tr("登录失败"),tr("该账号已注销!"),QMessageBox::Ok);
                return;
            }
            int flag = query.value("id").toInt();
            if(password == query.value("password").toString())
            {
                Account= account;
                if(ui->radioButton->isChecked()&&flag>3)
                {
                    faceRec* f = new faceRec;
                    f->show();

                    QTime t;
                    t.start();
                    while(t.elapsed()<4500)
                        QCoreApplication::processEvents();

                    UserDialog* u = new UserDialog;
                    this->close();
                    u->show();

                }
                else if(flag<=3&&ui->radioButton_2->isChecked())
                {
                    faceRec* f = new faceRec;
                    f->show();

                    QTime t;
                    t.start();
                    while(t.elapsed()<4500)
                        QCoreApplication::processEvents();

                    AdminDialog* a = new AdminDialog;
                    this->close();
                    a->show();
                }
                else
                    QMessageBox::warning(this,tr("信息"),tr("用户名或密码错误"),QMessageBox::Yes);
            }
            else
                QMessageBox::warning(this,tr("信息"),tr("用户名或密码错误"),QMessageBox::Yes);
        }
        else
            QMessageBox::warning(this,tr("信息"),tr("该用户不存在！"),QMessageBox::Yes);
    }
}
