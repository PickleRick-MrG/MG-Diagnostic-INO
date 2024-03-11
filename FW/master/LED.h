/**
 * @file        LED.h
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every LED library file
*/
#ifndef LED_H
#define LED_H

#include <stdint.h>
#include <string.h>

class LED_OBJ
{
    public:
        LED_OBJ();  // Constructor
        ~LED_OBJ(); // Destructor
        void timerLED(int timer, int max_time);
        void warningFlash();
    private:
};

#endif // LED_H