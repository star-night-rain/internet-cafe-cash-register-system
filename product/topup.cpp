#include "topup.h"
#include "ui_topup.h"

topUp::topUp(QWidget *parent) :
    QDialog(parent),
    m_ptrChart(new QChart())
    , m_ptrChartview(new QChartView(m_ptrChart, this))
    , m_ptrBarSeries(new QBarSeries())
    , m_ptrAxisY(new QValueAxis())
    , m_ptrAxisX(new QBarCategoryAxis())

{
    qsrand(static_cast<uint>(QTime(0, 0, 0).secsTo(QTime::currentTime())));
    initUI();
    initConnect();
    font.setPixelSize(30);
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(dataUpdate()));
    timer->start(3000);
}

topUp::~topUp()
{
    foreach (auto item, m_listBarSet) {
        delete item;
    }
    m_listBarSet.clear();
}

void topUp::dataUpdate()
{
    foreach (auto item, m_listBarSet) {
        for (int i = 0; i < item->count(); i++) {
            item->remove(i);
        }
    }
    bool active = 1;
    foreach (auto item, m_listBarSet) {
        if(active)
            for (int i = 0; i < 7; i++) {
                item->append(qrand() % 2001);
                active=0;
            }
        else
        for (int i = 0; i < 7; i++) {
            item->append(qrand() % 3001);

        }
    }
}

void topUp::initUI()
{
    m_ptrChart->addSeries(m_ptrBarSeries);
    m_ptrChartview->setFixedSize(900, 600);
    m_ptrAxisX->append(tr("星期一"));
    m_ptrAxisX->append(tr("星期二"));
    m_ptrAxisX->append(tr("星期三"));
    m_ptrAxisX->append(tr("星期四"));
    m_ptrAxisX->append(tr("星期五"));
    m_ptrAxisX->append(tr("星期六"));
    m_ptrAxisX->append(tr("星期天"));
    m_ptrAxisX->setLabelsColor(QColor(7, 28, 96));
    m_ptrAxisX->setLabelsFont(font);
    m_ptrAxisY->setLabelsFont(font);
    m_ptrAxisY->setRange(0, 3000);
    m_ptrAxisY->setTickCount(11);
    m_ptrAxisY->setLabelFormat("%d");
    m_ptrChart->setAxisX(m_ptrAxisX, m_ptrBarSeries);
    m_ptrChart->setAxisY(m_ptrAxisY, m_ptrBarSeries);

    m_ptrChart->setTitle(tr("本周充值情况"));
    m_ptrChart->legend()->setVisible(true);
    //是否允许对legend进行设置，就相当于一个总开关，只有打开了才能对legend进行操作
    m_ptrChart->legend()->setAlignment(Qt::AlignBottom);  //设置位置
    m_ptrChart->legend()->setBackgroundVisible(true);
    m_ptrChart->legend()->setAutoFillBackground(true);
    m_ptrChart->legend()->setColor(QColor(222, 233, 251));  //设置颜色
    m_ptrChart->legend()->setLabelColor(QColor(0, 100, 255));
    //设置标签颜色 m_ptrChart->legend()->setMaximumHeight(50);
    //设置最大高度

    initBarSet();
}

void topUp::initBarSet()
{
    QBarSet *set0 = new QBarSet("散客");  //
    QBarSet *set1 = new QBarSet("会员");
    set0->setLabelFont(font);
    set1->setLabelFont(font);
    m_listBarSet.append(set0);
    m_listBarSet.append(set1);

    foreach (auto item, m_listBarSet) {
        m_ptrBarSeries->append(item);
    }
    dataUpdate();
}

void topUp::initConnect()
{
    const auto markers = m_ptrChart->legend()->markers();
    for (QLegendMarker *marker : markers) {
        // Disconnect possible existing connection to avoid multiple connections
        QObject::disconnect(marker, &QLegendMarker::clicked, this,
                            &topUp::handleMarkerClicked);
        QObject::connect(marker, &QLegendMarker::clicked, this,
                         &topUp::handleMarkerClicked);
    }
}

void topUp::handleMarkerClicked()
{
    QBarLegendMarker *marker = qobject_cast<QBarLegendMarker *>(sender());
    //断言
    Q_ASSERT(marker);
    switch (marker->type()) {
        case QLegendMarker::LegendMarkerTypeBar: {
            //控序列隐藏/显示
            // Toggle visibility of series
            // marker->setVisible(false);
            // marker->series()->setVisible(!marker->series()->isVisible());

            // Turn legend marker back to visible, since hiding series also
            // hides the marker and we don't want it to happen now.
            // 获取当前选中的BarSet.我们可以通过修改barSet的透明度设置其隐藏
            QBarSet *barset = marker->barset();
            QColor barsetColor(barset->color());
            qreal alpha = barsetColor.alphaF();
            marker->setVisible(true);

            //修改图例
            // Dim the marker, if series is not visible

            if (1 == alpha) {
                alpha = 0.1;
            } else {
                alpha = 1;
            }

            QColor color;
            QBrush brush = marker->labelBrush();
            color = brush.color();
            color.setAlphaF(alpha);
            brush.setColor(color);
            marker->setLabelBrush(brush);

            brush = marker->brush();
            color = brush.color();
            color.setAlphaF(alpha);
            brush.setColor(color);
            marker->setBrush(brush);

            QPen pen = marker->pen();
            color = pen.color();
            color.setAlphaF(alpha);
            pen.setColor(color);
            marker->setPen(pen);

            barsetColor.setAlphaF(alpha);
            barset->setColor(barsetColor);

            break;
        }
        default: {
            qInfo() << "Unknown marker type";
            break;
        }
    }
}
