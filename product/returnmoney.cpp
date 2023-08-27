#include "returnmoney.h"
#include "ui_returnmoney.h"

returnMoney::returnMoney(QWidget *parent) :
    QDialog(parent)
    , m_ptrChart(new QChart)
    , m_ptrChartview(new QChartView(m_ptrChart, this))
    , m_ptrHorizontalPercentBarSeries(new QHorizontalStackedBarSeries)
    , m_ptrAxisY(new QBarCategoryAxis)
    , m_ptrAxisX(new QValueAxis)
{
    initBarSet();
    initUI();
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(dataUpdate()));
    timer->start(3000);
}

returnMoney::~returnMoney()
{
    timer->stop();
}

void returnMoney::dataUpdate()
{
    foreach (auto item, m_ptrHorizontalPercentBarSeries->barSets()) {
        for (int i = 0; i < item->count(); i++) {
            item->remove(i);
        }
    }
    qreal max = 0;
    foreach (auto item, m_ptrHorizontalPercentBarSeries->barSets()) {
        for (int i = 0;
             i <
             reinterpret_cast<QBarCategoryAxis *>(m_ptrChart->axisY())->count();
             i++) {
            int num = qrand() % 151;
            if(num)
                item->append(num);
        }
    }
    for (int i = 0;
         i < reinterpret_cast<QBarCategoryAxis *>(m_ptrChart->axisY())->count();
         i++) {
        qreal sum = 0;
        foreach (auto item, m_ptrHorizontalPercentBarSeries->barSets()) {
            sum += item->at(i);
        }
        max = max > sum ? max : sum;
    }
    //     qInfo() << reinterpret_cast<QBarCategoryAxis *>(m_ptrChart->axisY());
    m_ptrChart->axisX()->setMax(QVariant::fromValue(max));
    m_ptrChart->update();
    m_ptrChartview->update();
}

void returnMoney::initBarSet()
{  // 构建不同的 QAbstractBarSeries
    QFont font;
    font.setPixelSize(30);
    QBarSet *set0 = new QBarSet("散客");
    QBarSet *set1 = new QBarSet("会员");

    set0->setLabelFont(font);
    set1->setLabelFont(font);
//    *set0 << 1 << 7 << 2 << 3 << 5 << 6<<5;
//    *set1 << 5 << 2 << 3 << 4 << 4 << 7<<6;

    m_ptrHorizontalPercentBarSeries->append(set0);
    m_ptrHorizontalPercentBarSeries->append(set1);

    m_ptrHorizontalPercentBarSeries->setLabelsVisible(true);
}
void returnMoney::initUI()
{

    QFont font;
    font.setPixelSize(30);

    m_ptrChart->setMinimumSize(900, 580);
    m_ptrChart->addSeries(m_ptrHorizontalPercentBarSeries);
    m_ptrChart->setTitle("本周退费记录统计");
    // m_ptrChart->createDefaultAxes();
    m_ptrChart->setAnimationOptions(QChart::AllAnimations);
    m_ptrChartview->setFixedSize(900, 580);
    m_ptrChartview->setRenderHint(QPainter::Antialiasing);
    m_ptrAxisX->setLabelsFont(font);
    m_ptrAxisX->setLabelFormat("%d");
    m_ptrAxisY->setLabelsFont(font);

    m_ptrAxisY->append(tr("星期一"));
    m_ptrAxisY->append(tr("星期二"));
    m_ptrAxisY->append(tr("星期三"));
    m_ptrAxisY->append(tr("星期四"));
    m_ptrAxisY->append(tr("星期五"));
    m_ptrAxisY->append(tr("星期六"));
    m_ptrAxisY->append(tr("星期天"));
    m_ptrAxisY->setLabelsColor(QColor(7, 28, 96));

    m_ptrChart->setFont(font);
    m_ptrChart->setAxisY(m_ptrAxisY, m_ptrHorizontalPercentBarSeries);
    m_ptrChart->setAxisX(m_ptrAxisX, m_ptrHorizontalPercentBarSeries);

    dataUpdate();
}
