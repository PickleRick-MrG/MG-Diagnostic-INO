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
int resetState = 0;

void setup(){
    ObjSerial._init_Serial();
    ObjPIN._init_PINS();
    delay(100);
    ObjSerial.logoPrinter();
    // Raise BuiltIn LED
    digitalWrite(LED_BUILTIN, HIGH);
}

void loop(){
    resetState = digitalRead(RESET_TIMER_PIN);
    if (resetState == HIGH){
        ObjEEPROM.reset_eeprom_time();
        Serial.print("Time Resetted!\n");
        delay(1000); // To avoid Double Resets.
    }

    // Update Time
    currTime = millis() / 1000;
    // Autosave TIME
    if (((millis()) % 10000) == 0){
        Serial.print("Autosave\n");
    }
    ObjLED.timerLED(currTime, 60);
}
