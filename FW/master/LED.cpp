/**
 * @file        LED.cpp
 * @author      R. Galviati
 * @version     v0.1
 * @headerfile  LED.h
 * 
 * @brief       Arduino Nano Every LED source file.
*/
#include "LED.h"
#include "PinOut.h"
#include "Arduino.h"

LED_OBJ::LED_OBJ()
{
}

LED_OBJ::~LED_OBJ()
{
}

void LED_OBJ::timerLED(int timer, int max_time)
{
    int delta = floor(((float)max_time) / 3);
    if (timer < (1 * delta)){
        digitalWrite(LED_TIME1_PIN, HIGH);
        digitalWrite(LED_TIME2_PIN, LOW);
        digitalWrite(LED_TIME3_PIN, LOW);
    } else if (timer < (2 * delta)){
        digitalWrite(LED_TIME1_PIN, HIGH);
        digitalWrite(LED_TIME2_PIN, HIGH);
        digitalWrite(LED_TIME3_PIN, LOW);
    } else if (timer < (3 * delta)){
        digitalWrite(LED_TIME1_PIN, HIGH);
        digitalWrite(LED_TIME2_PIN, HIGH);
        digitalWrite(LED_TIME3_PIN, HIGH);
    } else {

    }
}

void LED_OBJ::warningFlash()
{

}
