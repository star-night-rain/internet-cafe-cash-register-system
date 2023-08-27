#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H

#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QIntValidator>
#include "widget.h"
#include "QSqlTableModel"
#include "daysail.h"
#include "food.h"
#include "newuser.h"
#include "topup.h"
#include "menber.h"
#include "returnmoney.h"
#include "mencom.h"
#include "QMenu"
namespace Ui {
class AdminDialog;
}

class AdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDialog(QWidget *parent = nullptr);
    ~AdminDialog();

private slots:
    void openChat();

    void myclose();

    void openStore();

    void openCardInfo();

    void openCardRecords();

    void openBillings();

    void amountUpdate();

    void incomeUpdate1();

    void incomeUpdate2();

    void on_boardBt_clicked();

    void on_deplaneBt_clicked();

private:
    Ui::AdminDialog *ui;
    QSqlTableModel* model;
    QString account;
    daySail* d;
    food* f;
    newUser* u;
    topUp* t;
    returnMoney* tm;
    menber* m;
    menCom* mc;
    QTimer* timer1;
    QTimer* timer2;
    QTimer* timer3;


protected:
    void contextMenuEvent(QContextMenuEvent *event);
};

#endif // ADMINDIALOG_H
