void setup() {
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  tone(10, analogRead(A0));
  Serial.println(analogRead(A0));
}
