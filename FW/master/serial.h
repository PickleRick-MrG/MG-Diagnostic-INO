#ifndef SERIAL_H
#define SERIAL_H

#define SERIAL_BAUDRATE         115200

class Serial_CLS{
public:
    static Serial_CLS* getInstance();
    void _init_serial();
    void logoPrinter();
private:
    static Serial_CLS* interface_;

};

#endif // SERIAL_H