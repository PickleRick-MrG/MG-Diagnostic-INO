#include "bt_device.h"
#include <QDebug>

BT_device::BT_device()
{
}

BT_device::~BT_device()
{
}

bool BT_device::connect()
{
    bool state = false;
    state = true;
    qDebug() << "Connect BTN pressed!";
    return state;
}

void BT_device::disconnect()
{
    qDebug() << "Disconnect BTN pressed!";
}

void BT_device::reconnect()
{
    qDebug() << "Reconnect BTN pressed!";
}
