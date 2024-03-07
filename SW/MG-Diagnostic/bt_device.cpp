#include "bt_device.h"
#include <QDebug>

BT_device::BT_device()
{
}

BT_device::~BT_device()
{
}

void BT_device::connect()
{
    qDebug() << "Connect BTN pressed!";
}

void BT_device::disconnect()
{
    qDebug() << "Disconnect BTN pressed!";
}

void BT_device::reconnect()
{
    qDebug() << "Reconnect BTN pressed!";
}
