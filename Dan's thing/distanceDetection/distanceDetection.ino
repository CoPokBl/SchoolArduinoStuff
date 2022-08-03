#include <Servo.h>

float echo;
float trig;
float dgtOut;
Servo piss;
int angle;
bool swtch;
int angDif;
  
void setup() {
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  angle = 0;
  piss.attach(3);
  swtch = false;
  angDif = 45;
}

void loop() {
  echo = analogRead(A0);
  digitalWrite(10, HIGH);
  digitalWrite(3, echo);
  Serial.println(echo);
  piss.write(angle);

  //angle = echo / 1023 * 180;
  
  /*
  // Auto
  if (angle >= 180) {
    swtch = true;
  }
  else if (angle <= 0) {
    swtch = false;
  }
  
  if (swtch == true) {
    angle -= angDif;
  }
  else {
    angle += angDif;
  }
  
  delay(300);
  */
}
