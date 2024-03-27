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

/**
 * @brief EEPROM memory map Addresses
*/
enum EEPROM_MAP_ENUM
{
    ADD_REV_FW      = 0,    //!< Firmware Revision
    ADD_TIME_CURR   = 1,    //!< Current TIME
    ADD_H2O_TIME    = 2,    //!< Maximum Operation TIME for Cooling Water [min]
    ADD_ID3         = 3,    //!< Empty
    ADD_ID4         = 4,    //!< Empty
    ADD_ID5         = 5,    //!< Empty
    ADD_ID6         = 6,    //!< Empty
    ADD_ID7         = 7,    //!< Empty
    ADD_ID8         = 8,    //!< Empty
    ADD_ID9         = 9,    //!< Empty
    ADD_ID10        = 10,   //!< Empty
    ADD_ID11        = 11,   //!< Empty
    ADD_ID12        = 12,   //!< Empty
    ADD_ID13        = 13,   //!< Empty
    ADD_ID14        = 14,   //!< Empty
    ADD_ID15        = 15,   //!< Empty
    ADD_ID16        = 16,   //!< Empty
    ADD_ID17        = 17,   //!< Empty
    ADD_ID18        = 18,   //!< Empty
    ADD_ID19        = 19,   //!< Empty
    EEPROM_PARAM_MAX        //!< Number of EEPROM Parameters
};

class EEPROM_MAP_OBJ
{
private:
    static const uint32_t eepromInitTable[EEPROM_PARAM_MAX][4];
public:
    EEPROM_MAP_OBJ();   // Constructor
    ~EEPROM_MAP_OBJ();  // Destructor
    uint8_t eeprom_get_time();
    void eeprom_set_time(uint8_t time);
    void eeprom_write(int add, uint8_t val);
    void reset_eeprom_time();
};

#endif // EEPROM_MAP_H