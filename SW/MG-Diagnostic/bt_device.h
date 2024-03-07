#ifndef BT_DEVICE_H
#define BT_DEVICE_H

enum BT_CONNECTION
{
    CONNECTED,
    DISCONNECTED
};

enum BT_STATUS
{
    ACTIVE,
    IDLE
};

class BT_device
{
public:
    BT_device();
    ~BT_device();
    void connect();
    void disconnect();
    void reconnect();
};

#endif // BT_DEVICE_H
