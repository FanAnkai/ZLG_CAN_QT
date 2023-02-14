#include "makepacket.h"
#include "ui_makepacket.h"

MakePacket::MakePacket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MakePacket)
{
    ui->setupUi(this);


    can_ide_type.resize(2);
    can_ide_type[0] = "标准帧";
    can_ide_type[1] = "扩展帧";

    can_rtr_type.resize(2);
    can_rtr_type[0] = "数据帧";
    can_rtr_type[1] = "遥控帧";


    controlPacket = new ControlPacket(this);
    stPacket = new StatePacket(this);
    testPacket = new TestPacket(this);
    infoPacket = new InfoPacket(this);

}

MakePacket::~MakePacket()
{
    delete ui;
}





//void MakePacket::on_comboBox_currentIndexChanged(int index)
//{
//    switch (index)
//    {
//    case 0:
//    {
//        controlPacket->hide();
//        stPacket->hide();
//        testPacket->hide();
//        infoPacket->hide();


//        break;
//    }
//    case 1:
//    {
//        stPacket->hide();
//        testPacket->hide();
//        infoPacket->hide();
//        this->setFixedHeight(controlPacket->size().height()+100);
//        controlPacket->move(10,40);
//        controlPacket->show();

//        break;
//    }
//    case 2:
//    {

//        controlPacket->hide();
//        stPacket->hide();
//        testPacket->hide();
//        this->setFixedHeight(stPacket->size().height()+100);
//        stPacket->move(10,40);
//        stPacket->show();
//        break;
//    }
//    case 3:
//    {

//        controlPacket->hide();
//        stPacket->hide();
//        infoPacket->hide();
//        this->setFixedHeight(testPacket->size().height()+100);
//        testPacket->move(10,40);
//        testPacket->show();
//        break;
//    }
//    case 4:
//    {

//        controlPacket->hide();
//        stPacket->hide();
//        testPacket->hide();
//        this->setFixedHeight(infoPacket->size().height()+100);
//        infoPacket->move(10,40);
//        infoPacket->show();
//        break;
//    }
//    default:
//        break;
//    }
//}



void MakePacket::on_pushButton_clicked()
{
    VCI_CAN_OBJ obj;
    memset(&obj,0,sizeof(obj));

    obj.ID = ui->lineEdit->text().toUInt(nullptr,Z_HEX);

    if(ui->checkBox->isChecked())
    {
        obj.SendType = CAN_SEND_SELF;
    }
    else
    {
        obj.SendType = CAN_SEND_NORMAL;
    }

    obj.RemoteFlag = CAN_DATA_INFO;

    obj.ExternFlag = CAN_FRAM_EXTERN;

    obj.DataLen = ui->lineEdit_2->text().remove(QRegExp("\\s")).size()/2;

    QByteArray ba;
    QString tmpStr = ui->lineEdit_2->text();
    RET_IF_NOT_EAQU(Mymethod::GetInstance()->getBytesFromQString(tmpStr,ba),RET_OK);
    memcpy(obj.Data,ba.data(),obj.DataLen);

    CAN_SEND_FRAME_STRUCT info;

    info.can_ide = can_ide_type[ui->can_IDE->currentIndex()];

    info.can_rtr = can_rtr_type[ui->can_RTR->currentIndex()];

    info.idStr = QString("%1").arg(obj.ID,8,16,QLatin1Char('0'));

    QByteArray dataBa;dataBa.resize(obj.DataLen);memcpy(dataBa.data(),obj.Data,obj.DataLen);
    info.dataStr = dataBa.toHex().toUpper();

    info.timeStr = QString::number(ui->lineEdit_3->text().toInt());

    if(ui->checkBox->isChecked())
    {
        info.isSendToSelf = true;
    }

    info.sendCount = (int)ui->lineEdit_4->text().toUInt();
    emit this->addSendFramSignal(info);
}


