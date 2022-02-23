// Code for controlling a two-wheeled robot using a motor controller

const int IN1 = 3; //We will connect motor controller pin IN1 to Arduino pin 3
const int IN2 = 4; //We will connect motor controller pin IN2 to Arduino pin 4
const int ENA = 5; //We will connect motor controller pin ENA to Arduino pin 5

const int IN3 = 8; //We will connect motor controller pin IN3 to Arduino pin 8
const int IN4 = 9; //We will connect motor controller pin IN3 to Arduino pin 8
const int ENB = 10; //We will connect motor controller pin IN3 to Arduino pin 8

void setup() {
pinMode(IN1, OUTPUT); //set all pins to be output
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(ENA, OUTPUT);
pinMode(ENB, OUTPUT);

}

//We can use the functions "forward", "backward", "left" and "right" in the 'loop' block
// to control the robot

// "forward" accepts a speed command 'vel'
void forward(int vel) {
  //set direction of motor 1
  digitalWrite(IN1, HIGH); 
  digitalWrite(IN2, LOW);
  //set speed of motor 1
  analogWrite(ENA, vel);

  //set direction of motor 2
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  //set speed of motor 2
  analogWrite(ENB, vel);
  
}

void backward(int vel) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, vel);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, vel);
  
}

void left(int vel) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, vel);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, vel);

}

void right(int vel) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, vel);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, vel);
}

void loop() {
 
 int startTime = millis();
 while (millis() - startTime < 500) {
 forward(150); //move forward
 }
}
