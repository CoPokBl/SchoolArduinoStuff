#include <Servo.h>

float anlInp;
float dgtInp;
float dgtOut;
Servo piss;
int angle;
bool swtch;
int angDif;
  
void setup() {
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  angle = 0;
  piss.attach(3);
  swtch = false;
  angDif = 45;
}

void loop() {
  //anlInp = analogRead(A0);
  dgtInp = digitalRead(11);
  digitalWrite(3, dgtInp);
  Serial.println(dgtInp, angle);
  piss.write(angle);

  angle = anlInp / 1023 * 180;
  
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
