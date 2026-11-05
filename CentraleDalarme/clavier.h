#ifndef CLAVIER_H
#define CLAVIER_H

#include <QWidget>

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

private:
    Ui::Clavier *ui;
};
#endif // CLAVIER_H
