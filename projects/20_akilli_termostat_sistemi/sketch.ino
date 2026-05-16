#include "DHTesp.h"

#define DHT_PIN 15
#define FAN_LED 2
#define HEATER_LED 4

DHTesp dht;

void setup() {
  Serial.begin(115200);
  pinMode(FAN_LED, OUTPUT);
  pinMode(HEATER_LED, OUTPUT);
  dht.setup(DHT_PIN, DHTesp::DHT22);
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();

  bool heaterOn = data.temperature < 20.0;
  bool fanOn = data.temperature > 28.0;

  digitalWrite(HEATER_LED, heaterOn ? HIGH : LOW);
  digitalWrite(FAN_LED, fanOn ? HIGH : LOW);

  Serial.print("Sıcaklık: ");
  Serial.print(data.temperature);
  Serial.print(" °C | Isıtıcı: ");
  Serial.print(heaterOn ? "AÇIK" : "KAPALI");
  Serial.print(" | Fan: ");
  Serial.println(fanOn ? "AÇIK" : "KAPALI");

  delay(1000);
}
