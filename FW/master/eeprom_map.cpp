/**
 * @file        eeprom_map.cpp
 * @author      R. Galviati
 * @version     v0.1
 * @headerfile  eeprom_map.h
 * 
 * @brief       Arduino Nano Every eeprom source file.
*/
#include "eeprom_map.h"
#include <EEPROM.h>
#include "Arduino.h"


/**
 * @brief Array which stores the defaults and ranges of acceptable values for
 * all EEPROM parameters.
 * @details For every parameter at address A : \n
 *  + eepromInitTable[A][0] : BT Write Allowed (0 = N / 1 = Y)
 *  + eepromInitTable[A][1] : Minimum Value
 *  + eepromInitTable[A][2] : Default Value
 *  + eepromInitTable[A][3] > Maximum Value
 * 
 * @see EEPROM_MAP_ENUM
*/
const uint32_t EEPROM_MAP_OBJ::eepromInitTable[EEPROM_PARAM_MAX][4] = 
{
    {0, 0, 0, 0},       // ADD_REV_FW
    {1, 0, 0, 600},       // ADD_TIME_CURR
    {1, 0, 120, 600},   // ADD_H2O_TIME
    {0, 0, 0, 0},       // ADD_ID3
    {0, 0, 0, 0},       // ADD_ID4
    {0, 0, 0, 0},       // ADD_ID5
    {0, 0, 0, 0},       // ADD_ID6
    {0, 0, 0, 0},       // ADD_ID7
    {0, 0, 0, 0},       // ADD_ID8
    {0, 0, 0, 0},       // ADD_ID9
    {0, 0, 0, 0},       // ADD_ID10
    {0, 0, 0, 0},       // ADD_ID11
    {0, 0, 0, 0},       // ADD_ID12
    {0, 0, 0, 0},       // ADD_ID13
    {0, 0, 0, 0},       // ADD_ID14
    {0, 0, 0, 0},       // ADD_ID15
    {0, 0, 0, 0},       // ADD_ID16
    {0, 0, 0, 0},       // ADD_ID17
    {0, 0, 0, 0},       // ADD_ID18
    {0, 0, 0, 0}        // ADD_ID19
};

EEPROM_MAP_OBJ::EEPROM_MAP_OBJ()
{
}

EEPROM_MAP_OBJ::~EEPROM_MAP_OBJ()
{
}

uint8_t EEPROM_MAP_OBJ::eeprom_get_time()
{
    uint8_t time = EEPROM.read(ADD_TIME_CURR);
    return time;
}

void EEPROM_MAP_OBJ::eeprom_set_time(uint8_t time)
{
    eeprom_write(ADD_TIME_CURR, time);
}

void EEPROM_MAP_OBJ::eeprom_write(int add, uint8_t val)
{
    if (add >= EEPROM_PARAM_MAX){
        Serial.println("WNG: EEPROM address out of bounds!");
    } else {
        if (val < eepromInitTable[add][1]){
            val = eepromInitTable[add][1];
        } else if (val > eepromInitTable[add][3]){
            val > eepromInitTable[add][3];
        }
        EEPROM.write(add, val);
    }
}

uint8_t EEPROM_MAP_OBJ::eeprom_read(int add){
    uint8_t ret = 0;
    if (add >= EEPROM_PARAM_MAX){
        Serial.println("WNG: EEPROM address out of bounds!");
    } else {
        ret = 
        EEPROM.read(add);
    }
    return ret;
}

void EEPROM_MAP_OBJ::reset_eeprom_time(){
    eeprom_write(ADD_TIME_CURR, 0);
}
