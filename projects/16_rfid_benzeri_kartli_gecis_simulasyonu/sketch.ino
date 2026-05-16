#include <ESP32Servo.h>

#define SERVO_PIN 13

Servo lockServo;
String allowedId = "A1B2C3";

void setup() {
  Serial.begin(115200);
  lockServo.attach(SERVO_PIN);
  lockServo.write(0);
  Serial.println("Kart ID girin. Örnek izinli ID: A1B2C3");
}

void loop() {
  if (Serial.available()) {
    String cardId = Serial.readStringUntil('\n');
    cardId.trim();

    if (cardId == allowedId) {
      Serial.println("Geçiş izni verildi.");
      lockServo.write(90);
      delay(2000);
      lockServo.write(0);
    } else {
      Serial.println("Geçiş reddedildi.");
    }
  }
}
