#ifndef LED_H
#define LED_H

class LED_CLS{
public:
    void _init_LED();
    void heartBeat();
    void warningFlash();
    void timerLED(int totalTime, int cnt);
};

#endif // LED_H