#include "food.h"
#include "ui_food.h"

food::food(QWidget *parent) :
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

food::~food()
{

}

void food::dataUpdate()
{
    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
    if(qrand()%11)
        slice1->setValue(qrand()%11+1);
    if(qrand()%11)
        slice2->setValue(qrand()%11+1);
    if(qrand()%11)
        slice3->setValue(qrand()%11+1);
    if(qrand()%11)
        slice4->setValue(qrand()%11+1);
    if(qrand()%11)
        slice5->setValue(qrand()%11+1);
}

void food::initUI()
{
    m_ptrChart->addSeries(m_ptrPieSeries);
    m_ptrChart->setTitle("热销商品");
    //m_ptrChart->legend()->hide();

    m_ptrChartview->setRenderHint(QPainter::Antialiasing);
    m_ptrChartview->setFixedSize(860, 525);
    setFixedSize(860, 525);
}

void food::initData()
{
    slice1 = new QPieSlice("方便面", 7);//数字是占比
    slice2 = new QPieSlice("火腿肠", 5);
    slice3 = new QPieSlice("啤酒", 4);
    slice4 = new QPieSlice("面包", 2);
    slice5 = new QPieSlice("汽水", 3);
    QFont font;
    font.setPixelSize(30);
    slice1->setLabelFont(font);
    slice2->setLabelFont(font);
    slice3->setLabelFont(font);
    slice4->setLabelFont(font);
    slice5->setLabelFont(font);
    m_listColor.append(QBrush(QColor("#f15b6c")));
    m_listColor.append(QBrush(QColor("#faa755")));
    m_listColor.append(QBrush(QColor("#bed742")));
    m_listColor.append(QBrush(QColor("#afb4db")));
    m_listColor.append(QBrush(QColor("#4e72b8")));
    m_ptrPieSeries->append(slice1);
    m_ptrPieSeries->append(slice2);
    m_ptrPieSeries->append(slice3);
    m_ptrPieSeries->append(slice4);
    m_ptrPieSeries->append(slice5);
    m_ptrChartview->setFont(font);
    for (int i = 0; i < m_ptrPieSeries->slices().count(); i++) {
        m_ptrPieSeries->slices()[i]->setBrush(m_listColor.at(i));
    }
}

void food::initConnect()
{
    connect(m_ptrPieSeries, SIGNAL(clicked(QPieSlice *)), this,
            SLOT(clickedItem(QPieSlice *)));
}

void food::clickedItem(QPieSlice *slice)
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
