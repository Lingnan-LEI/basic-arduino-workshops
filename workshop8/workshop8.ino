#define sensorPin A0
#define ledPin 3
#define sensorMax 900

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(sensorPin, INPUT);

}

void loop() {

int sensorState = analogRead(sensorPin);
Serial.print("Sensor = ");
Serial.println(sensorState);
int lightLevel = abs(sensorMax - sensorState);
Serial.print("Difference = ");
Serial.println(lightLevel);
analogWrite(ledPin, abs(sensorMax - sensorState));
}
