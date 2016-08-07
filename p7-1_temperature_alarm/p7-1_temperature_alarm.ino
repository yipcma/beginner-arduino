// p7-1 temperature alarm
// https://circuits.io/circuits/2524934

const int buzzPin = 8;
const int tempSensor = 0;
const float pi = 3.1412;
const int baudRate = 9600;
const int tempThres = 27;
unsigned long tempTimer;

void setup() {
  pinMode(buzzPin, OUTPUT);
  Serial.begin(baudRate);
}

void loop() {
  double data;
  int toneVal;
  // read in value from analog port 0 and convert to deg-C
  // coerce to double!
  data = (double) analogRead(tempSensor) * 5 / 1024 * 100;

  if (data > tempThres) {
    for (int x = 0; x < 180; x++) {
      toneVal = 2000 + int(sin(x * pi / 180)* 1000);
      tone(buzzPin, toneVal);
      delay(2);
    }
  }
  else {
    noTone(8);
  }

  // Serial logging
  if (millis() - tempTimer > 500) {
    tempTimer = millis();
    Serial.print("temperature: ");
    Serial.print(data);
    Serial.println(" C");
  }
}
