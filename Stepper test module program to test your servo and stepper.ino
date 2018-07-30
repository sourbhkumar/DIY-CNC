#include <AFMotor.h>
AF_Stepper motor(200, 2);
void setup() {
Serial.begin(9600); // set up Serial library at 9600 bps
Serial.println("Stepper test!");
motor.setSpeed(50); // 10 rpm
motor.step(400, FORWARD, SINGLE);
motor.release();
delay(1000);
}
void loop() {
motor.step(200, FORWARD, SINGLE);
motor.step(200, BACKWARD, SINGLE);
motor.step(200, FORWARD, DOUBLE);
motor.step(200, BACKWARD, DOUBLE);
motor.step(200, FORWARD, INTERLEAVE);
motor.step(200, BACKWARD, INTERLEAVE);
motor.step(200, FORWARD, MICROSTEP);
motor.step(200, BACKWARD, MICROSTEP);
}

