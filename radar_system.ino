#include <Servo.h>

Servo radarServo;
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;

void setup() {
  radarServo.attach(11);  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  for (int angle = 15; angle <= 165; angle++) {
    radarServo.write(angle);
    delay(50);
    distance = getDistance();
    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }

  for (int angle = 165; angle >= 15; angle--) {
    radarServo.write(angle);
    delay(50);
    distance = getDistance();
    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2;
}

