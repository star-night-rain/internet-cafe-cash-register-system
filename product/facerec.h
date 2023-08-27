#ifndef FACEREC_H
#define FACEREC_H

#include <QDialog>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QDebug>
#include <QTimer>
#include <QDateTime>
#include <QSqlQuery>
namespace Ui {
class faceRec;
}

class faceRec : public QDialog
{
    Q_OBJECT

public:
    explicit faceRec(QWidget *parent = nullptr);
    ~faceRec();

private slots:
    void start();




private:
    Ui::faceRec *ui;
    QTimer* timer;
    QCamera *camera;
    QCameraViewfinder *cameraViewFinder;
    QCameraImageCapture *cameraImageCapture;
    int tick =0;
};

#endif // FACEREC_H
