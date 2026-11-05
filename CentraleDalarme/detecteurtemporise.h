#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include "detecteur.h"
#include <QDialog>
#include <QWidget>
#include <QTimer>

class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();
private slots:
    virtual void on_pushbuttonIntrus_clicked();
    void onTimerStop_timeout();
private:
    QTimer timerStop;
};

#endif // DETECTEURTEMPORISE_H
