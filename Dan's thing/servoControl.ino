#include <Servo.h>

float anlInp;
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
  if (angle >= 180) {
    swtch = true;
  }
  else if (angle <= 0) {
    swtch = false;
  }
  
  anlInp = analogRead(A0);
  digitalWrite(3, anlInp);
  Serial.println(anlInp, angle);
  piss.write(angle);
  
  if (swtch == true) {
    angle -= angDif;
  }
  else {
    angle += angDif;
  }
  
  delay(300);
}
