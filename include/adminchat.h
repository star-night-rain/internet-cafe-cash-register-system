#ifndef ADMINCHAT_H
#define ADMINCHAT_H

#include <QDialog>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include <QtNetwork>
#include <QSqlQuery>

namespace Ui {
class adminChat;
}

class adminChat : public QDialog
{
    Q_OBJECT

public:
    explicit adminChat(QWidget *parent = nullptr);
    ~adminChat();
    QTcpSocket *tcpSocket;

private slots:

    void connected_Slot();
    void readyRead_Slot();

    void on_sendBt_clicked();

    void on_openBt_clicked();

    void on_closeBt_clicked();

private:
    Ui::adminChat *ui;

protected:
    void keyPressEvent(QKeyEvent *);
};

#endif // ADMINCHAT_H
