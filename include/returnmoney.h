#ifndef RETURNMONEY_H
#define RETURNMONEY_H

#include <QDialog>
#include <QChart>
#include <QChartView>
#include <QBarSet>
#include <QValueAxis>
#include <QBarCategoryAxis>
#include <QHorizontalStackedBarSeries>
#include <QTimer>
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class returnMoney;
}

class returnMoney : public QDialog
{
    Q_OBJECT

public:
    explicit returnMoney(QWidget *parent = nullptr);
    ~returnMoney();
    void initUI();
    void initBarSet();
//    void mousePressEvent(QMouseEvent *event);


   private:
    QChart *m_ptrChart;
    QChartView *m_ptrChartview;
    QHorizontalStackedBarSeries *m_ptrHorizontalPercentBarSeries;
    QBarCategoryAxis *m_ptrAxisY;
    QValueAxis *m_ptrAxisX;
    QTimer* timer;

private slots:
    void dataUpdate();
};

#endif // RETURNMONEY_H
