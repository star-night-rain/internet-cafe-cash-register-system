#include "chat.h"
#include "ui_chat.h"
#include  "global.h"
Chat::Chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    tcpServer = new QTcpServer(this);
    tcpSocket = new QTcpSocket(this);
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(newConnection_Slot()));
    ui->openBt->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:12px solid gray}");
    ui->closeBt->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:12px solid gray}");
    ui->sendBt->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:12px solid gray}");
}

Chat::~Chat()
{
    delete ui;
}

/*建立新连接槽函数*/
void Chat::newConnection_Slot()
{
     tcpSocket = tcpServer->nextPendingConnection();
     /*信号与槽的关联，此处信号为readyRead()，槽函数为readyRead_Slot()*/
     connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
}
/*读取数据槽函数*/
void Chat:: readyRead_Slot()
{
    QString buf;
    buf = tcpSocket->readAll();
    ui->recvEdit->appendPlainText(buf);

}
void Chat::on_openBt_clicked()
{
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    QHostAddress address;
    foreach (QHostAddress address, list)
    {
       if(address.protocol() == QAbstractSocket::IPv4Protocol)
         {  tcpServer->listen(QHostAddress(address.toString()),6666);
           break;
       }
    }

}

void Chat::on_closeBt_clicked()
{
    tcpServer->close();
}

void Chat::on_sendBt_clicked()
{
    tcpServer->listen(QHostAddress::Any,6666);
    if(ui->sendEdit->text().trimmed().isEmpty())
        return;
    QDateTime ct = QDateTime::currentDateTime();
    QString str = ct.toString("yyyy/MM/dd hh:mm:ss");
    QSqlQuery query;
    QString sql = QString("select * from cardinfo where account = '%1';").arg(Account);
    query.exec(sql);
    query.next();
    QString name = query.value("name").toString();
    ui->recvEdit->appendPlainText((name+" "+str+"\n"+ui->sendEdit->text()+"\n").toUtf8().data());
    tcpSocket->write((name+" "+str+"\n"+ui->sendEdit->text()+"\n").toUtf8().data());
    ui->sendEdit->clear();
}

void Chat::keyPressEvent(QKeyEvent *e)
{
    switch(e->key())
    {
    case Qt::Key_Return:
        on_sendBt_clicked();
        break;
    case Qt::Key_Enter:
        on_sendBt_clicked();
        break;
    }
}
