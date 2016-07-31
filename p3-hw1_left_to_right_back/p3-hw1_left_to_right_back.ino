// p3 homework 1: from left to right and back

void setup() {
  // put your setup code here, to run once:
  for (int i = 7; i < 13; i++) {
    pinMode(i, OUTPUT);  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  lights_on();
}

void lights_on() {
  for (int i = 7; i < 13; i++) {
   if (i != 7) {
    digitalWrite(i-1, LOW);
   }
   digitalWrite(i, HIGH);
   delay(100); 
  }
  for (int i = 12; i > 6; i--) {
    if (i != 12) {
      digitalWrite(i+1, LOW);    
    }
    digitalWrite(i, HIGH);
  }
}

