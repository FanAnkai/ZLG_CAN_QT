#include "canmanager.h"

CanManager::CanManager()
{

}

/**
 *函数名:返回单列对象
 *函数参数:NULL
 *函数作用:NULL
 *函数返回值:NULL
 *备注:NULL
 */
CanManager *CanManager::GetInstance()
{
    static CanManager cm;
    return &cm;
}

/**
 *函数名:打开CAN
 *函数参数:NULL
 *函数作用:NULL
 *函数返回值:NULL
 *备注:NULL
 */
int CanManager::openCan(int deviceTye,int device,int chanel)
{
    int ret = RET_OK;
    VCI_INIT_CONFIG initConfig;
    memset(&initConfig,0,sizeof(initConfig));
    initConfig.AccMask = 0xFFFFFFFF;
    initConfig.Mode = 0;

    int can_bps = 500;
    initConfig.Timing0 = 0x00;
    initConfig.Timing1 = 0x1C;


    ret = VCI_OpenDevice(deviceTye,device,chanel);//打开设备,只需要打开一次
    RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);


    BYTE buffer[4];
    switch (can_bps)
    {
    case 5:
        buffer[0] = 0xC1;
        buffer[1] = 0x01;
        buffer[2] = 0x1C;
        buffer[3] = 0x00;
        break;
    case 10:
        buffer[0] = 0xE0;
        buffer[1] = 0x00;
        buffer[2] = 0x1C;
        buffer[3] = 0x00;
        break;
    case 20:
        buffer[0] = 0xB3;
        buffer[1] = 0x00;
        buffer[2] = 0x16;
        buffer[3] = 0x00;
        break;
    case 50:
        buffer[0] = 0x2C;
        buffer[1] = 0x00;
        buffer[2] = 0x1C;
        buffer[3] = 0x00;
        break;
    case 100:
        buffer[0] = 0x23;
        buffer[1] = 0x00;
        buffer[2] = 0x16;
        buffer[3] = 0x00;
        break;
    case 125:
        buffer[0] = 0x11;
        buffer[1] = 0x00;
        buffer[2] = 0x1C;
        buffer[3] = 0x00;
        break;
    case 250:
        buffer[0] = 0x08;
        buffer[1] = 0x00;
        buffer[2] = 0x1C;
        buffer[3] = 0x00;
        break;
    case 500:
        buffer[0] = 0x07;
        buffer[1] = 0x00;
        buffer[2] = 0x06;
        buffer[3] = 0x00;
        break;
    case 800:
        buffer[0] = 0x04;
        buffer[1] = 0x00;
        buffer[2] = 0x06;
        buffer[3] = 0x00;
        break;
    default:
        buffer[0] = 0x03;
        buffer[1] = 0x00;
        buffer[2] = 0x06;
        buffer[3] = 0x00;
        break;
    }

    ret = VCI_SetReference(deviceTye, device, 0, 0, buffer);
    if (ret != 1)
    {
        qDebug()<<"SetReference 失败";
        return 2;
    }

    if(0==chanel || 1==chanel)//初始化并开始单通道
    {
        ret = VCI_InitCAN(deviceTye,device,chanel,&initConfig);//初始化设备
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);

        ret = VCI_StartCAN(deviceTye,device,chanel);//开始采集
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);
        if(0==chanel)
        {
            can1.setDeviceInfo(deviceTye,device,chanel);
            can1.start();
        }
        else if(1==chanel)
        {
            can2.setDeviceInfo(deviceTye,device,chanel);
            can2.start();
        }
    }
    else if(2==chanel)//初始化和开始双通道
    {
        ret = VCI_InitCAN(deviceTye,device,0,&initConfig);//初始化设备
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);

        ret = VCI_StartCAN(deviceTye,device,0);//开始采集
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);
        can1.setDeviceInfo(deviceTye,device,0);
        can1.start();

        ret = VCI_InitCAN(deviceTye,device,1,&initConfig);//初始化设备
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);

        ret = VCI_StartCAN(deviceTye,device,1);//开始采集
        RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);
        can2.setDeviceInfo(deviceTye,device,1);
        can2.start();
    }
    else
    {
        ret = RET_ERR;
        return ret;
    }
    return ret;
}

/**
 *函数名:关闭CAN
 *函数参数:NULL
 *函数作用:NULL
 *函数返回值:NULL
 *备注:NULL
 */
int CanManager::closeCan(int deviceTye,int device)
{
    int ret = RET_OK;
    ret = VCI_CloseDevice(deviceTye,device);
    RET_VALUE_IF_NOT_EAQU(ret,RET_OK,RET_ERR);
    can1.setRcvWork(false);
    can2.setRcvWork(false);
    return ret;
}
