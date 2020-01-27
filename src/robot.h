#include <Arduino.h>
#include "AFMotor.h"

#define ROBOT_FORWARD '0'
#define ROBOT_BACKWARD '1'
#define ROBOT_RIGHT '2'
#define ROBOT_LEFT '3'
#define ROBOT_STOP 's'



class ROBOT {

private:
    AF_DCMotor* motor1;
    AF_DCMotor* motor2;
    AF_DCMotor* motor3;
    AF_DCMotor* motor4;
    
    uint8_t speed = 200;

public:
    ROBOT(uint8_t m1, uint8_t m2, uint8_t m3, uint8_t m4);
    void init();
    void init(uint8_t speed);
    void forward();
    void backward();
    void right();
    void left();
    void stop();


};