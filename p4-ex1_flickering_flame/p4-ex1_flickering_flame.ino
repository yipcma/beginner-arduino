// p4 exercise 1: flickering flame
// https://circuits.io/circuits/2499774

int ledPin = 10;
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  flame(135);
  delay(random(500));
}

void flame(byte base) {
  analogWrite(ledPin, base + random(255-base));
}

