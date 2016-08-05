// p6-1 alarm
// https://circuits.io/circuits/2510963
int toneVal;
int buzzPin = 8;
float sinVal;
const float pi = 3.1412;

void setup() {
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  for (int x = 0; x < 180; x++) {
    sinVal = sin(x*(pi/180));
    toneVal = 2000 + int(sinVal*1000);
    tone(buzzPin, toneVal);
    delay(2);
  }
}
