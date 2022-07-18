/* INFO:
50 in delay is 1 second
You need to pinMode(PIN_NUMBER, OUTPUT); to use the thing
*/

// Pins
#define BLUE_LED 13

#define RED_LED_1 1
#define YELLOW_LED_1 2
#define GREEN_LED_1 3

#define RED_LED_2 5
#define YELLOW_LED_2 6
#define GREEN_LED_2 7

void setup() {
  // put your setup code here, to run once:
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(RED_LED_1, OUTPUT);
  pinMode(YELLOW_LED_1, OUTPUT);
  pinMode(GREEN_LED_1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  set_pin(GREEN_LED_1, true);
  set_pin(RED_LED_2, true);
  wait_seconds(3);
  set_pin(GREEN_LED_1, false);
  set_pin(YELLOW_LED_1, true);
  wait_seconds(1);
  set_pin(YELLOW_LED_1, false);
  set_pin(RED_LED_1, true);
  set_pin(GREEN_LED_2, true);
  set_pin(RED_LED_2, false);
  wait_seconds(3);
  set_pin(GREEN_LED_2, false);
  set_pin(YELLOW_LED_2, true);
  wait_seconds(1);
  set_pin(YELLOW_LED_2, false);
  set_pin(RED_LED_2, true);
  wait_seconds(1);
  set_pin(RED_LED_1, false);
}

/*
Turns on a pin for a time period
pin: The pin to turn on
delayTime: The amount of time in seconds to enable it for
*/
void turn_on(int pin, int delayTime) {
  digitalWrite(pin, HIGH);
  delay(delayTime * 50);
  digitalWrite(pin, LOW);
}

void set_pin(int pin, boolean toggle) {
  int level;
  if (toggle) {
    level = HIGH;
  } else {
    level = LOW;
  }

  digitalWrite(pin, level);
}

void wait_seconds(int seconds) {
  delay(1000 * seconds);
}


//GYR GYR
//100 001
//3 seconds
//010 001
//1 second
//001 100
//3 seconds
//001 010
//1 second
//001 001
