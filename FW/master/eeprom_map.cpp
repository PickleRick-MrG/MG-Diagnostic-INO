#include "eeprom_map.h"
#include <EEPROM.h>
#include "Arduino.h"

EEPROM_MAP_OBJ::EEPROM_MAP_OBJ()
{
}

EEPROM_MAP_OBJ::~EEPROM_MAP_OBJ()
{
}

uint32_t EEPROM_MAP_OBJ::eeprom_get_time()
{
    uint32_t time = EEPROM.read(EEPROM_TIME_ADD);
    return time;
}

void EEPROM_MAP_OBJ::eeprom_set_time(uint32_t time)
{
    EEPROM.write(EEPROM_TIME_ADD, time);
}
