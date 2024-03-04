/*******************************************************************************
 * @file        serial.h
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every Serial library file
 * 
*******************************************************************************/
#ifndef SERIAL_H
#define SERIAL_H

#define SERIAL_BAUDRATE     115200

class SERIAL_OBJ
{
    public:
        SERIAL_OBJ();   // Constructor
        ~SERIAL_OBJ();  // Destructor
        void _init_Serial();
        void logoPrinter();
};

#define SERIAL_BAUDRATE         115200


#endif // SERIAL_H