/* INFO:
50 in delay is 1 second
You need to pinMode(PIN_NUMBER, OUTPUT); to use the thing
*/

// LEDs
#define BLUE_LED 13

#define RED_LED_1 1
#define YELLOW_LED_1 2
#define GREEN_LED_1 3

#define RED_LED_2 5
#define YELLOW_LED_2 6
#define GREEN_LED_2 7

// Buttons
#define BUTTON_1 12

// Constants
#define LOOP_LENGTH 6000

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(RED_LED_1, OUTPUT);
  pinMode(YELLOW_LED_1, OUTPUT);
  pinMode(GREEN_LED_1, OUTPUT);
  pinMode(RED_LED_2, OUTPUT);
  pinMode(YELLOW_LED_2, OUTPUT);
  pinMode(GREEN_LED_2, OUTPUT);
  pinMode(BUTTON_1, INPUT);

  
}

int lastTimeCheck = 0;
int totalTimeSinceLastSecond = 0;
void loop() {
  totalTimeSinceLastSecond = totalTimeSinceLastSecond + (millis() - lastTimeCheck);
  lastTimeCheck = millis();
  if (totalTimeSinceLastSecond > LOOP_LENGTH) {
    everyLoop();
    totalTimeSinceLastSecond = 0;
  }

  //set_pin(GREEN_LED_1, getButtonState(BUTTON_1));
  bool isButtonOn = false;
  if (getButtonState(BUTTON_1) && !isButtonOn) {
    digitalWrite(13, LOW);
    set_pin(GREEN_LED_1, true);
    isButtonOn = true;
  } if (!getButtonState(BUTTON_1) && isButtonOn) {
    set_pin(GREEN_LED_1, false);
    digitalWrite(13, HIGH);
    isButtonOn = false;
  }

  bool hasRed = false;
  bool hasYellow = false;
  bool hasGreen = false;
  if (totalTimeSinceLastSecond < 2000 && !hasRed) {
    hasRed = true;
    set_pin(RED_LED_2, true);
    return;
  }

  if (totalTimeSinceLastSecond < 4000 && !hasYellow) {
    hasYellow = true;
    set_pin(RED_LED_2, false);
    set_pin(YELLOW_LED_2, true);
    return;
  }

  if (totalTimeSinceLastSecond < 6000 && !hasGreen) {
    hasGreen = true;
    set_pin(YELLOW_LED_2, false);
    set_pin(GREEN_LED_2, true);
    return;
  }

  if (totalTimeSinceLastSecond < 7990) {
    hasGreen = true;
    set_pin(GREEN_LED_2, false);
    return;
  }
  return;
  
  
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

//void printt(string e) {
//  Serial.println(e);
//}

void printt(int e) {
  Serial.println(e);
}

void everyLoop() {
//  set_pin(RED_LED_1, true);
//  delay(200);
//  set_pin(RED_LED_1, false);
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

int last = 0;
int cState = 0;
int inARow = 0;
int zerosInARow = 0;
bool getButtonState(int pin) {
  int state = digitalRead(pin);
//  if (state == HIGH) {
//    inARow += 1;
//    if (inARow > 10000) {
//      return true;
//    }
//  } else {
//    inARow = 0;
//    return false;
//  }
//  return false;
//  
  printt(state);
  if (state == HIGH) {
    return true;
  }
  return false;
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
