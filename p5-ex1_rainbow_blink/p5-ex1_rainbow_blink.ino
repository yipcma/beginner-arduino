// p5-ex1: rainbow blink by matrix
//https://circuits.io/circuits/2504545
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
  }
}

void colorRGB(byte red, byte green, byte blue) {
  analogWrite(redPin, constrain(red, 0, 255));
  analogWrite(greenPin, constrain(green, 0, 255));
  analogWrite(bluePin, constrain(blue, 0, 255));
}

