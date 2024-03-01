#include <EEPROM.h>

#define SERIAL_BAUDRATE     115200

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
}

void loop(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}

