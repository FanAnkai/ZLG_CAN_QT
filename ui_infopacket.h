/********************************************************************************
** Form generated from reading UI file 'infopacket.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOPACKET_H
#define UI_INFOPACKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoPacket
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_7;
    QComboBox *comboBox_2;

    void setupUi(QDialog *InfoPacket)
    {
        if (InfoPacket->objectName().isEmpty())
            InfoPacket->setObjectName(QString::fromUtf8("InfoPacket"));
        InfoPacket->resize(311, 213);
        verticalLayout = new QVBoxLayout(InfoPacket);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(InfoPacket);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(InfoPacket);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(InfoPacket);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(InfoPacket);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_4 = new QLabel(InfoPacket);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(InfoPacket);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_3 = new QLabel(InfoPacket);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(InfoPacket);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_5 = new QLabel(InfoPacket);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_5 = new QLineEdit(InfoPacket);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);

        label_6 = new QLabel(InfoPacket);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        comboBox = new QComboBox(InfoPacket);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 5, 1, 1, 1);

        label_7 = new QLabel(InfoPacket);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        comboBox_2 = new QComboBox(InfoPacket);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 6, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(InfoPacket);

        QMetaObject::connectSlotsByName(InfoPacket);
    } // setupUi

    void retranslateUi(QDialog *InfoPacket)
    {
        InfoPacket->setWindowTitle(QCoreApplication::translate("InfoPacket", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoPacket", "\347\224\237\345\221\275\344\277\241\345\217\267\357\274\232", nullptr));
        lineEdit->setText(QCoreApplication::translate("InfoPacket", "0", nullptr));
        label_2->setText(QCoreApplication::translate("InfoPacket", "\347\241\254\344\273\266\344\270\273\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("InfoPacket", "0", nullptr));
        label_4->setText(QCoreApplication::translate("InfoPacket", "\347\241\254\344\273\266\346\254\241\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("InfoPacket", "0", nullptr));
        label_3->setText(QCoreApplication::translate("InfoPacket", "\350\275\257\344\273\266\344\270\273\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("InfoPacket", "0", nullptr));
        label_5->setText(QCoreApplication::translate("InfoPacket", "\350\275\257\344\273\266\346\254\241\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("InfoPacket", "0", nullptr));
        label_6->setText(QCoreApplication::translate("InfoPacket", "\346\235\277\345\215\241CAN1\346\225\205\351\232\234\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("InfoPacket", "1-\346\255\243\345\270\270", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("InfoPacket", "2-\346\225\205\351\232\234", nullptr));

        label_7->setText(QCoreApplication::translate("InfoPacket", "\346\235\277\345\215\241CAN2\346\225\205\351\232\234\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("InfoPacket", "1-\346\255\243\345\270\270", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("InfoPacket", "2-\346\225\205\351\232\234", nullptr));

    } // retranslateUi

};

namespace Ui {
    class InfoPacket: public Ui_InfoPacket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOPACKET_H
