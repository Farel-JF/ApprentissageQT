#ifndef DETECTEUR_H
#define DETECTEUR_H

#include <QDialog>
#include <QWidget>
#include <QTimer>

namespace Ui {
class Detecteur;
}
// De quelle classe hérite la classe Detecteur ? QDialog
class Detecteur : public QDialog
{
    Q_OBJECT

public:
    explicit Detecteur(QWidget *parent = nullptr);
    ~Detecteur();

private slots:
    virtual void on_pushbuttonIntrus_clicked();


private:
    Ui::Detecteur *ui;
    QTimer timerDetecte;
};

#endif // DETECTEUR_H
