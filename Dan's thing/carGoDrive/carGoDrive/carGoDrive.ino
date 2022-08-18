const int AIN1 = 12;
const int AIN2 = 13;
const int BIN1 = 9;
const int BIN2 = 8;
const int PWMA = 11;  
const int PWMB = 10;
int switchPin = 7;

int leftDrv = 0;
int rightDrv = 0;

int swtch = false;
int x = 0;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);

  Serial.begin(9600);                       //begin serial communication with the computer
}

void loop() {
  if (swtch == false) {
    x += 1;
  }
  else if (swtch == true) {
    x -= 1;
  }

  if (x >= 350) {
    swtch = true;
  }
  else if (x <= -350) {
    swtch = false;
  }

  leftDrv = x;
  rightDrv = x;

  if (digitalRead(7) == LOW) {          //if the switch is on...
    spinMotor(leftDrv, rightDrv);
  } else {                              //if the switch is off...
    spinMotor(0, 0);                   //turn the motor off
  }


}

void spinMotor(int leftDrv, int rightDrv) {
  if (leftDrv > 0) {
    digitalWrite(AIN1, HIGH);
    digitalWrite(AIN2, LOW);    
  }
  else if (leftDrv < 0) {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, HIGH); 
  }
  else {
    digitalWrite(AIN1, LOW);
    digitalWrite(AIN2, LOW);         
  }
  
  if (rightDrv > 0) {
    digitalWrite(BIN1, HIGH);
    digitalWrite(BIN2, LOW);
  }
  else if (rightDrv < 0) {
    digitalWrite(BIN1, LOW)
    digitalWrite(BIN2, HIGH);
  }
  else { 
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, LOW);
  }
  
  analogWrite(PWMA, abs(leftDrv));  
  analogWrite(PWMB, abs(rightDrv));
}
