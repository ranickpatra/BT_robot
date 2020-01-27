#include <Arduino.h>

#include "robot.h"
#include "bluetooth.h"




Bluetooth bt;
ROBOT robot(3,2,1,4);

void setup() {
  
  bt.init();
  robot.init();

}

void loop() {
  while (!bt.is_available());

  char ch = bt.read();

  switch (ch)
  {
  case ROBOT_FORWARD:
    robot.forward();
    break;
  case ROBOT_BACKWARD:
    robot.backward();
    break;
  case ROBOT_RIGHT:
    robot.right();
    break;
  case ROBOT_LEFT:
    robot.left();
    break;
  case ROBOT_STOP:
    robot.stop();
  }


  


  
}