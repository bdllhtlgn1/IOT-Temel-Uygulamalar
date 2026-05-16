#include <ESP32Servo.h>

#define LDR_PIN 34
#define SERVO_PIN 13
#define BRIGHT_LIMIT 2500

Servo curtainServo;

void setup() {
  Serial.begin(115200);
  curtainServo.attach(SERVO_PIN);
}

void loop() {
  int light = analogRead(LDR_PIN);
  bool bright = light > BRIGHT_LIMIT;

  curtainServo.write(bright ? 0 : 90);

  Serial.print("Işık seviyesi: ");
  Serial.print(light);
  Serial.print(" | Perde: ");
  Serial.println(bright ? "KAPALI" : "AÇIK");

  delay(500);
}
