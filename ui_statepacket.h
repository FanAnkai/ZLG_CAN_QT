/********************************************************************************
** Form generated from reading UI file 'statepacket.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATEPACKET_H
#define UI_STATEPACKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatePacket
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *comboBox_9;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_10;
    QLabel *label_13;
    QComboBox *comboBox_11;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_5;
    QLabel *label_19;
    QComboBox *comboBox_17;
    QLabel *label_20;
    QComboBox *comboBox_18;
    QLabel *label_21;
    QComboBox *comboBox_19;
    QLabel *label_22;
    QComboBox *comboBox_20;
    QLabel *label_23;
    QComboBox *comboBox_21;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QComboBox *comboBox_12;
    QLabel *label_15;
    QComboBox *comboBox_13;
    QLabel *label_16;
    QComboBox *comboBox_14;
    QLabel *label_17;
    QComboBox *comboBox_15;
    QLabel *label_18;
    QComboBox *comboBox_16;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QLabel *label_6;
    QComboBox *comboBox_5;
    QLabel *label_7;
    QComboBox *comboBox_6;
    QLabel *label_8;
    QComboBox *comboBox_7;
    QLabel *label_9;
    QComboBox *comboBox_8;

    void setupUi(QDialog *StatePacket)
    {
        if (StatePacket->objectName().isEmpty())
            StatePacket->setObjectName(QString::fromUtf8("StatePacket"));
        StatePacket->resize(301, 400);
        StatePacket->setStyleSheet(QString::fromUtf8("/*QComboBox*/\n"
"\n"
"QComboBox {\n"
"border: 1px solid rgb(111, 156, 207);\n"
"border-radius: 3px;\n"
"padding: 1px 18px 1px 3px;\n"
"min-width: 9em;\n"
"max-width: 9em;\n"
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
"min-width:50px;\n"
"max-width:50px;\n"
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
"b"
                        "order-color: #444444;\n"
"color:rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: #111111;\n"
"border-color: #333333;\n"
"color: yellow;\n"
"}\n"
"\n"
"/*QTabWidget*/\n"
"QTabWidget::tab-bar {\n"
"alignment: left;\n"
"}\n"
"QTabWidget::pane {\n"
"border-top: 2px solid #C2C7CB;\n"
"}\n"
"QTabBar::tab:selected {\n"
"margin-top:0px;\n"
"border-color: #9B9B9B;\n"
"border-bottom-color: #C2C7CB;\n"
"}\n"
"QTabBar::tab:!selected {\n"
"margin-top: 2px;\n"
"}\n"
"QTabBar::tab {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"border: 2px solid #C4C4C3;\n"
"border-bottom-color: #C2C7CB;\n"
"border-top-left-radius: 4px;\n"
"border-top-right-radius: 4px;\n"
"min-width: 8ex;\n"
"padding: 2px;\n"
"}\n"
"\n"
"/*QWidget*/\n"
"QWidget{\n"
"background-color:#F5F5F5;\n"
"}\n"
"\n"
"/*QGroupBox*/\n"
"QGroupBox {\n"
"border: 2px solid gray;\n"
"border-radius: 5px;\n"
"margin-top: 1ex;\n"
"}\n"
"QGroupBox::title {\n"
""
                        "subcontrol-origin: margin;\n"
"subcontrol-position: top center;\n"
"padding: 0 3px;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #FF0ECE, stop: 1 #FFFFFF);\n"
"}\n"
"\n"
"/*QCheckBox*/\n"
"\n"
"QCheckBox::indicator{\n"
"width: 13px;\n"
"height: 13px;\n"
"background-color: #00FF00;\n"
"border: 1px solid #000000;\n"
"border-radius:4px;\n"
"}\n"
"QCheckBox::indicator::checked{\n"
"background-color: qradialgradient(cx:0.5, cy:0.5, fx:0.25, fy:0.15,\n"
"radius:0.3, stop:0 #FF0000, stop:1 #FFFFFF);\n"
"}\n"
"\n"
"/*QtextEdit*/\n"
"\n"
"QTextEdit{\n"
"border: 1px solid gray;\n"
"border-radius: 5px;\n"
"}\n"
"QTextEdit#textEdit{\n"
"background-color: rgb(235, 255, 203);\n"
"}\n"
"QTextEdit#textEdit_2{\n"
"background-color: rgb(194, 255, 194);\n"
"}\n"
"QTextEdit#textEdit_3{\n"
"background-color: rgb(170, 255, 127);\n"
"}\n"
"QScrollBar:vertical{\n"
"width:8px;\n"
"background:rgba(0,0,0,0%);\n"
"margin:0px,0px,0px,0px;\n"
"padding-top:9px;\n"
"padding-bottom:9px;\n"
"}\n"
"QScrollBar::h"
                        "andle:vertical{\n"
