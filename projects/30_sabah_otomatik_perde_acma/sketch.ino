#include <ESP32Servo.h>

#define SERVO_PIN 13

Servo curtainServo;
unsigned long startTime;

void setup() {
  Serial.begin(115200);
  curtainServo.attach(SERVO_PIN);
  curtainServo.write(0);
  startTime = millis();
  Serial.println("Simülasyon başladı. 10 saniye sonra perde açılacak.");
}

void loop() {
  unsigned long elapsed = millis() - startTime;

  if (elapsed > 10000) {
    curtainServo.write(90);
    Serial.println("Sabah modu: perde açıldı.");
    delay(2000);
  }
}
