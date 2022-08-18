void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  
  if (digitalRead(8) == 1) {
    
  }
  tone(3, analogRead(9)*2);
  Serial.println(analogRead(9));
}
