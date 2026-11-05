/********************************************************************************
** Form generated from reading UI file 'detecteur.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTEUR_H
#define UI_DETECTEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Detecteur
{
public:
    QPushButton *pushbuttonIntrus;

    void setupUi(QDialog *Detecteur)
    {
        if (Detecteur->objectName().isEmpty())
            Detecteur->setObjectName("Detecteur");
        Detecteur->resize(347, 162);
        Detecteur->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        pushbuttonIntrus = new QPushButton(Detecteur);
        pushbuttonIntrus->setObjectName("pushbuttonIntrus");
        pushbuttonIntrus->setGeometry(QRect(10, 10, 331, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Mono")});
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(false);
        pushbuttonIntrus->setFont(font);

        retranslateUi(Detecteur);

        QMetaObject::connectSlotsByName(Detecteur);
    } // setupUi

    void retranslateUi(QDialog *Detecteur)
    {
        Detecteur->setWindowTitle(QCoreApplication::translate("Detecteur", "d\303\251tecteur temporis\303\251", nullptr));
        pushbuttonIntrus->setText(QCoreApplication::translate("Detecteur", "Pr\303\251sence d\303\251tect\303\251e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Detecteur: public Ui_Detecteur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTEUR_H
