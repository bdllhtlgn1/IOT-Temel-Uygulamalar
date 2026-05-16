#include <ESP32Servo.h>

#define RAIN_SENSOR 34
#define SERVO_PIN 13
#define RAIN_LIMIT 2500

Servo windowServo;

void setup() {
  Serial.begin(115200);
  windowServo.attach(SERVO_PIN);
}

void loop() {
  int rain = analogRead(RAIN_SENSOR);
  bool raining = rain > RAIN_LIMIT;

  windowServo.write(raining ? 0 : 90);

  Serial.print("Yağmur sensörü: ");
  Serial.print(rain);
  Serial.print(" | Pencere: ");
  Serial.println(raining ? "KAPALI" : "AÇIK");

  delay(500);
}
