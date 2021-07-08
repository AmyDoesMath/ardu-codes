// CONNECTIONS
// A0: Joystick X
// A1: Joystick Y
// 2: Joystick Button
// 8: LED X
// 9: LED Y
// 10: LED Button

x=0;
int y=0;
int b=0;
void setup() {
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop()
{
  x=analogRead(A0); // x coordinate of joystick
  y=analogRead(A1); // y coordinate of joystick
  b=digitalRead(2); // button pressed indicator
  
  // If x coordinate > than y coordinate, it turns 8 to HIGH and vice versa.
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
  // If button is pressed, turn 10 to HIGH
  if (b == 0) {
      digitalWrite(10, HIGH);
  } else {
      digitalWrite(10, LOW);  
  }
}
