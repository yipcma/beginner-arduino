// p6-1 alarm
// https://circuits.io/circuits/2510963
int toneVal;
int buzzPin = 8;
const float pi = 3.1412;

void setup() {
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  for (int x = 0; x < 180; x++) {
    toneVal = 2000 + int(sin(x*(pi/180))*1000);
    tone(buzzPin, toneVal);
    delay(2);
  }
}
