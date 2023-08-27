#include "mencom.h"
#include "ui_mencom.h"

menCom::menCom(QWidget *parent) :
    QDialog(parent)
    , m_ptrChart(new QChart)
    , m_ptrChartview(new QChartView(m_ptrChart, this))
    , m_ptrPieSeries(new QPieSeries)
{
    initUI();
    initData();
    initConnect();
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(dataUpdate()));
    timer->start(3000);
}

menCom::~menCom()
{
}

void menCom::dataUpdate()
{
    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
    if(qrand()%11)
        slice1->setValue(qrand()%3+1);
    if(qrand()%11)
        slice2->setValue(qrand()%11+1);
}

void menCom::initUI()
{
    m_ptrChart->addSeries(m_ptrPieSeries);
    m_ptrChart->setTitle("会员构成");
    //m_ptrChart->legend()->hide();

    m_ptrChartview->setRenderHint(QPainter::Antialiasing);
    m_ptrChartview->setFixedSize(860, 525);
    setFixedSize(860, 525);
}

void menCom::initData()
{
    slice1 = new QPieSlice("会员", 2);//数字是占比
    slice2 = new QPieSlice("散客", 7);
    QFont font;
    font.setPixelSize(30);
    slice1->setLabelFont(font);
    slice2->setLabelFont(font);
    m_listColor.append(QBrush(QColor("#f15b6c")));
    m_listColor.append(QBrush(QColor("#afb4db")));
    m_ptrPieSeries->append(slice1);
    m_ptrPieSeries->append(slice2);
    m_ptrChartview->setFont(font);
    for (int i = 0; i < m_ptrPieSeries->slices().count(); i++) {
        m_ptrPieSeries->slices()[i]->setBrush(m_listColor.at(i));
    }
}

void menCom::initConnect()
{
    connect(m_ptrPieSeries, SIGNAL(clicked(QPieSlice *)), this,
            SLOT(clickedItem(QPieSlice *)));
}

void menCom::clickedItem(QPieSlice *slice)
{
    int i = m_ptrPieSeries->slices().lastIndexOf(slice);

    if (!slice->isExploded()) {
        slice->setExploded();
        slice->setLabelVisible();
        slice->setPen(QPen(Qt::darkGreen, 2));
        slice->setBrush(Qt::green);
    } else {
        slice->setLabelVisible(false);
        slice->setExploded(false);
        slice->setPen(QPen(Qt::white, 1));
        slice->setBrush(m_listColor.at(i));
    }
}

