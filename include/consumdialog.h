#ifndef CONSUMDIALOG_H
#define CONSUMDIALOG_H

#include <QDialog>

namespace Ui {
class ConsumDialog;
}

class ConsumDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConsumDialog(QWidget *parent = nullptr);
    ~ConsumDialog();

private:
    Ui::ConsumDialog *ui;
};

#endif // CONSUMDIALOG_H
