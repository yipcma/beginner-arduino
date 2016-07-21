// p3 interactive traffic light

int carRed = 12;
int carYellow = 11;
int carGreen = 10;
int button = 9;
int pedRed = 8;
int pedGreen = 7;
int crossTime = 5000;
unsigned long changeTime;

void setup() {
  // put your setup code here, to run once:
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
  pinMode(button, INPUT); //configure button as input
  digitalWrite(carGreen, HIGH);  //initialize green traffic on
  digitalWrite(pedRed, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(button);

  // test if button is pressed and 5 seconds have passed after it's pressed
  if (state == HIGH && (millis() - changeTime) > 5000) {
    changeLights();
  }
}

void changeLights() {
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(2000);

  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  delay(1000);

  digitalWrite(pedRed, LOW);
  digitalWrite(pedGreen, HIGH);

  delay(crossTime);

  // blinking of ped green
  for (int x = 0; x < 10; x++) {
    digitalWrite(pedGreen, HIGH);
    delay(250);
    digitalWrite(pedGreen, LOW);
    delay(250);
  }

  digitalWrite(pedRed, HIGH);
  delay(500);

  digitalWrite(carRed, LOW);
  digitalWrite(carYellow, HIGH);
  delay(1000);

  digitalWrite(carYellow, LOW);
  digitalWrite(carGreen, HIGH);

  changeTime = millis();
}

