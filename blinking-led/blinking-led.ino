#define BLUE_LED 13

void setup() {
  // put your setup code here, to run once:
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(BLUE_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(BLUE_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(50);
}
