// p6ex1: alarm with LED
// https://circuits.io/circuits/2517449
int buzzPin = 8;
int ledPin = 9;
float sinVal;
int toneVal;
const float pi = 3.1412;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int x = 0; x < 180; x++) {
    sinVal = sin(x*(pi/180));
    toneVal = 2000 + int(sinVal*1000);
    tone(buzzPin, toneVal);
    analogWrite(ledPin, constrain(int(sinVal * 255), 0, 255));
    delay(2);
  }
}
