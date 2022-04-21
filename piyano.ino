#define yesil A0
#define sari A1
#define kirmizi A2
void setup() {
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT); // k
  pinMode(6, OUTPUT); // s
  pinMode(7, OUTPUT); // y

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);

  Serial.begin(9600);
}

void loop() {
  int i = 0;
  int j = 0;
  int k = 0;
  Serial.println(analogRead(sari));
  if(analogRead(yesil) > 800) {
    delay(10); 
    if (i > 5) {
      tone(9, 256);
      Serial.println("do");
    }
    else if (analogRead(yesil) > 1000) {
      i++;
      Serial.println("do");
    }
    
  }else if(analogRead(sari) > 800) {
    delay(10); 
    if (j > 5) {
      tone(9, 293.665);
      Serial.println("re");
    }
    else if (analogRead(sari) > 1000) {
      j++;
      Serial.println("re");
    }
    
  } else if(analogRead(kirmizi) > 800) {
    delay(10); 
    if (k > 5) {
      tone(9, 329.628);
      Serial.println("mi");
    }
    else if (analogRead(kirmizi) > 1000) {
      k++;
      Serial.println("do");
    }
    
  }   else {
    i = 0;
    j = 0;
    k = 0;
    noTone(9); 
  }

}
