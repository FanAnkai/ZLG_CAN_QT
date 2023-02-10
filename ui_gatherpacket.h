/********************************************************************************
** Form generated from reading UI file 'gatherpacket.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GATHERPACKET_H
#define UI_GATHERPACKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GatherPacket
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QLabel *label_5;
    QComboBox *comboBox_5;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *GatherPacket)
    {
        if (GatherPacket->objectName().isEmpty())
            GatherPacket->setObjectName(QString::fromUtf8("GatherPacket"));
        GatherPacket->resize(172, 232);
        verticalLayout_2 = new QVBoxLayout(GatherPacket);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(GatherPacket);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        comboBox_5 = new QComboBox(groupBox);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(GatherPacket);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        lineEdit = new QLineEdit(GatherPacket);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 1, 1, 1, 1);

        label_7 = new QLabel(GatherPacket);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(GatherPacket);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 2, 1, 1, 1);

        label = new QLabel(GatherPacket);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(GatherPacket);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        retranslateUi(GatherPacket);

        QMetaObject::connectSlotsByName(GatherPacket);
    } // setupUi

    void retranslateUi(QDialog *GatherPacket)
    {
        GatherPacket->setWindowTitle(QCoreApplication::translate("GatherPacket", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GatherPacket", "\346\265\213\351\200\237\344\274\240\346\204\237\345\231\250\346\225\205\351\232\234\347\212\266\346\200\201\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("GatherPacket", "\345\267\246\345\211\215\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("GatherPacket", "\346\255\243\345\270\270", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("GatherPacket", "\346\225\205\351\232\234", nullptr));

        label_3->setText(QCoreApplication::translate("GatherPacket", "\345\267\246\345\220\216\357\274\232", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("GatherPacket", "\346\255\243\345\270\270", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("GatherPacket", "\346\225\205\351\232\234", nullptr));

        label_4->setText(QCoreApplication::translate("GatherPacket", "\345\217\263\345\211\215\357\274\232", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("GatherPacket", "\346\255\243\345\270\270", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("GatherPacket", "\346\225\205\351\232\234", nullptr));

        label_5->setText(QCoreApplication::translate("GatherPacket", "\345\217\263\345\220\216\357\274\232", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("GatherPacket", "\346\255\243\345\270\270", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("GatherPacket", "\346\225\205\351\232\234", nullptr));

        label_6->setText(QCoreApplication::translate("GatherPacket", "\350\275\246\351\200\237\345\200\274\357\274\2320.01km/h", nullptr));
        lineEdit->setText(QCoreApplication::translate("GatherPacket", "1", nullptr));
        label_7->setText(QCoreApplication::translate("GatherPacket", "\347\263\273\347\273\237\346\227\266\351\227\264\357\274\2324bytes", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("GatherPacket", "0", nullptr));
        label->setText(QCoreApplication::translate("GatherPacket", "\345\207\272\345\205\245\345\272\223\344\277\241\345\217\267\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("GatherPacket", "\345\205\245\345\272\223", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("GatherPacket", "\345\207\272\345\272\223", nullptr));

    } // retranslateUi

};

namespace Ui {
    class GatherPacket: public Ui_GatherPacket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GATHERPACKET_H
