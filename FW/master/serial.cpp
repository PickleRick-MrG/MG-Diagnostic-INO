#include "serial.h"
#include "Arduino.h"

Serial_CLS *Serial_CLS::interface_ = nullptr;

Serial_CLS *Serial_CLS::getInstance(){
    if (interface_ == nullptr)
    {
        interface_ = new Serial_CLS();
    }
}

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