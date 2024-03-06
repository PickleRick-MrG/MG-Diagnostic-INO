/**
 * @file        master.ino
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every Master File
*/
#include "eeprom_map.h"
#include "serial.h"
#include "LED.h"
#include "PinOut.h"

LED_OBJ myLED;
SERIAL_OBJ mySerial;
EEPROM_MAP_OBJ myEEPROM;
PINOUT_OBJ myPINs;

void setup(){
    mySerial._init_Serial();
    myPINs._init_PINS();
    delay(100);
    mySerial.logoPrinter();
}

void loop(){
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(LED_TIME1_PIN, HIGH);
}
