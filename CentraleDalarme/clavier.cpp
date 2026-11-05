#include "clavier.h"
#include "ui_clavier.h"
#include <QMessageBox>
#include <QObject>
#include <QTimer>

Clavier::Clavier(QWidget *parent)
    : QWidget(parent)
    ,leDetecteur(nullptr)
    ,leDetecteurTempo(nullptr)
    , ui(new Ui::Clavier)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
   // connect(ui->pushButton_2,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
   // connect(ui->pushButton_3,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
   // connect(ui->pushButton_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
   // connect(ui->pushButton_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(&timerLed, &QTimer::timeout,this,&Clavier::onTimerLed_timeout);


}

Clavier::~Clavier()
{
    delete ui;
}

void Clavier::on_pushButtonMarche_clicked()
{
    if((ui->chexkboxLedRouge->checkState()) != Qt::Checked){
        ui->chexkboxLedRouge->setCheckState(Qt::Checked);
        timerLed.start(500);
    }

}
void Clavier::on_pushButtonArret_clicked()
{
    if((ui->chexkboxLedRouge->checkState()) != Qt::Unchecked){
        ui->chexkboxLedRouge->setCheckState(Qt::Unchecked);
        timerLed.stop();
    }
}

void Clavier::TraiterChiffre()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
    QMessageBox messageChiffre;
    messageChiffre.setText("j'ai appuyé sur la touche " + texteBouton);
    messageChiffre.exec();
}

void Clavier::onTimerLed_timeout()
{
    /*QMessageBox messageMarche;
    messageMarche.setText("j'ai appuyé sur Marche");
    messageMarche.exec();*/
    if(ui->chexkboxLedRouge->checkState() == Qt::Checked){
        ui->chexkboxLedRouge->setCheckState(Qt::Unchecked);
    }
    else{
        ui->chexkboxLedRouge->setCheckState(Qt::Checked);
    }
}

void Clavier::on_pushButton_2_clicked()
{

    if (leDetecteur == nullptr){
        leDetecteur = new Detecteur;
        leDetecteur->show();
    }
}

void Clavier::on_pushButton_3_clicked()
{
    if(leDetecteur != nullptr){
        leDetecteur->hide();
        delete leDetecteur;
    }

    // Que se passe-t-il si l'on appuie d’abord sur la touche 3 ? il ferme la centrale d'alarme
}


void Clavier::on_pushButton_4_clicked()
{
    if (leDetecteurTempo == nullptr){
        leDetecteurTempo = new DetecteurTemporise;
        leDetecteurTempo->show();
    }
}


void Clavier::on_pushButton_5_clicked()
{
    if(leDetecteurTempo != nullptr){
        leDetecteurTempo->hide();
        delete leDetecteurTempo;
    }
}

