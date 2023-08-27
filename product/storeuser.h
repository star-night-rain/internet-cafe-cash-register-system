#ifndef STOREUSER_H
#define STOREUSER_H

#include <QDialog>

namespace Ui {
class storeUser;
}

class storeUser : public QDialog
{
    Q_OBJECT

public:
    explicit storeUser(QWidget *parent = nullptr);
    ~storeUser();

private slots:
    void on_pushButton_clicked();

private:
    Ui::storeUser *ui;

};

#endif // STOREUSER_H
