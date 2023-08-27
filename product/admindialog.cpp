#include "admindialog.h"
#include "ui_admindialog.h"
#include <QMessageBox>
#include "global.h"
AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);

    model = new QSqlTableModel(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
    d=new daySail;
    f = new food;
    u = new newUser;
    t = new topUp;
    tm = new returnMoney;
    m = new menber;
    mc = new menCom;
    ui->scrollArea->setWidget(d);
    ui->scrollArea_2->setWidget(f);
    ui->scrollArea_3->setWidget(u);
    ui->scrollArea_4->setWidget(t);
    ui->scrollArea_5->setWidget(tm);
    ui->scrollArea_6->setWidget(m);
    ui->scrollArea_7->setWidget(mc);
    timer1  = new QTimer;
    timer2  = new QTimer;
    timer3  = new QTimer;
    connect(timer1, SIGNAL(timeout()), this, SLOT(amountUpdate()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(incomeUpdate1()));
    connect(timer3, SIGNAL(timeout()), this, SLOT(incomeUpdate2()));
    timer1->start(100);
    timer2->start(3000);
    timer3->start(2000);

    ui->label_3->setText("散客消费\n"+QString::number(qrand()%10000+10));
    ui->label_4->setText("会员消费\n"+QString::number(qrand()%20000+100));

    ui->label_2->setAlignment(Qt::AlignCenter);
    ui->label_3->setAlignment(Qt::AlignCenter);
    ui->label_4->setAlignment(Qt::AlignCenter);

    ui->boardBt->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->deplaneBt->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    on_boardBt_clicked();
}

AdminDialog::~AdminDialog()
{
    timer1->stop();
    timer2->stop();
    timer3->stop();
    delete ui;
}

void AdminDialog::amountUpdate()
{
    QSqlQuery query;
    query.exec("select * from billings");
    int sum = 0;
    while(query.next())
    {
        sum+=query.value(4).toInt();
    }
    ui->label_2->setText("综合收入\n"+QString::number(sum));
}

void AdminDialog::incomeUpdate1()
{
   ui->label_3->setText("散客消费\n"+QString::number(qrand()%10000+10));
}

void AdminDialog::incomeUpdate2()
{
    ui->label_4->setText("会员消费\n"+QString::number(qrand()%20000+100));

}

void AdminDialog::contextMenuEvent(QContextMenuEvent *event)
{
    Q_UNUSED(event);
    QMenu menu;
    //添加右键菜单的选项
    QAction* action1 = menu.addAction("查看商城系统");
    QAction* action2 =menu.addAction("查询用户资料");
    QAction* action3 =menu.addAction("查看消费系统");
    QAction* action4 =menu.addAction("查看充值系统");
    QAction* action5 =menu.addAction("星际Chat");
    QAction* action6 =menu.addAction("退出");
    connect(action1, SIGNAL(triggered(bool)), this, SLOT(openStore()));
    connect(action2, SIGNAL(triggered(bool)), this, SLOT(openCardInfo()));
    connect(action3, SIGNAL(triggered(bool)), this, SLOT(openBillings()));
    connect(action4, SIGNAL(triggered(bool)), this, SLOT(openCardRecords()));
    connect(action5, SIGNAL(triggered(bool)), this, SLOT(openChat()));
    connect(action6, SIGNAL(triggered(bool)), this, SLOT(myclose()));
    //显示menu菜单并设置其显示位置为鼠标位置
    menu.exec(QCursor::pos());
}

void AdminDialog::openCardInfo()
{
    cardinfo* ci =new cardinfo();
    ci->show();
}

void AdminDialog::openBillings()
{
    billings* b = new billings;
    b->show();
}

void AdminDialog::openCardRecords()
{
    cardrecords* cr = new cardrecords;
    cr->show();
}

void AdminDialog::openStore()
{
    storeAdmin* sa = new storeAdmin;
    sa->show();
}

void AdminDialog::openChat()
{
    adminChat* ac = new adminChat;
    ac->show();
}

void AdminDialog::myclose()
{
    this->close();
}



void AdminDialog::on_boardBt_clicked()
{
    model->setTable("cardinfo");
    model->select();
    model->removeColumn(11);
    model->removeColumn(10);
    model->removeColumn(9);
    model->removeColumn(8);
    model->removeColumn(7);
    model->removeColumn(5);
    model->removeColumn(3);
    model->removeColumn(0);
    ui->tableView_2->setModel(model);
    ui->tableView_2->setColumnWidth(3, 280);
    model->setFilter(QString("status = 1 and del = 0"));
    model->setHeaderData(0, Qt::Horizontal, "昵称");
    model->setHeaderData(1, Qt::Horizontal, "账号");
    model->setHeaderData(2, Qt::Horizontal, "账号类型");
    model->setHeaderData(3, Qt::Horizontal, "上机时间");
    model->select();


}

void AdminDialog::on_deplaneBt_clicked()
{
    model->setTable("cardinfo");
    model->select();
    model->removeColumn(11);
    model->removeColumn(10);
    model->removeColumn(9);
    model->removeColumn(8);
    model->removeColumn(7);
    model->removeColumn(5);
    model->removeColumn(3);
    model->removeColumn(0);
    ui->tableView_2->setModel(model);
    ui->tableView_2->setColumnWidth(3, 280);
    model->setFilter(QString("status = 0 and del = 0"));
    model->setHeaderData(0, Qt::Horizontal, "昵称");
    model->setHeaderData(1, Qt::Horizontal, "账号");
    model->setHeaderData(2, Qt::Horizontal, "账号类型");
    model->setHeaderData(3, Qt::Horizontal, "下机时间");
    model->select();
}
