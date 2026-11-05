#include "detecteur.h"
#include "ui_detecteur.h"
#include <QMessageBox>
#include <QObject>
#include <QTimer>

Detecteur::Detecteur(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Detecteur)
{
    ui->setupUi(this);
}

Detecteur::~Detecteur()
{
    delete ui;
}

void Detecteur::on_pushbuttonIntrus_clicked()
{
    QMessageBox messageDetecter;
    messageDetecter.setText("Intrus détecté");
    messageDetecter.exec();
}
