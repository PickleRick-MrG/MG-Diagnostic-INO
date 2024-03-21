/**
 * @file        PinOut.cpp
 * @author      R. Galviati
 * @version     v0.1
 * @headerfile  PinOut.h
 * 
 * @brief       Arduino Nano Every PinOut source file.
*/
#include "PinOut.h"
#include "Arduino.h"

/* Constructor() */
PINOUT_OBJ::PINOUT_OBJ()
{
}

/*Destructor*/
PINOUT_OBJ::~PINOUT_OBJ()
{
}

/*Initalization of the PINS*/
void PINOUT_OBJ::_init_PINS()
{
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(LED_TIME1_PIN, OUTPUT);
    pinMode(LED_TIME2_PIN, OUTPUT);
    pinMode(LED_TIME3_PIN, OUTPUT);
    pinMode(RESET_TIMER_PIN, INPUT);
}
