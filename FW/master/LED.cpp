/*******************************************************************************
 * @file        LED.c
 * @author      R. Galviati
 * @version     v0.1
 * @headerfile  LED.h
 * 
 * @brief       Arduino Nano Every LED source file.
 * 
*******************************************************************************/
#include "LED.h"
#include "Arduino.h"

LED::LED(){

}

void LED::_init_LED(){
    pinMode(LED_BUILTIN, OUTPUT);
}