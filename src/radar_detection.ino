#include <Servo.h>

// Define pins
const int trigPin = 9;
const int echoPin = 10;
Servo myServo;

// Variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myServo.attach(11);  // Servo motor control pin
  Serial.begin(9600);
}

void loop() {
  // Sweep from 0° to 180°
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);
    delay(15);
    distance = getDistance();
    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print("°  Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }

  // Sweep back from 180° to 0°
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);
    delay(15);
    distance = getDistance();
    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print("°  Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }
}

// Function to get distance from ultrasonic sensor
int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2;  // Convert to cm
}
