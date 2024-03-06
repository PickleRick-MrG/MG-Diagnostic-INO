/**
 * @file        eeprom_map.h
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every eeprom library file
*/
#ifndef EEPROM_MAP_H
#define EEPROM_MAP_H

#include <stdint.h>
#include <string.h>

#define EEPROM_TIME_ADD     1

class EEPROM_MAP_OBJ
{
private:
    /* data */
public:
    EEPROM_MAP_OBJ();   // Constructor
    ~EEPROM_MAP_OBJ();  // Destructor
    uint32_t eeprom_get_time();
    void eeprom_set_time(uint32_t time);
};
#endif // EEPROM_MAP_H