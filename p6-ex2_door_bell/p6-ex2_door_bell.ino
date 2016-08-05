// p6-ex2 door bell
// https://circuits.io/circuits/2517563
const int toneVal = 220;
const int buzzPin = 8;
const int button = 9;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(button, INPUT);  
}

void loop() {
  int state = digitalRead(button);

  if (state == HIGH) {
    tone(buzzPin, toneVal, 500);
    delay(1000);
  }
}

