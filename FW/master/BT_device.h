/**
 * @file        BT_device.h
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every BT communication library file
*/
#ifndef BT_DEVICE_H
#define BT_DEVICE_H


#define BT_ADDRESS_MASTER       0xAA
#define BT_RX_PIN               0x09


class BT_DEVICE_OBJ
{
    private:
        /* data */
    public:
        BT_DEVICE_OBJ();   // Constructor
        ~BT_DEVICE_OBJ();  // Destructor
};

#endif // BT_DEVICE_H