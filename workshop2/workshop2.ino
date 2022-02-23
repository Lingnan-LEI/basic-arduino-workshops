#define buttonPin 8

void setup() {
Serial.begin(9600);
pinMode(buttonPin, INPUT);

}

void loop() {
//bool buttonState = digitalRead(buttonPin);
Serial.println(digitalRead(buttonPin));

}
