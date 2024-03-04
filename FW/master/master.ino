/*******************************************************************************
 * @file        master.ino
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every Master File
*******************************************************************************/
#include "eeprom_map.h"
#include "serial.h"
#include "LED.h"

LED_OBJ myLED;
SERIAL_OBJ mySerial;
EEPROM_MAP_OBJ myEEPROM;

void setup(){
    mySerial._init_Serial();
    myLED._init_LED();
}

void loop(){
    
}
