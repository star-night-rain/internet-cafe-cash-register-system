#include "cardinfo.h"
#include "ui_cardinfo.h"

cardinfo::cardinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cardinfo)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    model = new QSqlTableModel(this);
    model->setTable("cardinfo");
    model->select();
    model->removeColumn(11);
    model->removeColumn(3);

    ui->tableView->setModel(model);

    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 200);
    ui->tableView->setColumnWidth(2, 200);
    ui->tableView->setColumnWidth(3, 100);
    ui->tableView->setColumnWidth(4, 100);
    ui->tableView->setColumnWidth(5, 300);
    ui->tableView->setColumnWidth(6, 300);
    ui->tableView->setColumnWidth(7, 300);
    ui->tableView->setColumnWidth(8, 150);
    ui->tableView->setColumnWidth(9, 150);

    model->setFilter(QString(" del = 0"));
    model->select();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->pushButton->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_2->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
}

cardinfo::~cardinfo()
{
    delete ui;
}

void cardinfo::on_pushButton_clicked()
{
    QString account = ui->lineEdit->text();
    model->setFilter(QString("account = '%1' and del = 0").arg(account));
    model->select();
    model->removeColumn(11);
    model->removeColumn(3);


    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 200);
    ui->tableView->setColumnWidth(2, 200);
    ui->tableView->setColumnWidth(3, 100);
    ui->tableView->setColumnWidth(4, 300);
    ui->tableView->setColumnWidth(5, 300);
    ui->tableView->setColumnWidth(6, 300);
    ui->tableView->setColumnWidth(7, 150);
    ui->tableView->setColumnWidth(8, 150);

}

void cardinfo::on_pushButton_2_clicked()
{
    model->setTable("cardinfo");
    model->select();
    model->removeColumn(11);
    model->removeColumn(3);
    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 200);
    ui->tableView->setColumnWidth(2, 200);
    ui->tableView->setColumnWidth(3, 100);
    ui->tableView->setColumnWidth(4, 100);
    ui->tableView->setColumnWidth(5, 300);
    ui->tableView->setColumnWidth(6, 300);
    ui->tableView->setColumnWidth(7, 300);
    ui->tableView->setColumnWidth(8, 150);
    ui->tableView->setColumnWidth(9, 150);
    model->setFilter(QString(" del = 0"));
    model->select();
}
