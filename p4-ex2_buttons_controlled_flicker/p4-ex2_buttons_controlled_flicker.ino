// p4ex2 buttons-controlled flicker
// https://circuits.io/circuits/2499808
// NOTE: need physical hardware checking; simulation is not apparent in led level changing
int downPin = 12;
int upPin = 8;
int ledPin = 10;
// A byte stores an 8-bit unsigned number, from 0 to 255.
byte base = 135;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(upPin, INPUT);
  pinMode(downPin, INPUT);
}

void loop() {
  int upState = digitalRead(upPin);
  int downState = digitalRead(downPin);

  if (upState == HIGH && base != 255) {
    base += 60;
  }

  if (downState == HIGH && base != 0) {
    base -= 60;
  }

  flame(base);
}

void flame(byte base) {
  analogWrite(ledPin, base + random(255 - base));
  delay(random(500));
}

