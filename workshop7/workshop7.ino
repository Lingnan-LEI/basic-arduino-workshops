#define sensorPin A0
#define ledPin 13

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(sensorPin, INPUT);

}

void loop() {

int sensorState = analogRead(sensorPin);
Serial.println(sensorState);
if (sensorState < 500) {
  digitalWrite(ledPin, HIGH);
}
else {
  digitalWrite(ledPin, LOW);
}
}
