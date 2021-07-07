void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}


void loop() {
    for(int i = 0; i<5; i++) {
       digitalWrite(2, HIGH);
       digitalWrite(3, LOW);
       delay(250);
       digitalWrite(2, LOW);
       digitalWrite(3, HIGH);
       delay(250);
    }
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    for(int i = 0; i<5; i++) {
       digitalWrite(2, HIGH);
       delay(500);
       digitalWrite(2, LOW);
       delay(500);
    }
    for(int i = 0; i<5; i++) {
       digitalWrite(3, HIGH);
       delay(500);
       digitalWrite(3, LOW);
       delay(500);
    }
}
