/**
 * @file        TIMER_device.cpp
 * @author      R. Galviati
 * @version     v0.1
 * 
 * @brief       Arduino Nano Every Timer handling library file
*/
#ifndef TIMER_DEVICE_H
#define TIMER_DEVICE_H

#include <stdbool.h>
#include <stdint.h>
#include <math.h>

#define CONTROL_LOOP_FREQ       100
#define BT_STREAM_FREQ          100
#define MONITOR_STREAM_FREQ     30

class TIMER_DEVICE_OBJ
{
    public:
        TIMER_DEVICE_OBJ();
        ~TIMER_DEVICE_OBJ();
        void _init_timer(uint32_t frequency);
};

#endif // TIMER_DEVICE_H