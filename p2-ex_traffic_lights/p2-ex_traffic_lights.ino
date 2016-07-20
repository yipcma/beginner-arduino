// p2 exercise: traffic light (pp31)
int redLed = 10;
int yellowLed = 9;
int greenLed = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // red for 5s
  digitalWrite(redLed, HIGH);
  delay(5000);
  
  // red + yellow for 2s
  digitalWrite(yellowLed, HIGH);
  delay(2000);
  
  // green for 5s
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(5000);
  
  // yellow for 2s
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(2000);
  digitalWrite(yellowLed, LOW);
}
