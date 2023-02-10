/********************************************************************************
** Form generated from reading UI file 'makepacket.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKEPACKET_H
#define UI_MAKEPACKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MakePacket
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *MakePacket)
    {
        if (MakePacket->objectName().isEmpty())
            MakePacket->setObjectName(QString::fromUtf8("MakePacket"));
        MakePacket->resize(789, 419);
        MakePacket->setStyleSheet(QString::fromUtf8("/*QComboBox*/\n"
"\n"
"QComboBox {\n"
"border: 1px solid rgb(111, 156, 207);\n"
"border-radius: 3px;\n"
"padding: 1px 18px 1px 3px;\n"
"min-width: 8em;\n"
"max-width: 8em;\n"
"}\n"
"QComboBox::drop-down {\n"
"subcontrol-origin: padding;\n"
"subcontrol-position: top right;\n"
"width: 15px;\n"
"border-left-width: 1px;\n"
"border-left-color: darkgray;\n"
"border-left-style: solid;\n"
"border-top-right-radius: 3px;\n"
"border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"border: 2px solid darkgray;\n"
"selection-background-color: lightgray;\n"
"}\n"
"\n"
"/*QLineEdit*/\n"
"\n"
"QLineEdit{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: yellow;\n"
"selection-background-color: darkgray;\n"
"}\n"
"\n"
"/*QPushButton*/\n"
"\n"
"QPushButton{\n"
"min-width:75px;\n"
"max-width:75px;\n"
"min-height:20px;\n"
"border:1px solid black;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: #333333;\n"
"border-color: #444444;\n"
"color:rgb(255,"
                        "255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: #111111;\n"
"border-color: #333333;\n"
"color: yellow;\n"
"}\n"
"\n"
"/*QWidget*/\n"
"QWidget{\n"
"background-color:#F5F5F5;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(MakePacket);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(MakePacket);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(MakePacket);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(MakePacket);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        comboBox_2 = new QComboBox(MakePacket);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_5->addWidget(comboBox_2);

        horizontalLayout_5->setStretch(1, 1);

        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(MakePacket);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        comboBox_3 = new QComboBox(MakePacket);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_7->addWidget(comboBox_3);

        horizontalLayout_7->setStretch(1, 1);

        horizontalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        widget = new QWidget(MakePacket);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_9->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(MakePacket);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout_9->addLayout(verticalLayout);

        horizontalLayout_9->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(3);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox = new QCheckBox(MakePacket);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        label_5 = new QLabel(MakePacket);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit_3 = new QLineEdit(MakePacket);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(lineEdit_3);

        label_2 = new QLabel(MakePacket);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(MakePacket);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(80, 0));
        lineEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(lineEdit);


        horizontalLayout_8->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(MakePacket);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(MakePacket);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(210, 0));

        horizontalLayout_3->addWidget(lineEdit_2);


        horizontalLayout_8->addLayout(horizontalLayout_3);

        label_7 = new QLabel(MakePacket);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEdit_4 = new QLineEdit(MakePacket);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_8->addWidget(lineEdit_4);

        pushButton = new QPushButton(MakePacket);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_8->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_8);


        retranslateUi(MakePacket);

        QMetaObject::connectSlotsByName(MakePacket);
    } // setupUi

    void retranslateUi(QDialog *MakePacket)
    {
        MakePacket->setWindowTitle(QCoreApplication::translate("MakePacket", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MakePacket", "\346\212\245\346\226\207\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MakePacket", "\351\207\207\351\233\206\346\235\277\351\207\207\351\233\206\346\212\245\346\226\207", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MakePacket", "\344\270\273\346\216\247\347\256\261\346\216\247\345\210\266\346\212\245\346\226\207", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MakePacket", "\351\207\207\351\233\206\346\250\241\345\235\227\347\212\266\346\200\201\346\212\245\346\226\207", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MakePacket", "\347\212\266\346\200\201\347\233\221\346\265\213\346\212\245\346\226\207", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MakePacket", "\346\235\277\345\215\241\344\277\241\346\201\257\346\212\245\346\226\207", nullptr));

        label_4->setText(QCoreApplication::translate("MakePacket", "\347\233\256\347\232\204\345\234\260\345\235\200\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MakePacket", "1-\350\256\276\345\244\207\351\227\264\344\270\273\346\216\247\346\235\277", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MakePacket", "2-\344\277\241\345\217\267\351\207\207\351\233\206\346\235\277", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MakePacket", "3-\346\262\211\347\256\261\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MakePacket", "4-\344\276\247\347\256\261\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MakePacket", "5-\350\275\246\351\241\266\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("MakePacket", "31-\345\271\277\346\222\255\345\234\260\345\235\200", nullptr));

        label_6->setText(QCoreApplication::translate("MakePacket", "\346\272\220\345\234\260\345\235\200\357\274\232", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MakePacket", "1-\350\256\276\345\244\207\351\227\264\344\270\273\346\216\247\346\235\277", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MakePacket", "2-\344\277\241\345\217\267\351\207\207\351\233\206\346\235\277", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MakePacket", "3-\346\262\211\347\256\261\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MakePacket", "4-\344\276\247\347\256\261\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("MakePacket", "5-\350\275\246\351\241\266\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("MakePacket", "31-\345\271\277\346\222\255\345\234\260\345\235\200", nullptr));

        pushButton_2->setText(QCoreApplication::translate("MakePacket", "\347\224\237\346\210\220\346\212\245\346\226\207", nullptr));
        checkBox->setText(QCoreApplication::translate("MakePacket", "\350\207\252\345\217\221\350\207\252\346\224\266", nullptr));
        label_5->setText(QCoreApplication::translate("MakePacket", "\345\217\221\351\200\201\345\221\250\346\234\237ms", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MakePacket", "500", nullptr));
        label_2->setText(QCoreApplication::translate("MakePacket", "ID\357\274\2320x", nullptr));
        lineEdit->setText(QCoreApplication::translate("MakePacket", "00000000", nullptr));
        label_3->setText(QCoreApplication::translate("MakePacket", "\346\225\260\346\215\256\357\274\232", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MakePacket", "00 00 00 00 00 00 00 00", nullptr));
        label_7->setText(QCoreApplication::translate("MakePacket", "\345\217\221\351\200\201\346\254\241\346\225\260\357\274\232", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MakePacket", "1", nullptr));
        pushButton->setText(QCoreApplication::translate("MakePacket", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakePacket: public Ui_MakePacket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEPACKET_H
