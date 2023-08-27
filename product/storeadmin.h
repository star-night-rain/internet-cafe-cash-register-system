#ifndef STOREADMIN_H
#define STOREADMIN_H

#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
namespace Ui {
class storeAdmin;
}

class storeAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit storeAdmin(QWidget *parent = nullptr);
    ~storeAdmin();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::storeAdmin *ui;
};

#endif // STOREADMIN_H
