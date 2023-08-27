#include "cardrecords.h"
#include "ui_cardrecords.h"

cardrecords::cardrecords(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cardrecords)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    model = new QSqlTableModel(this);
    model->setTable("cardrecords");
    model->select();
    model->removeColumn(5);
    ui->tableView_2->setModel(model);
    ui->tableView_2->setModel(model);
    ui->tableView_2->setColumnWidth(2, 295);
    ui->tableView_2->setColumnWidth(4, 150);
    model->setFilter(QString("del = 0"));
    ui->pushButton_3->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_4->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

cardrecords::~cardrecords()
{
    delete ui;
}

void cardrecords::on_pushButton_4_clicked()
{
    model->setTable("cardrecords");
    model->select();
    ui->tableView_2->setModel(model);
    ui->tableView_2->setModel(model);
    ui->tableView_2->setColumnWidth(2, 295);
    ui->tableView_2->setColumnWidth(4, 150);
    model->setFilter(QString("del = 0"));
}

void cardrecords::on_pushButton_3_clicked()
{
    QString account = ui->lineEdit->text();
    model->setFilter(QString("account = '%1' and del = 0").arg(account));
    model->select();
    ui->tableView_2->setModel(model);
    ui->tableView_2->setModel(model);
    ui->tableView_2->setColumnWidth(2, 295);
    ui->tableView_2->setColumnWidth(4, 150);
}
