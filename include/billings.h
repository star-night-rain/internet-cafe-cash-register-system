#ifndef BILLINGS_H
#define BILLINGS_H

#include <QDialog>
#include <QSqlTableModel>
namespace Ui {
class billings;
}

class billings : public QDialog
{
    Q_OBJECT

public:
    explicit billings(QWidget *parent = nullptr);
    ~billings();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::billings *ui;
    QSqlTableModel* model;
};

#endif // BILLINGS_H
