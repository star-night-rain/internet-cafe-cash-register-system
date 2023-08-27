#ifndef LOGOUTDIALOG_H
#define LOGOUTDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
namespace Ui {
class LogoutDialog;
}

class LogoutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogoutDialog(QWidget *parent = nullptr);
    ~LogoutDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::LogoutDialog *ui;
};

#endif // LOGOUTDIALOG_H
