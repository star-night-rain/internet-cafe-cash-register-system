#ifndef TOPUP_H
#define TOPUP_H

#include <QDialog>
#include <QChart>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QValueAxis>
#include <QBarCategoryAxis>
#include <QTime>
#include <QBarLegendMarker>
#include <QtDebug>
#include <QTimer>
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class topUp;
}

class topUp : public QDialog
{
    Q_OBJECT

public:
    explicit topUp(QWidget *parent = nullptr);
    ~topUp();
    void initUI();
    void initBarSet();
    void initConnect();
   public slots:
    void handleMarkerClicked();

   private:
    QChart *m_ptrChart;
    QChartView *m_ptrChartview;
    QBarSeries *m_ptrBarSeries;
    QValueAxis *m_ptrAxisY;
    QBarCategoryAxis *m_ptrAxisX;
    QList<QBarSet *> m_listBarSet;
    QTimer* timer;
    QFont font;

private slots:
    void dataUpdate();
};

#endif // TOPUP_H
