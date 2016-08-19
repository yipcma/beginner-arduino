//p11 controllable servo
// https://circuits.io/circuits/2578950

#include <Servo.h>
Servo myservo;  //create servo obj

int potpin = 0;
int val;

void setup() {
  myservo.attach(9);
}

void loop() {
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 179);  //scale the value to use with servo
  myservo.write(val);  //sets servo position to the scaled value
  delay(15);
}
