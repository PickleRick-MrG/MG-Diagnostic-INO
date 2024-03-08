#ifndef BT_DEVICE_H
#define BT_DEVICE_H

#define BT_ADDRESS_MASTER       0xAA
#define BT_ADDRESS_HOST         0x00

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
    bool connect();
    void disconnect();
    void reconnect();
private:
    BT_CONNECTION conn_state = DISCONNECTED;
};

#endif // BT_DEVICE_H
