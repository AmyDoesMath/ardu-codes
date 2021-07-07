void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}


void loop() {
  // for looplarını pinlerine göre değiştir
    for(int i = 2; i<=4; i++) {
       digitalWrite(i, HIGH);
       delay(100);
       digitalWrite(i, LOW);
       delay(100);
    }
    for(int i = 4; i>=2; i--) {
       digitalWrite(i, HIGH);
       delay(100);
       digitalWrite(i, LOW);
       delay(100);
    }
}
