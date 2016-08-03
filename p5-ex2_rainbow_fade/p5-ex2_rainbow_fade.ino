// p5-ex2: rainbow fade-in
// https://circuits.io/circuits/2508913
int rainbow[7][3] = {
  {255, 0, 0},
  {255, 127, 0},
  {255, 255, 0},
  {0, 255, 0},
  {0, 0, 255},
  {75, 0, 130},
  {139, 0, 255}
};

int redPin = 11;
int greenPin = 9;
int bluePin = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 7; i++) {
    colorRGB(rainbow[i][0], rainbow[i][1], rainbow[i][2]);
    delay(500);
    //fading
    fadeRGB(rainbow[i][0], rainbow[i][1], rainbow[i][2], 5);  
  }
}

void colorRGB(byte red, byte green, byte blue) {
  analogWrite(redPin, constrain(red, 0, 255));
  analogWrite(greenPin, constrain(green, 0, 255));
  analogWrite(bluePin, constrain(blue, 0, 255));
}

void fadeRGB(byte red, byte green, byte blue, int fadeAmount) {
  for (int j = fadeAmount; j > 0; j--) {
    analogWrite(redPin, constrain((j * red)/fadeAmount, 0, 255));
    analogWrite(greenPin, constrain((j * green)/fadeAmount, 0, 255));
    analogWrite(bluePin, constrain((j * blue)/fadeAmount, 0, 255));
    delay(500/fadeAmount);
  }
}

