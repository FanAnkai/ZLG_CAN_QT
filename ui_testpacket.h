/********************************************************************************
** Form generated from reading UI file 'testpacket.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTPACKET_H
#define UI_TESTPACKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TestPacket
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *TestPacket)
    {
        if (TestPacket->objectName().isEmpty())
            TestPacket->setObjectName(QString::fromUtf8("TestPacket"));
        TestPacket->resize(322, 185);
        verticalLayout = new QVBoxLayout(TestPacket);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(TestPacket);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(TestPacket);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(TestPacket);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(TestPacket);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        label_3 = new QLabel(TestPacket);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox_3 = new QComboBox(TestPacket);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 2, 1, 1, 1);

        label_4 = new QLabel(TestPacket);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBox_4 = new QComboBox(TestPacket);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 3, 1, 1, 1);

        label_5 = new QLabel(TestPacket);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit = new QLineEdit(TestPacket);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 4, 1, 1, 1);

        label_6 = new QLabel(TestPacket);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEdit_2 = new QLineEdit(TestPacket);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(TestPacket);

        QMetaObject::connectSlotsByName(TestPacket);
    } // setupUi

    void retranslateUi(QDialog *TestPacket)
    {
        TestPacket->setWindowTitle(QCoreApplication::translate("TestPacket", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TestPacket", "DC24V\347\224\265\346\272\220\346\225\205\351\232\234\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TestPacket", "1-\346\255\243\345\270\270", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TestPacket", "2-\346\225\205\351\232\234", nullptr));

        label_2->setText(QCoreApplication::translate("TestPacket", "DC12V\347\224\265\346\272\220\346\225\205\351\232\234\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("TestPacket", "1-\346\255\243\345\270\270", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("TestPacket", "2-\346\225\205\351\232\234", nullptr));

        label_3->setText(QCoreApplication::translate("TestPacket", "\346\270\251\345\272\246\344\274\240\346\204\237\345\231\250\346\225\205\351\232\234\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("TestPacket", "1-\346\255\243\345\270\270", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("TestPacket", "2-\346\225\205\351\232\234", nullptr));

        label_4->setText(QCoreApplication::translate("TestPacket", "\346\225\243\347\203\255\351\243\216\346\211\207\345\274\200\345\220\257\346\216\247\345\210\266\357\274\232", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("TestPacket", "1-\345\274\200\345\220\257", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("TestPacket", "2-\345\205\263\351\227\255", nullptr));

        label_5->setText(QCoreApplication::translate("TestPacket", "\347\216\257\345\242\203\346\270\251\345\272\246\357\274\232\302\260C", nullptr));
        lineEdit->setText(QCoreApplication::translate("TestPacket", "0", nullptr));
        label_6->setText(QCoreApplication::translate("TestPacket", "DC5V\347\224\265\346\272\220\347\224\265\345\216\213\357\274\2320.01V", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("TestPacket", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestPacket: public Ui_TestPacket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTPACKET_H
