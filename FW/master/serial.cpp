
#include "serial.h"
#include "Arduino.h"

void Serial_CLS::_init_serial(){
    Serial.begin(SERIAL_BAUDRATE);
    while(!Serial){ ; }
}

void Serial_CLS::logoPrinter(){
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