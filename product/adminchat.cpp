#include "adminchat.h"
#include "ui_adminchat.h"
#include "global.h"
adminChat::adminChat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminChat)
{
    ui->setupUi(this);
    tcpSocket =new QTcpSocket(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    ui->openBt->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:12px solid gray}");
    ui->closeBt->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:12px solid gray}");
    ui->sendBt->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:12px solid gray}");


}

adminChat::~adminChat()
{
    delete ui;
}

void adminChat:: connected_Slot()
{
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
}
void adminChat:: readyRead_Slot()
{
//    QString buf;
 //   buf = tcpSocket->readAll();
    ui->recvEdit->appendPlainText(tcpSocket->readAll());
}

void adminChat::on_openBt_clicked()
{
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach (QHostAddress address, list)
    {
       //我们使用IPv4地址
       if(address.protocol() == QAbstractSocket::IPv4Protocol)
           tcpSocket->connectToHost(address.toString(),6666);
    }

    connect(tcpSocket,SIGNAL(connected()),this,SLOT(connected_Slot()));
}

void adminChat::on_closeBt_clicked()
{
    tcpSocket->close();
}

void adminChat::on_sendBt_clicked()
{
    if(ui->sendEdit->text().trimmed().isEmpty())
        return;
    QDateTime ct = QDateTime::currentDateTime();
    QString str = ct.toString("yyyy/MM/dd hh:mm:ss");
    ui->recvEdit->appendPlainText(("管理人员 "+str+"\n"+ui->sendEdit->text()+"\n").toUtf8().data());
    tcpSocket->write(("管理人员 "+str+"\n"+ui->sendEdit->text()+"\n").toUtf8().data());
    qDebug() << "client send success";
        ui->sendEdit->clear();
}


void adminChat::keyPressEvent(QKeyEvent *e)
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
