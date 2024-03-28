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


int resetState = 0;
unsigned long currTime = 0;
unsigned long lastTime = 0;
uint8_t baseTime = 0;
uint8_t totalTime = 0;

void setup(){
    ObjSerial._init_Serial();
    ObjPIN._init_PINS();
    delay(100);
    ObjSerial.logoPrinter();
    // Raise BuiltIn LED:
    digitalWrite(LED_BUILTIN, HIGH);
    // Load Last Time:
    baseTime  = ObjEEPROM.eeprom_get_time();
    // Load Total Time:
    totalTime = ObjEEPROM.eeprom_read(ADD_H2O_TIME);
    Serial.print("Starting from: ");
    Serial.print(baseTime);
    Serial.print("\nArriving to: ");
    Serial.println(totalTime);
}

void loop(){
    resetState = digitalRead(RESET_TIMER_PIN);
    if (resetState == HIGH){
        ObjEEPROM.reset_eeprom_time();
        Serial.print("Time Resetted!\n");
        delay(1000); // To avoid Double Resets.
        lastTime = millis() / 1000;
        currTime = 0;
        baseTime = 0;
    }

    // Update Time
    currTime = (baseTime * 60) + (millis() / 1000) - lastTime;
    // Autosave TIME
    if ((millis() % SAVE_TIME_SLEEP) == 0){
        Serial.print("Autosave at time:\n");
        int time2save = (int)(floor(currTime/60));
        Serial.println(time2save);
        ObjEEPROM.eeprom_set_time(time2save);
    }
    ObjLED.timerLED(currTime, (int)(totalTime*60));
}
