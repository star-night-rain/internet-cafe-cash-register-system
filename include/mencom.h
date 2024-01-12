#ifndef MENCOM_H
#define MENCOM_H

#include <QDialog>
#include <QChart>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>
#include <QTimer>
#include <QTime>
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class menCom;
}

class menCom : public QDialog
{
    Q_OBJECT

public:
    explicit menCom(QWidget *parent = nullptr);
    ~menCom();
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


private slots:
    void dataUpdate();
};

#endif // MENCOM_H
