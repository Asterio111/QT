/********************************************************************************
** Form generated from reading UI file 'specific.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIFIC_H
#define UI_SPECIFIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Specific
{
public:
    QLabel *emotionlabel;
    QLabel *emotion;
    QLabel *song;
    QLabel *songlabel;
    QGroupBox *groupBox;
    QLabel *label8;
    QLabel *label10;
    QLabel *label14;
    QLabel *label16;
    QLabel *label18;
    QLabel *label20;
    QLabel *schedule8;
    QLabel *schedule10;
    QLabel *schedule14;
    QLabel *schedule16;
    QLabel *schedule18;
    QLabel *schedule20;

    void setupUi(QWidget *Specific)
    {
        if (Specific->objectName().isEmpty())
            Specific->setObjectName("Specific");
        Specific->resize(567, 330);
        emotionlabel = new QLabel(Specific);
        emotionlabel->setObjectName("emotionlabel");
        emotionlabel->setGeometry(QRect(20, 20, 101, 31));
        emotion = new QLabel(Specific);
        emotion->setObjectName("emotion");
        emotion->setGeometry(QRect(50, 60, 40, 12));
        song = new QLabel(Specific);
        song->setObjectName("song");
        song->setGeometry(QRect(50, 110, 101, 16));
        songlabel = new QLabel(Specific);
        songlabel->setObjectName("songlabel");
        songlabel->setGeometry(QRect(20, 90, 101, 16));
        groupBox = new QGroupBox(Specific);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(150, 20, 321, 161));
        label8 = new QLabel(groupBox);
        label8->setObjectName("label8");
        label8->setGeometry(QRect(20, 30, 69, 15));
        label10 = new QLabel(groupBox);
        label10->setObjectName("label10");
        label10->setGeometry(QRect(20, 50, 69, 18));
        label14 = new QLabel(groupBox);
        label14->setObjectName("label14");
        label14->setGeometry(QRect(20, 70, 69, 24));
        label16 = new QLabel(groupBox);
        label16->setObjectName("label16");
        label16->setGeometry(QRect(20, 90, 69, 16));
        label18 = new QLabel(groupBox);
        label18->setObjectName("label18");
        label18->setGeometry(QRect(20, 110, 69, 21));
        label20 = new QLabel(groupBox);
        label20->setObjectName("label20");
        label20->setGeometry(QRect(20, 130, 69, 21));
        schedule8 = new QLabel(groupBox);
        schedule8->setObjectName("schedule8");
        schedule8->setGeometry(QRect(110, 30, 191, 16));
        schedule10 = new QLabel(groupBox);
        schedule10->setObjectName("schedule10");
        schedule10->setGeometry(QRect(110, 50, 141, 16));
        schedule14 = new QLabel(groupBox);
        schedule14->setObjectName("schedule14");
        schedule14->setGeometry(QRect(110, 70, 131, 16));
        schedule16 = new QLabel(groupBox);
        schedule16->setObjectName("schedule16");
        schedule16->setGeometry(QRect(110, 90, 161, 16));
        schedule18 = new QLabel(groupBox);
        schedule18->setObjectName("schedule18");
        schedule18->setGeometry(QRect(110, 110, 121, 16));
        schedule20 = new QLabel(groupBox);
        schedule20->setObjectName("schedule20");
        schedule20->setGeometry(QRect(110, 130, 40, 12));

        retranslateUi(Specific);

        QMetaObject::connectSlotsByName(Specific);
    } // setupUi

    void retranslateUi(QWidget *Specific)
    {
        Specific->setWindowTitle(QCoreApplication::translate("Specific", "Form", nullptr));
        emotionlabel->setText(QCoreApplication::translate("Specific", "\346\202\250\344\273\212\345\244\251\347\232\204\345\277\203\346\203\205\346\230\257\357\274\232", nullptr));
        emotion->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
        song->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
        songlabel->setText(QCoreApplication::translate("Specific", "\346\202\250\345\217\257\344\273\245\345\260\235\350\257\225\345\220\254\345\220\254\350\277\231\351\246\226\346\255\214\357\274\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Specific", "\346\202\250\344\273\212\345\244\251\347\232\204\351\232\217\346\234\272\346\227\245\347\250\213\347\224\237\346\210\220\345\246\202\344\270\213", nullptr));
        label8->setText(QCoreApplication::translate("Specific", "08\357\274\23200-10\357\274\23200", nullptr));
        label10->setText(QCoreApplication::translate("Specific", "10\357\274\23200-12\357\274\23200", nullptr));
        label14->setText(QCoreApplication::translate("Specific", "14\357\274\23200-16\357\274\23200", nullptr));
        label16->setText(QCoreApplication::translate("Specific", "16\357\274\23200-18\357\274\23200", nullptr));
        label18->setText(QCoreApplication::translate("Specific", "18\357\274\23200-20\357\274\23200", nullptr));
        label20->setText(QCoreApplication::translate("Specific", "20\357\274\23200-22\357\274\23200", nullptr));
        schedule8->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
        schedule10->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
        schedule14->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
        schedule16->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
        schedule18->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
        schedule20->setText(QCoreApplication::translate("Specific", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Specific: public Ui_Specific {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIFIC_H
