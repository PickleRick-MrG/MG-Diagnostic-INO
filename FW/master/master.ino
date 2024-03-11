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

unsigned long myTime = 0;

void setup(){
    mySerial._init_Serial();
    myPINs._init_PINS();
    delay(100);
    mySerial.logoPrinter();
}

void loop(){
    // Raise BuiltIn LED
    digitalWrite(LED_BUILTIN, HIGH);
    static int counter = 0;
    // Update Time
    myTime = millis() / 1000;
    myLED.timerLED(myTime, 30);
    if (counter % 100000 == 0){
        counter = 0;
        // Print Time
        Serial.println((int)myTime);
    }
}
