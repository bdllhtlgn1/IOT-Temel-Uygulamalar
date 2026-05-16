#include <ESP32Servo.h>
#include "DHTesp.h"

#define LAMP 2
#define PIR 4
#define BUZZER 5
#define SERVO_PIN 13
#define DHT_PIN 15
#define LDR_PIN 34

DHTesp dht;
Servo curtainServo;

void setup() {
  Serial.begin(115200);
  pinMode(LAMP, OUTPUT);
  pinMode(PIR, INPUT);
  pinMode(BUZZER, OUTPUT);
  dht.setup(DHT_PIN, DHTesp::DHT22);
  curtainServo.attach(SERVO_PIN);
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();
  int light = analogRead(LDR_PIN);
  bool motion = digitalRead(PIR) == HIGH;
  bool dark = light < 1800;
  bool hot = data.temperature > 30.0;

  digitalWrite(LAMP, (motion && dark) ? HIGH : LOW);
  digitalWrite(BUZZER, hot ? HIGH : LOW);
  curtainServo.write(light > 2600 ? 0 : 90);

  Serial.print("T:");
  Serial.print(data.temperature);
  Serial.print(" H:");
  Serial.print(data.humidity);
  Serial.print(" Isik:");
  Serial.print(light);
  Serial.print(" Hareket:");
  Serial.println(motion ? "var" : "yok");

  delay(1000);
}
