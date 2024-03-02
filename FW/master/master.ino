/*******************************************************************************
 * 
*******************************************************************************/
#include <EEPROM.h>

#define SERIAL_BAUDRATE     115200
#define EEPROM_TIME_ADD     1
#define MAX_TIME            1000

double pastTime = 400000000;
static int cnt = 0.00f;

void setup(){
    // Initialization of the Serial Port
    Serial.begin(SERIAL_BAUDRATE);
    while (!Serial){ ; }
    delay(100);
    Serial.print("> Serial Initialized.\n");
    // Initialization of the BuiltIn LED
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.print("> LEDs Initialized.\n");
    Serial.print("\n-----------------------------\n\n");
    Serial.print(">> Welcome to MG Diagnostic Tool!\n");

    //cnt = EEPROM.read(EEPROM_TIME_ADD);
}

void loop(){
    double completeTime = 100.00f;
    Serial.print(cnt, DEC);
    Serial.print("\t");
    Serial.print(completeTime, DEC);
    Serial.print("\t");
    digitalWrite(LED_BUILTIN, HIGH);
    if (cnt < completeTime*(1.0/4.0)){
        Serial.print("1st Quarter\n");
    } else if(cnt <completeTime*(2.0/4.0)){
        Serial.print("2nd Quarter\n");
    } else if(cnt <completeTime*(3.0/4.0)){
        Serial.print("3rd Quarter\n");
    } else {
        Serial.print("Final!\n");
        digitalWrite(LED_BUILTIN, LOW);
    }
    if (cnt % 10 == 0){
        //EEPROM.write(EEPROM_TIME_ADD, cnt);
    }
    delay(100);
    cnt++;
}
