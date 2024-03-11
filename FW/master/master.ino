/**
 * @file        master.ino
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every Master file
*/
#include "eeprom_map.h"
#include "serial.h"
#include "LED.h"
#include "PinOut.h"

LED_OBJ ObjLED;
SERIAL_OBJ ObjSerial;
EEPROM_MAP_OBJ ObjEEPROM;
PINOUT_OBJ ObjPIN;


unsigned long currTime = 0;

void setup(){
    ObjSerial._init_Serial();
    ObjPIN._init_PINS();
    delay(100);
    ObjSerial.logoPrinter();
}

void loop(){
    // Raise BuiltIn LED
    digitalWrite(LED_BUILTIN, HIGH);
    // Update Time
    currTime = millis() / 1000;
    ObjLED.timerLED(currTime, 30);
}
