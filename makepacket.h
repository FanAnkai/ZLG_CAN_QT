#ifndef MAKEPACKET_H
#define MAKEPACKET_H

#include <QDialog>

#include "includes.h"
#include "mymethod.h"
#include "controlpacket.h"
#include "statepacket.h"
#include "testpacket.h"
#include "infopacket.h"

namespace Ui {
class MakePacket;
}

class MakePacket : public QDialog
{
    Q_OBJECT

public:
    explicit MakePacket(QWidget *parent = 0);
    ~MakePacket();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MakePacket *ui;

    ControlPacket* controlPacket;
    StatePacket* stPacket;
    TestPacket* testPacket;
    InfoPacket* infoPacket;

    std::vector<QString> can_ide_type;
    std::vector<QString> can_rtr_type;
signals:
    void addSendFramSignal(const CAN_SEND_FRAME_STRUCT& info);
};

#endif // MAKEPACKET_H
