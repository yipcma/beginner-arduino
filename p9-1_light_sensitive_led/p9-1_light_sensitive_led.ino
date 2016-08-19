// p9-1 light sensitive led with photo diode
// https://circuits.io/circuits/2578784

const int led = 13;
const int sensor = 0;
int val;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(sensor);
  Serial.println(val);
  if (val < 1000) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
  delay(10);
}
