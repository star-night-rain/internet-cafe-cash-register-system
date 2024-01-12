#ifndef USERDIALOG_H
#define USERDIALOG_H


#include <QDialog>
#include <QDateTime>
#include <QTimer>
#include <QCloseEvent>
#include <QSqlQuery>
namespace Ui {
class UserDialog;
}

class UserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserDialog(QWidget *parent = nullptr);
    ~UserDialog();
    int model;
;
    int cardid;
private slots:
    void update();

    void timerUpdate();

    void costUpdate();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void closeEvent(QCloseEvent * event);

    void Judge();


    void on_pushButton_14_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::UserDialog *ui;
    QTimer* timer;
    QTimer* timer_2;
    QDateTime currentTime;
    int type;
    float cost;
    QString Password;


};

#endif // USERDIALOG_H
