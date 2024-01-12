#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>
#include <QSqlQuery>
namespace Ui {
class payment;
}

class payment : public QDialog
{
    Q_OBJECT

public:
    explicit payment(QWidget *parent = nullptr);
    ~payment();
    QString rechangeAccount;
    int money;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::payment *ui;
};

#endif // PAYMENT_H
