int val = 0;  // variable to store the value read

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}

void loop() {
  val = digitalRead(12);  // read the input pin
  Serial.println(val);          // debug value

  if (val >= 1000) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
