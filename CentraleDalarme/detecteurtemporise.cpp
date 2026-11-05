#include "detecteurtemporise.h"
#include <iostream>
#include <QMessageBox>

using namespace std;

DetecteurTemporise::DetecteurTemporise()
{
    cout << "détecteur temporisé" << endl;
    connect(&timerStop,&QTimer::timeout,this,&DetecteurTemporise::onTimerStop_timeout);
    timerStop.setSingleShot(true);
}

void DetecteurTemporise::on_pushbuttonIntrus_clicked()
{
    timerStop.start(3000);
}

void DetecteurTemporise::onTimerStop_timeout()
{
    QMessageBox messageDetecter;
    messageDetecter.setText("Intrus détecté");
    messageDetecter.exec();

}
