int x=0;
int y=0;
int b=0;
void setup() {
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop()
{
  x=analogRead(A0);
  y=analogRead(A1);
  b=digitalRead(2);
  if(x > y) {
    digitalWrite(8, HIGH);  
    digitalWrite(9, LOW);  
  } else if if(x == y) {
    digitalWrite(8, HIGH);  
    digitalWrite(9, HIGH);  
  } else {
    digitalWrite(8, LOW);  
    digitalWrite(9, HIGH);  
  }

  if (b == 0) {
      digitalWrite(10, HIGH);
  } else {
      digitalWrite(10, LOW);  
  }
}