"width:8px;\n"
"background:rgba(0,0,0,25%);\n"
"border-radius:4px;\n"
"min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover{\n"
"width:8px;\n"
"background:rgba(0,0,0,50%);\n"
"border-radius:4px;\n"
"min-height:20;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(StatePacket);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(StatePacket);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(StatePacket);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 2);

        label_2 = new QLabel(StatePacket);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(StatePacket);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 2);

        label_3 = new QLabel(StatePacket);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit = new QLineEdit(StatePacket);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 2);

        label_4 = new QLabel(StatePacket);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBox_3 = new QComboBox(StatePacket);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 3, 1, 1, 2);

        label_10 = new QLabel(StatePacket);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        label_11 = new QLabel(StatePacket);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 1);

        label_12 = new QLabel(StatePacket);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 6, 0, 1, 1);

        comboBox_9 = new QComboBox(StatePacket);
        comboBox_9->addItem(QString());
        comboBox_9->addItem(QString());
        comboBox_9->addItem(QString());
        comboBox_9->addItem(QString());
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));

        gridLayout->addWidget(comboBox_9, 4, 1, 1, 2);

        lineEdit_2 = new QLineEdit(StatePacket);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 5, 1, 1, 2);

        comboBox_10 = new QComboBox(StatePacket);
        comboBox_10->addItem(QString());
        comboBox_10->addItem(QString());
        comboBox_10->addItem(QString());
        comboBox_10->addItem(QString());
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));

        gridLayout->addWidget(comboBox_10, 6, 1, 1, 2);

        label_13 = new QLabel(StatePacket);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 7, 0, 1, 1);

        comboBox_11 = new QComboBox(StatePacket);
        comboBox_11->addItem(QString());
        comboBox_11->addItem(QString());
        comboBox_11->addItem(QString());
        comboBox_11->addItem(QString());
        comboBox_11->setObjectName(QString::fromUtf8("comboBox_11"));

        gridLayout->addWidget(comboBox_11, 7, 1, 1, 2);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget = new QTabWidget(StatePacket);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_5->addWidget(label_19, 0, 0, 1, 1);

        comboBox_17 = new QComboBox(tab);
        comboBox_17->addItem(QString());
        comboBox_17->addItem(QString());
        comboBox_17->addItem(QString());
        comboBox_17->addItem(QString());
        comboBox_17->setObjectName(QString::fromUtf8("comboBox_17"));

        gridLayout_5->addWidget(comboBox_17, 0, 1, 1, 1);

        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 1, 0, 1, 1);

        comboBox_18 = new QComboBox(tab);
        comboBox_18->addItem(QString());
        comboBox_18->addItem(QString());
        comboBox_18->addItem(QString());
        comboBox_18->addItem(QString());
        comboBox_18->setObjectName(QString::fromUtf8("comboBox_18"));

        gridLayout_5->addWidget(comboBox_18, 1, 1, 1, 1);

        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 2, 0, 1, 1);

        comboBox_19 = new QComboBox(tab);
        comboBox_19->addItem(QString());
        comboBox_19->addItem(QString());
        comboBox_19->addItem(QString());
        comboBox_19->addItem(QString());
        comboBox_19->setObjectName(QString::fromUtf8("comboBox_19"));

        gridLayout_5->addWidget(comboBox_19, 2, 1, 1, 1);

        label_22 = new QLabel(tab);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_5->addWidget(label_22, 3, 0, 1, 1);

        comboBox_20 = new QComboBox(tab);
        comboBox_20->addItem(QString());
        comboBox_20->addItem(QString());
        comboBox_20->addItem(QString());
        comboBox_20->addItem(QString());
        comboBox_20->setObjectName(QString::fromUtf8("comboBox_20"));

        gridLayout_5->addWidget(comboBox_20, 3, 1, 1, 1);

        label_23 = new QLabel(tab);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_5->addWidget(label_23, 4, 0, 1, 1);

        comboBox_21 = new QComboBox(tab);
        comboBox_21->addItem(QString());
        comboBox_21->addItem(QString());
        comboBox_21->addItem(QString());
        comboBox_21->addItem(QString());
        comboBox_21->setObjectName(QString::fromUtf8("comboBox_21"));

        gridLayout_5->addWidget(comboBox_21, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        comboBox_12 = new QComboBox(tab_2);
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->setObjectName(QString::fromUtf8("comboBox_12"));

        gridLayout_4->addWidget(comboBox_12, 0, 1, 1, 1);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 1, 0, 1, 1);

        comboBox_13 = new QComboBox(tab_2);
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->setObjectName(QString::fromUtf8("comboBox_13"));

        gridLayout_4->addWidget(comboBox_13, 1, 1, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 2, 0, 1, 1);

        comboBox_14 = new QComboBox(tab_2);
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->setObjectName(QString::fromUtf8("comboBox_14"));

        gridLayout_4->addWidget(comboBox_14, 2, 1, 1, 1);

        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        comboBox_15 = new QComboBox(tab_2);
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->addItem(QString());
        comboBox_15->setObjectName(QString::fromUtf8("comboBox_15"));

        gridLayout_4->addWidget(comboBox_15, 3, 1, 1, 1);

        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 4, 0, 1, 1);

        comboBox_16 = new QComboBox(tab_2);
        comboBox_16->addItem(QString());
        comboBox_16->addItem(QString());
        comboBox_16->addItem(QString());
        comboBox_16->addItem(QString());
        comboBox_16->setObjectName(QString::fromUtf8("comboBox_16"));

        gridLayout_4->addWidget(comboBox_16, 4, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        comboBox_4 = new QComboBox(tab_3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_3->addWidget(comboBox_4, 0, 1, 1, 1);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        comboBox_5 = new QComboBox(tab_3);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_3->addWidget(comboBox_5, 1, 1, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        comboBox_6 = new QComboBox(tab_3);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_3->addWidget(comboBox_6, 2, 1, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        comboBox_7 = new QComboBox(tab_3);
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_3->addWidget(comboBox_7, 3, 1, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        comboBox_8 = new QComboBox(tab_3);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_3->addWidget(comboBox_8, 4, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(StatePacket);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(StatePacket);
    } // setupUi

    void retranslateUi(QDialog *StatePacket)
    {
        StatePacket->setWindowTitle(QCoreApplication::translate("StatePacket", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("StatePacket", "\351\207\207\351\233\206\346\250\241\345\235\227\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("StatePacket", "1-\350\275\246\345\272\225\350\275\250\344\270\255\351\207\207\351\233\206\347\256\2612", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("StatePacket", "2-\350\275\246\345\272\225\350\275\250\344\270\255\351\207\207\351\233\206\347\256\2611", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("StatePacket", "3-\350\275\246\345\272\225\350\275\250\345\244\226\351\207\207\351\233\206\347\256\261", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("StatePacket", "4-\350\265\260\350\241\214\351\203\250\344\276\247\351\235\242\351\207\207\351\233\206\347\256\261", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("StatePacket", "5-\350\275\246\344\275\223\344\276\247\351\235\242\351\207\207\351\233\206\347\256\261", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("StatePacket", "6-\350\275\246\351\241\266\351\207\207\351\233\206\346\250\241\345\235\227", nullptr));

        label_2->setText(QCoreApplication::translate("StatePacket", "\351\207\207\351\233\206\346\250\241\345\235\227\345\267\245\344\275\234\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("StatePacket", "1-\347\273\264\346\212\244\347\212\266\346\200\201", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("StatePacket", "2-\344\274\221\347\234\240\347\212\266\346\200\201", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("StatePacket", "3-\346\277\200\346\264\273\347\212\266\346\200\201", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("StatePacket", "4-\346\213\215\346\221\204\347\212\266\346\200\201", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("StatePacket", "5-\351\224\231\350\257\257\347\212\266\346\200\201", nullptr));

        label_3->setText(QCoreApplication::translate("StatePacket", "\351\207\207\351\233\206\346\250\241\345\235\227\347\274\226\345\217\267\357\274\232", nullptr));
        lineEdit->setText(QCoreApplication::translate("StatePacket", "1", nullptr));
        label_4->setText(QCoreApplication::translate("StatePacket", "\351\207\207\351\233\206\346\250\241\345\235\227\345\267\245\344\275\234\346\250\241\345\274\217\357\274\232", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("StatePacket", "1-\350\277\220\350\241\214\346\250\241\345\274\217", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("StatePacket", "2-\347\273\264\346\212\244\346\250\241\345\274\217", nullptr));

        label_10->setText(QCoreApplication::translate("StatePacket", "\351\230\262\346\212\244\351\227\250\347\212\266\346\200\201\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("StatePacket", "\346\260\264\344\275\215\346\212\245\350\255\246\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("StatePacket", "\347\256\261\344\275\223\346\225\243\347\203\255\351\243\216\346\211\207\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_9->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_9->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_9->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_9->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        lineEdit_2->setText(QCoreApplication::translate("StatePacket", "1", nullptr));
        comboBox_10->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_10->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_10->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_10->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_13->setText(QCoreApplication::translate("StatePacket", "\345\212\240\347\203\255\345\231\250\346\225\205\351\232\234\347\212\266\346\200\201\357\274\210\351\242\204\347\225\231\357\274\211\357\274\232", nullptr));
        comboBox_11->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_11->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_11->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_11->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_19->setText(QCoreApplication::translate("StatePacket", "\347\233\270\346\234\272\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_17->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_17->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_17->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_17->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_20->setText(QCoreApplication::translate("StatePacket", "\345\205\211\346\272\220\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_18->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_18->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_18->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_18->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_21->setText(QCoreApplication::translate("StatePacket", "\351\231\244\345\260\230\351\243\216\346\211\207\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_19->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_19->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_19->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_19->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_22->setText(QCoreApplication::translate("StatePacket", "\346\225\243\347\203\255\351\243\216\346\211\2071\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_20->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_20->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_20->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_20->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_23->setText(QCoreApplication::translate("StatePacket", "\346\225\243\347\203\255\351\243\216\346\211\2072\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_21->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_21->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_21->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_21->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("StatePacket", "\347\233\270\346\234\2721", nullptr));
        label_14->setText(QCoreApplication::translate("StatePacket", "\347\233\270\346\234\272\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_12->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_12->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_12->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_12->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_15->setText(QCoreApplication::translate("StatePacket", "\345\205\211\346\272\220\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_13->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_13->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_13->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_13->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_16->setText(QCoreApplication::translate("StatePacket", "\351\231\244\345\260\230\351\243\216\346\211\207\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_14->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_14->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_14->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_14->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_17->setText(QCoreApplication::translate("StatePacket", "\346\225\243\347\203\255\351\243\216\346\211\2071\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_15->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_15->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_15->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_15->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_18->setText(QCoreApplication::translate("StatePacket", "\346\225\243\347\203\255\351\243\216\346\211\2072\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_16->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_16->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_16->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_16->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("StatePacket", "\347\233\270\346\234\2722", nullptr));
        label_5->setText(QCoreApplication::translate("StatePacket", "\347\233\270\346\234\272\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_6->setText(QCoreApplication::translate("StatePacket", "\345\205\211\346\272\220\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_7->setText(QCoreApplication::translate("StatePacket", "\351\231\244\345\260\230\351\243\216\346\211\207\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_6->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_8->setText(QCoreApplication::translate("StatePacket", "\346\225\243\347\203\255\351\243\216\346\211\2071\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_7->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_7->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_7->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_7->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        label_9->setText(QCoreApplication::translate("StatePacket", "\346\225\243\347\203\255\351\243\216\346\211\2072\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox_8->setItemText(0, QCoreApplication::translate("StatePacket", "0-\346\250\241\345\235\227\344\270\215\345\255\230\345\234\250\346\255\244\351\203\250\344\273\266", nullptr));
        comboBox_8->setItemText(1, QCoreApplication::translate("StatePacket", "1-\351\203\250\344\273\266\346\211\223\345\274\200", nullptr));
        comboBox_8->setItemText(2, QCoreApplication::translate("StatePacket", "2-\351\203\250\344\273\266\345\205\263\351\227\255", nullptr));
        comboBox_8->setItemText(3, QCoreApplication::translate("StatePacket", "3-\351\203\250\344\273\266\346\225\205\351\232\234", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("StatePacket", "\347\233\270\346\234\2723", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatePacket: public Ui_StatePacket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATEPACKET_H
