// p3 homework 3: from left to right all lit
// https://circuits.io/circuits/2499358

void setup() {
  // put your setup code here, to run once:
  for (int i = 8; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 13; i > 7; i--) {
    digitalWrite(i, HIGH);
    delay(500);
  }
  for (int i = 8; i < 14; i++) {
    digitalWrite(i, LOW);
  }
  delay(500);
}
