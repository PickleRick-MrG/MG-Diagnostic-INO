/**
 * @file        serial.cpp
 * @author      R. Galviati
 * @version     v0.1
 * @headerfile  serial.h
 * 
 * @brief       Arduino Nano Every serial port Source file
*/
#include "serial.h"
#include "Arduino.h"

SERIAL_OBJ::SERIAL_OBJ()
{
}

SERIAL_OBJ::~SERIAL_OBJ()
{
}

void SERIAL_OBJ::_init_Serial()
{
    Serial.begin(SERIAL_BAUDRATE);
    while (!Serial){ ; }
}

void SERIAL_OBJ::logoPrinter()
{
    Serial.print("\n");
    Serial.print("    ############    \n");
    Serial.print("  #              #  \n");
    Serial.print("#   #   #   ###    #\n");
    Serial.print("#   ## ##  #   #   #\n");
    Serial.print("#   # # #  #       #\n");
    Serial.print("#   #   #  #  ##   #\n");
    Serial.print("#   #   #  #   #   #\n");
    Serial.print("#   #   #   ###    #\n");
    Serial.print("  #              #  \n");
    Serial.print("    ############    \n");
    Serial.print("\n");
    Serial.print("Welcome to the MG Diagnostic Tool! \n");
}
