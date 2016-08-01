// p3 homework 1: from left to right and back
// https://circuits.io/circuits/2496313-led-left-and-right

void setup() {
  // put your setup code here, to run once:
  for (int i = 8; i < 14; i++) {
    pinMode(i, OUTPUT);  
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  lights_on();
}

void lights_on() {
  for (int i = 8; i < 14; i++) {
   if (i != 8) {
    digitalWrite(i-1, LOW);
   }
   digitalWrite(i, HIGH);
   delay(100); 
  }
  for (int i = 13; i > 7; i--) {
    if (i != 13) {
      digitalWrite(i+1, LOW);    
    }
    digitalWrite(i, HIGH);
    delay(100);
  }
}

