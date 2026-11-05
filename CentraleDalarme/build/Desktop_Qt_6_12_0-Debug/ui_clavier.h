/********************************************************************************
** Form generated from reading UI file 'clavier.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLAVIER_H
#define UI_CLAVIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clavier
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chexkboxLedVerte;
    QCheckBox *chexkboxLedRouge;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButtonMarche;
    QPushButton *pushButton_0;
    QPushButton *pushButtonArret;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Clavier)
    {
        if (Clavier->objectName().isEmpty())
            Clavier->setObjectName("Clavier");
        Clavier->resize(321, 238);
        QFont font;
        font.setPointSize(20);
        Clavier->setFont(font);
        gridLayout = new QGridLayout(Clavier);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        chexkboxLedVerte = new QCheckBox(Clavier);
        chexkboxLedVerte->setObjectName("chexkboxLedVerte");

        horizontalLayout->addWidget(chexkboxLedVerte);

        chexkboxLedRouge = new QCheckBox(Clavier);
        chexkboxLedRouge->setObjectName("chexkboxLedRouge");

        horizontalLayout->addWidget(chexkboxLedRouge);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_3 = new QPushButton(Clavier);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout_2->addWidget(pushButton_3, 0, 3, 1, 1);

        pushButton_6 = new QPushButton(Clavier);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout_2->addWidget(pushButton_6, 1, 3, 1, 1);

        pushButton_7 = new QPushButton(Clavier);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout_2->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(Clavier);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout_2->addWidget(pushButton_8, 2, 1, 1, 2);

        pushButton_9 = new QPushButton(Clavier);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout_2->addWidget(pushButton_9, 2, 3, 1, 1);

        pushButtonMarche = new QPushButton(Clavier);
        pushButtonMarche->setObjectName("pushButtonMarche");

        gridLayout_2->addWidget(pushButtonMarche, 3, 0, 1, 1);

        pushButton_0 = new QPushButton(Clavier);
        pushButton_0->setObjectName("pushButton_0");

        gridLayout_2->addWidget(pushButton_0, 3, 1, 1, 2);

        pushButtonArret = new QPushButton(Clavier);
        pushButtonArret->setObjectName("pushButtonArret");

        gridLayout_2->addWidget(pushButtonArret, 3, 3, 1, 1);

        pushButton_1 = new QPushButton(Clavier);
        pushButton_1->setObjectName("pushButton_1");

        gridLayout_2->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(Clavier);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 2);

        pushButton_4 = new QPushButton(Clavier);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout_2->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(Clavier);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout_2->addWidget(pushButton_5, 1, 1, 1, 2);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);


        retranslateUi(Clavier);

        QMetaObject::connectSlotsByName(Clavier);
    } // setupUi

    void retranslateUi(QWidget *Clavier)
    {
        Clavier->setWindowTitle(QCoreApplication::translate("Clavier", "Centrale d'alarme", nullptr));
        chexkboxLedVerte->setText(QCoreApplication::translate("Clavier", "Led Verte", nullptr));
        chexkboxLedRouge->setText(QCoreApplication::translate("Clavier", "Led Rouge", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Clavier", "3", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Clavier", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Clavier", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Clavier", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Clavier", "9", nullptr));
        pushButtonMarche->setText(QCoreApplication::translate("Clavier", "Marche", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Clavier", "0", nullptr));
        pushButtonArret->setText(QCoreApplication::translate("Clavier", "Arr\303\252t", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Clavier", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Clavier", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Clavier", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Clavier", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clavier: public Ui_Clavier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLAVIER_H
