/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_10;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_11;
    QTableWidget *tableWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QCheckBox *checkBox_5;
    QSpacerItem *horizontalSpacer_5;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_4;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QComboBox *comboBox_4;
    QPushButton *pushButton_11;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_4;
    QPushButton *pushButton_16;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_13;
    QTableWidget *tableWidget_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QCheckBox *checkBox_6;
    QSpacerItem *horizontalSpacer_6;
    QPlainTextEdit *plainTextEdit_3;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox_7;
    QLabel *label_14;
    QComboBox *comboBox_5;
    QLabel *label_15;
    QComboBox *comboBox_6;
    QPushButton *pushButton_17;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit_4;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1233, 687);
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(11);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("/*QComboBox*/\n"
"\n"
"QComboBox {\n"
"border: 1px solid rgb(111, 156, 207);\n"
"border-radius: 3px;\n"
"padding: 1px 18px 1px 3px;\n"
"min-width: 9em;\n"
"max-width:9em;\n"
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
"bo"
                        "rder-color: #444444;\n"
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
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setFont(font);
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        horizontalLayout->addWidget(comboBox);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFont(font);

        horizontalLayout->addWidget(comboBox_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout->addWidget(label_7);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_4);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setFont(font);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font);

        horizontalLayout_6->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font);

        horizontalLayout_6->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setFont(font);

        horizontalLayout_6->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(tab_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setFont(font);

        horizontalLayout_6->addWidget(pushButton_9);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        horizontalLayout_6->addWidget(pushButton_3);

        pushButton_10 = new QPushButton(tab_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setFont(font);

        horizontalLayout_6->addWidget(pushButton_10);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        verticalLayout_9->addWidget(label_11);

        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 8)
            tableWidget_2->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setMinimumSize(QSize(1189, 0));
        tableWidget_2->setFont(font);

        verticalLayout_9->addWidget(tableWidget_2);


        verticalLayout->addLayout(verticalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_7->addWidget(label_10);

        checkBox_5 = new QCheckBox(tab_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setFont(font);

        horizontalLayout_7->addWidget(checkBox_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_7);

        plainTextEdit_2 = new QPlainTextEdit(tab_2);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setFont(font);

        verticalLayout->addWidget(plainTextEdit_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBox_4 = new QCheckBox(tab_3);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setFont(font);

        horizontalLayout_5->addWidget(checkBox_4);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_5->addWidget(label_9);

        comboBox_3 = new QComboBox(tab_3);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setFont(font);

        horizontalLayout_5->addWidget(comboBox_3);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_5->addWidget(label_8);

        comboBox_4 = new QComboBox(tab_3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setFont(font);

        horizontalLayout_5->addWidget(comboBox_4);

        pushButton_11 = new QPushButton(tab_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setFont(font);

        horizontalLayout_5->addWidget(pushButton_11);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalLayout_5->setStretch(6, 1);

        verticalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_7);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_6->addWidget(label_4);

        plainTextEdit = new QPlainTextEdit(tab_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setFont(font);

        verticalLayout_6->addWidget(plainTextEdit);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_2 = new QVBoxLayout(tab_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_12 = new QPushButton(tab_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setFont(font);

        horizontalLayout_9->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(tab_4);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setFont(font);

        horizontalLayout_9->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(tab_4);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setFont(font);

        horizontalLayout_9->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(tab_4);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setFont(font);

        horizontalLayout_9->addWidget(pushButton_15);

        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);

        horizontalLayout_9->addWidget(pushButton_4);

        pushButton_16 = new QPushButton(tab_4);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setFont(font);

        horizontalLayout_9->addWidget(pushButton_16);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        verticalLayout_10->addWidget(label_13);

        tableWidget_3 = new QTableWidget(tab_4);
        if (tableWidget_3->columnCount() < 8)
            tableWidget_3->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(7, __qtablewidgetitem15);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setFont(font);

        verticalLayout_10->addWidget(tableWidget_3);


        verticalLayout_2->addLayout(verticalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_8->addWidget(label_12);

        checkBox_6 = new QCheckBox(tab_4);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setFont(font);

        horizontalLayout_8->addWidget(checkBox_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_8);

        plainTextEdit_3 = new QPlainTextEdit(tab_4);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setFont(font);

        verticalLayout_2->addWidget(plainTextEdit_3);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        checkBox_7 = new QCheckBox(tab_5);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setFont(font);

        horizontalLayout_10->addWidget(checkBox_7);

        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        horizontalLayout_10->addWidget(label_14);

        comboBox_5 = new QComboBox(tab_5);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setFont(font);

        horizontalLayout_10->addWidget(comboBox_5);

        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        horizontalLayout_10->addWidget(label_15);

        comboBox_6 = new QComboBox(tab_5);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setFont(font);

        horizontalLayout_10->addWidget(comboBox_6);

        pushButton_17 = new QPushButton(tab_5);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setFont(font);

        horizontalLayout_10->addWidget(pushButton_17);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        horizontalLayout_10->setStretch(6, 1);

        verticalLayout_3->addLayout(horizontalLayout_10);

        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        plainTextEdit_4 = new QPlainTextEdit(tab_5);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setFont(font);

        verticalLayout_3->addWidget(plainTextEdit_4);

        tabWidget->addTab(tab_5, QString());

        verticalLayout_4->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1233, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        comboBox->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ZLG_CAN_TEST", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "USBCAN2", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "USBCAN-2E-U", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\347\264\242\345\274\225\345\217\267\357\274\232", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\351\200\232\351\201\223\345\217\267\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "\351\200\232\351\201\2230", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "\351\200\232\351\201\2231", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "\345\217\214\351\200\232\351\201\223", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245CAN", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255CAN", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\234\252\350\277\236\346\216\245", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\270\247", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\270\247", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\345\276\252\347\216\257\345\217\221\351\200\201", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\345\276\252\347\216\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\215\225\346\254\241\345\217\221\351\200\201", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\345\210\227\350\241\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\270\247\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\345\270\247\346\240\274\345\274\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\270\247ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\345\270\247\351\227\264\351\232\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\254\241\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\217\221\350\207\252\346\224\266", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\347\273\223\346\236\234", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "CAN1\346\236\204\351\200\240\345\217\221\351\200\201", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211\346\212\245\346\226\207\347\261\273\345\236\213", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\351\207\207\351\233\206\346\235\277\351\207\207\351\233\206\346\212\245\346\226\207", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "\344\270\273\346\216\247\347\256\261\346\216\247\345\210\266\346\212\245\346\226\207", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\212\245\346\226\207", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\347\233\221\346\265\213\346\212\245\346\226\207", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\344\277\241\346\201\257\346\212\245\346\226\207", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("MainWindow", "\346\211\200\346\234\211", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211\346\272\220\345\234\260\345\235\200", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "1-\344\270\273\346\216\247\346\235\277", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "2-\351\207\207\351\233\206\346\235\277", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "3-\346\262\211\347\256\261\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("MainWindow", "4-\344\276\247\347\256\261\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("MainWindow", "5-\350\275\246\351\241\266\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_4->setItemText(5, QCoreApplication::translate("MainWindow", "6-\345\271\277\346\222\255", nullptr));
        comboBox_4->setItemText(6, QCoreApplication::translate("MainWindow", "\346\211\200\346\234\211", nullptr));

        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264  \346\212\245\346\226\207\347\261\273\345\236\213  ID \346\225\260\346\215\256  \346\272\220\345\234\260\345\235\200->\347\233\256\347\232\204\345\234\260\345\235\200\n"
"\350\247\243\346\236\220\345\206\205\345\256\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "CAN1\346\216\245\346\224\266\350\247\243\346\236\220", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\270\247", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\270\247", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\276\252\347\216\257", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\345\276\252\347\216\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\345\215\225\346\254\241\345\217\221\351\200\201", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\345\210\227\350\241\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\345\270\247\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\345\270\247\346\240\274\345\274\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\345\270\247ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\345\270\247\351\227\264\351\232\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\254\241\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\217\221\350\207\252\346\224\266", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\347\273\223\346\236\234", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "CAN2\346\236\204\351\200\240\345\217\221\351\200\201", nullptr));
        checkBox_7->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211\346\212\245\346\226\207\347\261\273\345\236\213", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\351\207\207\351\233\206\346\235\277\351\207\207\351\233\206\346\212\245\346\226\207", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "\344\270\273\346\216\247\347\256\261\346\216\247\345\210\266\346\212\245\346\226\207", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\212\245\346\226\207", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\347\233\221\346\265\213\346\212\245\346\226\207", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("MainWindow", "\346\235\277\345\215\241\344\277\241\346\201\257\346\212\245\346\226\207", nullptr));
        comboBox_5->setItemText(5, QCoreApplication::translate("MainWindow", "\346\211\200\346\234\211", nullptr));

        label_15->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211\346\272\220\345\234\260\345\235\200", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("MainWindow", "1-\344\270\273\346\216\247\346\235\277", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("MainWindow", "2-\351\207\207\351\233\206\346\235\277", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("MainWindow", "3-\346\262\211\347\256\261\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_6->setItemText(3, QCoreApplication::translate("MainWindow", "4-\344\276\247\347\256\261\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_6->setItemText(4, QCoreApplication::translate("MainWindow", "5-\350\275\246\351\241\266\346\216\247\345\210\266\346\235\277", nullptr));
        comboBox_6->setItemText(5, QCoreApplication::translate("MainWindow", "6-\345\271\277\346\222\255", nullptr));
        comboBox_6->setItemText(6, QCoreApplication::translate("MainWindow", "\346\211\200\346\234\211", nullptr));

        pushButton_17->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264  \346\212\245\346\226\207\347\261\273\345\236\213  ID \346\225\260\346\215\256  \346\272\220\345\234\260\345\235\200->\347\233\256\347\232\204\345\234\260\345\235\200\n"
"\350\247\243\346\236\220\345\206\205\345\256\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "CAN2\346\216\245\346\224\266\350\247\243\346\236\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
