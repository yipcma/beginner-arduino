// p8-1 vibration sensor
// https://circuits.io/circuits/2573916
int led = 13;
int sensor = 3;
unsigned char state = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  // 1 for pin 3, blinking for function, RISING for LOW TO HIGH
  attachInterrupt(1, blinking, RISING);
}

void loop() {
  if (state != 0) {
    state = 0;
    digitalWrite(led, HIGH);
    delay(500);
  } else {
    digitalWrite(led, LOW);
  }
}

void blinking() {
  state++;
}

