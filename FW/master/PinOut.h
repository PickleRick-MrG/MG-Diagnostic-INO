/**
 * @file        PinOut.h
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every PinOut library file
*/
#ifndef PINOUT_H
#define PINOUT_H
#include "pins_arduino.h"
#include <stdint.h>
#include <string.h>

#define LED_TIME1_PIN       PIN_A0
#define LED_TIME2_PIN       PIN_A1
#define LED_TIME3_PIN       PIN_A2

class PINOUT_OBJ
{
    public:
        PINOUT_OBJ();
        ~PINOUT_OBJ();
        void _init_PINS();
};



#endif // PINOUT_H