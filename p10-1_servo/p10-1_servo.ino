// p10-servo
// https://circuits.io/circuits/2578864
#include <Servo.h>  //declare to insert servo library
Servo myservo;  //create servo object
int pos = 0;    //position var of servo

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 0; pos < 180; pos +=1) {
    myservo.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 1; pos -= 1) {
    myservo.write(pos);
    delay(15);
  }
}
