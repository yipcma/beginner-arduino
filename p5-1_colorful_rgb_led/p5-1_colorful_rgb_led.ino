// p5-1: blink colorful rgb led by pwm
// https://circuits.io/circuits/2503976
int redPin = 11;
int greenPin = 9;
int bluePin = 10;

void setup() {
 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT); 
}

void loop() {
  colorRGB(random(0, 255), random(0, 255), random(0, 255));
  delay(500);
}

void colorRGB(byte red, byte green, byte blue) {
  // use constrain to put bounds on value
  analogWrite(redPin, constrain(red, 0, 255));
  analogWrite(greenPin, constrain(green, 0, 255));
  analogWrite(bluePin, constrain(blue, 0, 255));
}

