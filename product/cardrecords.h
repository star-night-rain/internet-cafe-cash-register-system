#ifndef CARDRECORDS_H
#define CARDRECORDS_H

#include <QDialog>
#include <QSqlTableModel>
namespace Ui {
class cardrecords;
}

class cardrecords : public QDialog
{
    Q_OBJECT

public:
    explicit cardrecords(QWidget *parent = nullptr);
    ~cardrecords();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::cardrecords *ui;
    QSqlTableModel* model;
};

#endif // CARDRECORDS_H
