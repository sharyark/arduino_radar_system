#include <Servo.h>

Servo myservo;

#define ECHO_PIN 3
#define TRIG_PIN 4

long duration;
int distance;

void setup() {
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIG_PIN, OUTPUT);
  Serial.begin(9600);
  myservo.attach(9);  // Servo signal on pin 9
}

int measureDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH, 25000);  // 25ms timeout
  if (duration == 0) return 0;  // no echo received

  return duration * 0.0343 / 2;  // distance in cm
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myservo.write(angle);
    delay(15);  // give servo time to reach

    distance = measureDistance();

    Serial.print(distance);
    Serial.print(",");
    Serial.println(angle);
  }

  // Sweep back from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myservo.write(angle);
    delay(15);

    distance = measureDistance();

    Serial.print(distance);
    Serial.print(",");
    Serial.println(angle);
  }
}
