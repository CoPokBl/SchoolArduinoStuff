#define AIN1 12
#define AIN2 13
#define BIN1 9
#define BIN2 8
#define PWMA 11
#define PWMB 10
#define switchPin 7

#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
#define led 5

int leftDrv = 0;
int rightDrv = 0;

// Drive Demo Vars
bool swtch = false;
int x = 0;

// Vars for Seeing
long duration;
int distance; 

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop() {
   // The Seeing Code
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print(distance);
  Serial.println(" cm");

  analogWrite(led, distance);

  if (distance > 15 || distance == 0) {
    leftDrv = 250;
    rightDrv = 250;
  }
  else {
    leftDrv = 0;
    rightDrv = 0;
  }
  
  if (digitalRead(7) == LOW) {
    spinMotor(leftDrv, rightDrv);
  } else {
    spinMotor(0, 0);
  }
}

void spinMotor(int leftDrv, int rightDrv) {
  // Driving Function
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
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, HIGH);
  }
  else { 
    digitalWrite(BIN1, LOW);
    digitalWrite(BIN2, LOW);
  }
  
  analogWrite(PWMA, abs(leftDrv));
  analogWrite(PWMB, abs(rightDrv));
}
