// p7-ex temperature alarm with led
// https://circuits.io/circuits/2573701

const int buzzPin = 8;
const int redPin = 9;
const int yellowPin = 10;
const int greenPin = 11;
const int tempSensor = 0;
const float pi = 3.1412;
const int baudRate = 9600;
const int tempThres = 35;
const int tempThres2 = 25;
const int tempThres3 = 10;
unsigned long tempTimer;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(baudRate);
}

void loop() {
  double data;
  int toneVal;
  // read and convert temp signal to temp in C, coerce to double
  data = (double) analogRead(tempSensor) * 5 / 1024 * 100;

  if (data > tempThres | data < tempThres3) {
    digitalWrite(redPin, HIGH);
    for (int x = 0; x < 180; x++) {
      toneVal = 2000 + int(sin(x * pi /180) * 1000);
      tone(buzzPin, toneVal);
      delay(2);
    }
    digitalWrite(redPin, LOW);
  } else if (data > tempThres2 & data < tempThres) {
        digitalWrite(yellowPin, HIGH);
    for (int x = 0; x < 180; x++) {
      toneVal = 2000 + int(sin(x * pi /180) * 500);
      tone(buzzPin, toneVal);
      delay(2);
    }
    digitalWrite(yellowPin, LOW);
  } else {
    digitalWrite(greenPin, HIGH);
    noTone(8);
    digitalWrite(greenPin, LOW);
  }
  // Serial logging
  if (millis() - tempTimer > 500) {
    tempTimer = millis();
    Serial.print("temperature: ");
    Serial.print(data);
    Serial.println(" C");
  }
}
