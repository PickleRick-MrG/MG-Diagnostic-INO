#include "LED.h"
#include "Arduino.h"

void LED_CLS::_init_LED(){
    pinMode(LED_BUILTIN, OUTPUT);
}

void LED_CLS::heartBeat(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}

void LED_CLS::warningFlash(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    delay(50);
}

void LED_CLS::timerLED(int totalTime, int cnt){
    if (cnt > totalTime){
        warningFlash();
    } else if (cnt > totalTime * (3 / 4)){
        digitalWrite(LED_BUILTIN, HIGH);
        delay(100);
        digitalWrite(LED_BUILTIN, LOW);
        delay(100);
    } else if (cnt > totalTime * (2 / 4)){
        digitalWrite(LED_BUILTIN, HIGH);
        delay(200);
        digitalWrite(LED_BUILTIN, LOW);
        delay(200);
    } else if (cnt > totalTime * (1 / 4)){
        digitalWrite(LED_BUILTIN, HIGH);
        delay(300);
        digitalWrite(LED_BUILTIN, LOW);
        delay(300);
    }
}