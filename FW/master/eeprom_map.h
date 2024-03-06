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
    uint32_t eeprom_get_last_time();
};
#endif // EEPROM_MAP_H