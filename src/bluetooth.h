#include <Arduino.h>

class Bluetooth {
private:
    long baudrate;

public:
    void init();
    void init(long baudrate);
    bool is_available();
    char read();

};