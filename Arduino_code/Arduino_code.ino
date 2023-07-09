int delayTime = 30;
bool state= HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
  pinMode(5, INPUT);
}

void loop() {
  int up= digitalRead(5);
  int down= digitalRead(9);
  if (up==HIGH and down==LOW) {
      digitalWrite(13, HIGH); 
      digitalWrite(12, LOW); 
      delay(delayTime); 
      digitalWrite(11, HIGH); 
      digitalWrite(10, LOW); 
      delay(delayTime); 
      digitalWrite(13, LOW); 
      digitalWrite(12, HIGH); 
      delay(delayTime); 
      digitalWrite(11, LOW); 
      digitalWrite(10, HIGH); 
      delay(delayTime); 
  }
  else if (up==LOW and down==HIGH) {
      digitalWrite(11, LOW); 
      digitalWrite(10, HIGH); 
      delay(delayTime); 
      digitalWrite(13, LOW); 
      digitalWrite(12, HIGH); 
      delay(delayTime); 
      digitalWrite(11, HIGH); 
      digitalWrite(10, LOW); 
      delay(delayTime); 
      digitalWrite(13, HIGH); 
      digitalWrite(12, LOW); 
      delay(delayTime);    
  }
  
}
