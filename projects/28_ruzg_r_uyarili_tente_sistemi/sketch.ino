#include <ESP32Servo.h>

#define WIND_SENSOR 34
#define SERVO_PIN 13
#define WIND_LIMIT 2800

Servo awningServo;

void setup() {
  Serial.begin(115200);
  awningServo.attach(SERVO_PIN);
}

void loop() {
  int wind = analogRead(WIND_SENSOR);
  bool strongWind = wind > WIND_LIMIT;

  awningServo.write(strongWind ? 0 : 90);

  Serial.print("Rüzgar seviyesi: ");
  Serial.print(wind);
  Serial.print(" | Tente: ");
  Serial.println(strongWind ? "TOPLANDI" : "AÇIK");

  delay(500);
}
