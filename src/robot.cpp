#include "robot.h"

// constructor
ROBOT::ROBOT(uint8_t m1, uint8_t m2, uint8_t m3, uint8_t m4) {
    this->motor1 = new AF_DCMotor(m1);
    this->motor2 = new AF_DCMotor(m2);
    this->motor3 = new AF_DCMotor(m3);
    this->motor4 = new AF_DCMotor(m4);
}

// initilize
void ROBOT::init() {
    this->init(200);
}

// initilize
void ROBOT::init(uint8_t speed) {
    this->speed = speed;
    this->motor1->setSpeed(speed);
    this->motor1->run(RELEASE);

    this->motor2->setSpeed(speed);
    this->motor2->run(RELEASE);

    this->motor3->setSpeed(speed);
    this->motor3->run(RELEASE);

    this->motor4->setSpeed(speed);
    this->motor4->run(RELEASE);
}


void ROBOT::forward() {

    motor1->setSpeed(this->speed);
    motor2->setSpeed(this->speed);
    motor3->setSpeed(this->speed);
    motor4->setSpeed(this->speed);

    motor1->run(FORWARD);
    motor2->run(FORWARD);
    motor3->run(FORWARD);
    motor4->run(FORWARD);
}

void ROBOT::backward() {
    motor1->setSpeed(this->speed);
    motor2->setSpeed(this->speed);
    motor3->setSpeed(this->speed);
    motor4->setSpeed(this->speed);

    motor1->run(BACKWARD);
    motor2->run(BACKWARD);
    motor3->run(BACKWARD);
    motor4->run(BACKWARD);
}


void ROBOT::right() {
    motor1->setSpeed(this->speed);
    motor2->setSpeed(this->speed);
    motor3->setSpeed(this->speed);
    motor4->setSpeed(this->speed);

    motor1->run(FORWARD);
    motor2->run(BACKWARD);
    motor3->run(BACKWARD);
    motor4->run(FORWARD);
}


void ROBOT::left() {
    motor1->setSpeed(this->speed);
    motor2->setSpeed(this->speed);
    motor3->setSpeed(this->speed);
    motor4->setSpeed(this->speed);

    motor1->run(BACKWARD);
    motor2->run(FORWARD);
    motor3->run(FORWARD);
    motor4->run(BACKWARD);
}

void ROBOT::stop() {
    motor1->setSpeed(RELEASE);
    motor2->setSpeed(RELEASE);
    motor3->setSpeed(RELEASE);
    motor4->setSpeed(RELEASE);
}