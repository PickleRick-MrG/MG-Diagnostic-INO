/*******************************************************************************
 * @file        LED.h
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every LED library file
 * 
*******************************************************************************/
#ifndef LED_H
#define LED_H

class LED_OBJ
{
    public:
        LED_OBJ();  // Constructor
        ~LED_OBJ(); // Destructor
        void timerLED(int cnt, uint8_t led0PIN, uint8_t led1PIN, 
                    uint8_t led2PIN);
        void warningFlash();
    private:
};

#endif // LED_H