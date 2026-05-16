#include <ESP32Servo.h>

#define LAMP 2
#define FAN 4
#define SERVO_PIN 13

Servo curtain;

void setup() {
  Serial.begin(115200);
  pinMode(LAMP, OUTPUT);
  pinMode(FAN, OUTPUT);
  curtain.attach(SERVO_PIN);

  Serial.println("Komutlar:");
  Serial.println("lamp on/off, fan on/off, curtain open/close");
}

void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();
    cmd.toLowerCase();

    if (cmd == "lamp on") digitalWrite(LAMP, HIGH);
    else if (cmd == "lamp off") digitalWrite(LAMP, LOW);
    else if (cmd == "fan on") digitalWrite(FAN, HIGH);
    else if (cmd == "fan off") digitalWrite(FAN, LOW);
    else if (cmd == "curtain open") curtain.write(90);
    else if (cmd == "curtain close") curtain.write(0);
    else Serial.println("Bilinmeyen komut.");

    Serial.println("Komut işlendi: " + cmd);
  }
}
