#ifndef CARDINFO_H
#define CARDINFO_H

#include <QDialog>
#include <QSqlTableModel>
namespace Ui {
class cardinfo;
}

class cardinfo : public QDialog
{
    Q_OBJECT

public:
    explicit cardinfo(QWidget *parent = nullptr);
    ~cardinfo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::cardinfo *ui;
    QSqlTableModel* model;
};

#endif // CARDINFO_H
