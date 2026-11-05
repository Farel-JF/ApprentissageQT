#ifndef CLAVIER_H
#define CLAVIER_H

#include <QWidget>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class Clavier;
}
QT_END_NAMESPACE

class Clavier : public QWidget
{
    Q_OBJECT

public:
    explicit Clavier(QWidget *parent = nullptr);
    ~Clavier() override;

private slots:
    void on_pushButtonMarche_clicked();
    void TraiterChiffre();
    void on_pushButtonArret_clicked();
    void onTimerLed_timeout();

private:
    Ui::Clavier *ui;
    QTimer timerLed;
};
#endif // CLAVIER_H
