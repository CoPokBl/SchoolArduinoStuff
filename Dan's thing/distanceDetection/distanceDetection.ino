#include <Servo.h>

float echo;
float trig;
float dgtOut;
Servo piss;
int angle;
bool swtch;
int angDif;
  
void setup() {
  pinMode(5, OUTPUT);
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  angle = 0;
  piss.attach(3);
  swtch = false;
  angDif = 45;
}

void loop() {
  echo = pulseIn(2, HIGH);
   
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(10);
  digitalWrite(3, LOW);
  
  digitalWrite(5, echo);
  Serial.println(echo);
  piss.write(angle);
  /*
  Serial.println("Exit Code");
  delay(1000);
  exit(1);
  */
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
