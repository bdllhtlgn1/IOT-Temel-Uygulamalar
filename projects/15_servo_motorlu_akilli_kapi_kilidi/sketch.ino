#include <ESP32Servo.h>

#define SERVO_PIN 13

Servo lockServo;
String password = "4321";

void setup() {
  Serial.begin(115200);
  lockServo.attach(SERVO_PIN);
  lockServo.write(0);
  Serial.println("Kapıyı açmak için şifre girin.");
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input == password) {
      Serial.println("Doğru şifre: Kapı açıldı.");
      lockServo.write(90);
      delay(3000);
      lockServo.write(0);
      Serial.println("Kapı tekrar kilitlendi.");
    } else {
      Serial.println("Hatalı şifre.");
    }
  }
}
