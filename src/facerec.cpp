#include "..\include\facerec.h"
#include "ui_facerec.h"
#include "..\include\global.h"
faceRec::faceRec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::faceRec)
{
    ui->setupUi(this);

    camera = new QCamera(this);
    cameraViewFinder = new QCameraViewfinder(this);
    ui->verticalLayout_camera->addWidget(cameraViewFinder);
    camera->setViewfinder(cameraViewFinder);
    cameraImageCapture = new QCameraImageCapture(camera);

   ui->progressBar->setRange(0,100);
   ui->progressBar->setValue(0);
   ui->progressBar->setOrientation (Qt::Horizontal);
   timer = new QTimer();
   connect(this->timer, SIGNAL(timeout()), this, SLOT(start()));
   timer->start(30);
    ui->label_2->close();
    camera->start();
}

faceRec::~faceRec()
{
    camera->stop();
    delete ui;
}

void faceRec::start()
{
    if (tick < 101)
       {
           ui->progressBar->setValue(tick++);
       } else
       {
           tick = 1;
           disconnect(this->timer, SIGNAL(timeout()), this, SLOT(start())); // 若断开链接，进度条会一直重复
           QDateTime ct = QDateTime::currentDateTime();
           QString str = ct.toString("yyyy-MM-dd-hh-mm-ss");
           QSqlQuery query;
           QString sql = QString("select * from cardinfo where account = '%1';").arg(Account);
           query.exec(sql);
           query.next();
           QString name = query.value("name").toString();
           QString current_path = QDir::currentPath();
           QDir dir = current_path;
           dir.cdUp();
           QString parent_path = dir.absolutePath();
           QString relativa_path = "captured-photo/"+str+"-"+name+".jpg";
           QString image_path = parent_path+"/"+relativa_path;
           qDebug()<<image_path;
           cameraImageCapture->capture(image_path);
           ui->label->close();
           ui->label_2->show();
           timer->stop();


           QTime t;
           t.start();
           while(t.elapsed()<1000)
               QCoreApplication::processEvents();

           camera->stop();
           this->close();
       }
}
