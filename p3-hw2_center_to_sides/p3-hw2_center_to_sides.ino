// p3 homework 2: from center to sides
// https://circuits.io/circuits/2499212

void setup() {
  // put your setup code here, to run once:
  for (int i = 8; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  // use int array for both sides operations, from center
  int leftArray[] = {11, 12, 13};
  int rightArray[] = {10, 9, 8};
  for (int i = 0; i < 3; i ++) {
    if (i != 0) {
      digitalWrite(leftArray[i-1], LOW);
      digitalWrite(rightArray[i-1], LOW);
    }
    digitalWrite(leftArray[i], HIGH);
    digitalWrite(rightArray[i], HIGH);
    delay(500);
    if (i == 2) {
      digitalWrite(leftArray[i], LOW);
      digitalWrite(rightArray[i], LOW);
    }
  }
}
