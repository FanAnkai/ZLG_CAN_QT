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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MakePacket
{
public:
    QCheckBox *checkBox;
    QLabel *label_8;
    QLabel *label_7;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QComboBox *can_RTR;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QComboBox *can_IDE;
    QLabel *label;

    void setupUi(QDialog *MakePacket)
    {
        if (MakePacket->objectName().isEmpty())
            MakePacket->setObjectName(QString::fromUtf8("MakePacket"));
        MakePacket->resize(450, 250);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MakePacket->sizePolicy().hasHeightForWidth());
        MakePacket->setSizePolicy(sizePolicy);
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
        checkBox = new QCheckBox(MakePacket);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 200, 91, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(11);
        checkBox->setFont(font);
        label_8 = new QLabel(MakePacket);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(267, 15, 40, 22));
        label_8->setFont(font);
        label_7 = new QLabel(MakePacket);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(197, 150, 80, 22));
        label_7->setFont(font);
        pushButton = new QPushButton(MakePacket);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 150, 77, 22));
        pushButton->setFont(font);
        lineEdit_4 = new QLineEdit(MakePacket);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(270, 150, 60, 22));
        lineEdit_4->setFont(font);
        label_5 = new QLabel(MakePacket);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 150, 80, 22));
        label_5->setFont(font);
        lineEdit_3 = new QLineEdit(MakePacket);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 150, 60, 22));
        lineEdit_3->setMaximumSize(QSize(100, 16777215));
        lineEdit_3->setFont(font);
        lineEdit = new QLineEdit(MakePacket);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 80, 100, 22));
        lineEdit->setMinimumSize(QSize(80, 0));
        lineEdit->setMaximumSize(QSize(100, 16777215));
        lineEdit->setFont(font);
        label_3 = new QLabel(MakePacket);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(172, 80, 36, 22));
        label_3->setFont(font);
        lineEdit_2 = new QLineEdit(MakePacket);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 80, 211, 22));
        lineEdit_2->setMinimumSize(QSize(210, 0));
        lineEdit_2->setFont(font);
        can_RTR = new QComboBox(MakePacket);
        can_RTR->addItem(QString());
        can_RTR->addItem(QString());
        can_RTR->setObjectName(QString::fromUtf8("can_RTR"));
        can_RTR->setGeometry(QRect(310, 15, 119, 22));
        can_RTR->setFont(font);
        pushButton_2 = new QPushButton(MakePacket);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 200, 77, 22));
        pushButton_2->setFont(font);
        label_2 = new QLabel(MakePacket);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 36, 22));
        label_2->setFont(font);
        can_IDE = new QComboBox(MakePacket);
        can_IDE->addItem(QString());
        can_IDE->addItem(QString());
        can_IDE->setObjectName(QString::fromUtf8("can_IDE"));
        can_IDE->setGeometry(QRect(59, 15, 119, 22));
        can_IDE->setFont(font);
        label = new QLabel(MakePacket);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 15, 40, 22));
        label->setFont(font);

        retranslateUi(MakePacket);

        QMetaObject::connectSlotsByName(MakePacket);
    } // setupUi

    void retranslateUi(QDialog *MakePacket)
    {
        MakePacket->setWindowTitle(QCoreApplication::translate("MakePacket", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("MakePacket", "\350\207\252\345\217\221\350\207\252\346\224\266", nullptr));
        label_8->setText(QCoreApplication::translate("MakePacket", " RTR\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MakePacket", "\345\217\221\351\200\201\346\254\241\346\225\260\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MakePacket", "\346\267\273\345\212\240", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MakePacket", "1", nullptr));
        label_5->setText(QCoreApplication::translate("MakePacket", "\345\217\221\351\200\201\345\221\250\346\234\237ms", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MakePacket", "500", nullptr));
        lineEdit->setText(QCoreApplication::translate("MakePacket", "00000000", nullptr));
        label_3->setText(QCoreApplication::translate("MakePacket", "\346\225\260\346\215\256\357\274\232", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MakePacket", "00 00 00 00 00 00 00 00", nullptr));
        can_RTR->setItemText(0, QCoreApplication::translate("MakePacket", "0 \346\225\260\346\215\256\345\270\247", nullptr));
        can_RTR->setItemText(1, QCoreApplication::translate("MakePacket", "1 \350\277\234\347\250\213\345\270\247", nullptr));

        pushButton_2->setText(QCoreApplication::translate("MakePacket", "\345\205\263\351\227\255", nullptr));
        label_2->setText(QCoreApplication::translate("MakePacket", " ID\357\274\2320x", nullptr));
        can_IDE->setItemText(0, QCoreApplication::translate("MakePacket", "0 \346\240\207\345\207\206\345\270\247", nullptr));
        can_IDE->setItemText(1, QCoreApplication::translate("MakePacket", "1 \346\211\251\345\261\225\345\270\247", nullptr));

        label->setText(QCoreApplication::translate("MakePacket", " IDE\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakePacket: public Ui_MakePacket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEPACKET_H
