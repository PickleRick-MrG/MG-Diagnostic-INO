/*******************************************************************************
 * @file        LED.cpp
 * @author      R. Galviati
 * @version     v0.1
 * @headerfile  LED.h
 * 
 * @brief       Arduino Nano Every LED source file.
 * 
*******************************************************************************/
#include "LED.h"
#include "Arduino.h"

LED_OBJ::LED_OBJ()
{
}

LED_OBJ::~LED_OBJ()
{
}

void LED_OBJ::_init_LED(){
    pinMode(LED_BUILTIN, OUTPUT);
}