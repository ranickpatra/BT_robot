#include "bluetooth.h"

// init bluetooth device
void Bluetooth::init() {
    this->init(9600);
}

// init with baudrate
void Bluetooth::init(long baudrate) {
    this->baudrate = baudrate;
    Serial.begin(baudrate);
}

// check if serial data is available
bool Bluetooth::is_available() {
    return Serial.available() ? true : false;        
}

// return the received data
char Bluetooth::read() {
    if (Serial.available() > 0)
        return (char) Serial.read();
    else
        return ' ';
}