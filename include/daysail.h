#ifndef DAYSAIL_H
#define DAYSAIL_H


#include <QDialog>
#include <QChartView>
#include <QChart>
#include <QLineSeries>
#include <QTimer>
#include <QValueAxis>
#include <QTime>
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class daySail;
}

class daySail : public QDialog
{
    Q_OBJECT

public:
    explicit daySail(QWidget *parent = nullptr);
    ~daySail();
    QChart *m_ptrChart;
    QChartView*m_ptrChartView;
    QLineSeries* mLineSeries;

private:
    void initUI();
    QTimer* timer;

private slots:
    void dataUpdate();


};

#endif // DAYSAIL_H
