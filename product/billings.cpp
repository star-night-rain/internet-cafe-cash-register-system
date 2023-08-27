#include "billings.h"
#include "ui_billings.h"

billings::billings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::billings)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);
    model = new QSqlTableModel(this);
    model->setTable("billings");
    model->select();
    model->setFilter(QString(" del = 0"));
    model->removeColumn(6);
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0, 150);
    ui->tableView->setColumnWidth(1, 150);
    ui->tableView->setColumnWidth(2, 300);
    ui->tableView->setColumnWidth(3, 300);
    ui->tableView->setColumnWidth(4, 150);
    ui->tableView->setColumnWidth(5, 150);
    ui->pushButton->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->pushButton_2->setStyleSheet("QPushButton{color:black;background-color:rgb(85, 255, 255);border-radius:25px;border:10px solid gray}");
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

billings::~billings()
{
    delete ui;
}

void billings::on_pushButton_clicked()
{
    QString account = ui->lineEdit->text();
    model->setFilter(QString("account = '%1' and del = 0").arg(account));
    model->select();
    model->removeColumn(6);
    ui->tableView->setColumnWidth(0, 150);
    ui->tableView->setColumnWidth(1, 150);
    ui->tableView->setColumnWidth(2, 300);
    ui->tableView->setColumnWidth(3, 300);
    ui->tableView->setColumnWidth(4, 150);
    ui->tableView->setColumnWidth(5, 150);
}

void billings::on_pushButton_2_clicked()
{
    model->setTable("billings");
    model->select();
    model->removeColumn(6);
    ui->tableView->setColumnWidth(0, 150);
    ui->tableView->setColumnWidth(1, 150);
    ui->tableView->setColumnWidth(2, 300);
    ui->tableView->setColumnWidth(3, 300);
    ui->tableView->setColumnWidth(4, 150);
    ui->tableView->setColumnWidth(5, 150);
    model->setFilter(QString(" del = 0"));
    model->select();
}
