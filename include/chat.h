#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include <QtNetwork>
#include <QSqlQuery>

namespace Ui {
class Chat;
}

class Chat : public QDialog
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = nullptr);
    ~Chat();
    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;

private slots:
/*槽函数*/

    void newConnection_Slot();
    void readyRead_Slot();

    void on_sendBt_clicked();

    void on_openBt_clicked();

    void on_closeBt_clicked();

protected:
    void keyPressEvent(QKeyEvent *);

private:
    Ui::Chat *ui;
};

#endif // CHAT_H
