#include <Stepper.h>

const int stepsPerRevolution = 4; 

// initialize the stepper library on pins 7 through 10:
Stepper myStepper(stepsPerRevolution, 7, 8,9,10);


void setup() {
  //SET THE SPEED IN RPM
  myStepper.setSpeed(60);
}

void loop() {
  //
  myStepper.step(stepsPerRevolution);
  delay(1000);

  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
