#define buttonPin 8
#define ledPin 13

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);

}

void loop() {
digitalWrite(ledPin, digitalRead(buttonPin));

}
