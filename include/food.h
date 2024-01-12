#ifndef FOOD_H
#define FOOD_H

#include <QDialog>
#include <QChart>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>
#include <QTimer>
#include <QTime>
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class food;
}

class food : public QDialog
{
    Q_OBJECT

public:
    explicit food(QWidget *parent = nullptr);
    ~food();
    void initUI();
    void initData();
    void initConnect();

   public slots:
    void clickedItem(QPieSlice *slice);

   private:
    QList<QBrush> m_listColor;
    QChart *m_ptrChart;
    QChartView *m_ptrChartview;
    QPieSeries *m_ptrPieSeries;
    QTimer* timer;
    QPieSlice *slice1 ;
    QPieSlice *slice2 ;
    QPieSlice *slice3 ;
    QPieSlice *slice4 ;
    QPieSlice *slice5 ;

private slots:
    void dataUpdate();
};

#endif // FOOD_H
