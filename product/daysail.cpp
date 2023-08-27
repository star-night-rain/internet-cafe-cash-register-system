#include "daysail.h"
#include "ui_daysail.h"

daySail::daySail(QWidget *parent) :
    QDialog(parent),m_ptrChart(new QChart)
  , m_ptrChartView(new QChartView())
  , mLineSeries(new QLineSeries)

{
    initUI();
    this->setWindowFlags(Qt::FramelessWindowHint);
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(dataUpdate()));
    timer->start(3000);
}

daySail::~daySail()
{
    timer->stop();
}

void daySail::dataUpdate()
{
    mLineSeries->clear();
    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
    for(int i = 0 ;i <= 7;i++){
        if(qrand()%15001)
           mLineSeries->append(i, qrand()%15001);
   }
}

void daySail::initUI()
{
     QValueAxis * mAxY = new QValueAxis();
     QValueAxis * mAxX = new QValueAxis();

     QFont font;
     font.setPixelSize(25);
      //y轴范围
      mAxY->setRange(0, 15000);
      // Y轴分等份
      mAxY->setTickCount(11);
      mAxY->setLabelFormat("%d");
      mAxY->setLabelsFont(font);

      mAxX->setRange(1,5);
      mAxX->setTickCount(6);
      mAxX->setLabelFormat("%d");
      mAxX->setLabelsFont(font);
      // 分辨设置X轴和Y轴的标题
      mAxX->setTitleText(QString(tr("星期")));
      mAxY->setTitleText(QString(tr("销售额(元)")));
      mAxX->setTitleFont(font);
      mAxY->setTitleFont(font);
      // 将系列添加到图表;
      m_ptrChart->addSeries(mLineSeries);
      m_ptrChart->setTheme(QtCharts::QChart::ChartThemeBrownSand);


      m_ptrChart->addAxis(mAxY, Qt::AlignLeft);
      m_ptrChart->addAxis(mAxX, Qt::AlignBottom);
      mLineSeries->attachAxis(mAxX);

      mLineSeries->attachAxis(mAxY);

      //突出曲线上的点
      mLineSeries->setPointsVisible(true);

      mLineSeries->setName("日销售额");

      // 设置颜色
      mLineSeries->setColor(QColor(255,0,255));


      //隐藏背景
      m_ptrChart->setBackgroundVisible(true);
      //设置外边界全部为0
      m_ptrChart->setContentsMargins(0, 0, 0, 0);
      //设置内边界全部为0
      m_ptrChart->setMargins(QMargins(0, 0, 0, 0));
      //设置背景区域无圆角
      m_ptrChart->setBackgroundRoundness(0);


      //在底部显示图例
     QLegend *mlegend = m_ptrChart->legend();
     mlegend->setAlignment(Qt::AlignBottom);
     mlegend->show();
     m_ptrChartView->setChart(m_ptrChart);

     mlegend->setFont(font);

     qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
     for(int i = 0 ;i <= 7;i++){
         if(qrand()%15001)
             mLineSeries->append(i, qrand()%15001);
     }
      m_ptrChartView->setParent(this);
      m_ptrChartView->setMinimumSize(900,550);

}
