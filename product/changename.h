#ifndef CHANGENAME_H
#define CHANGENAME_H

#include <QDialog>
#include <QMessageBox>
#include <QSqlQuery>
namespace Ui {
class ChangeName;
}

class ChangeName : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeName(QWidget *parent = nullptr);
    ~ChangeName();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ChangeName *ui;
};

#endif // CHANGENAME_H
