#include "DHTesp.h"

#define DHT_PIN 15
#define FAN_LED 2
#define TEMP_LIMIT 28.0

DHTesp dht;

void setup() {
  Serial.begin(115200);
  pinMode(FAN_LED, OUTPUT);
  dht.setup(DHT_PIN, DHTesp::DHT22);
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();
  bool fanOn = data.temperature >= TEMP_LIMIT;

  digitalWrite(FAN_LED, fanOn ? HIGH : LOW);

  Serial.print("Sıcaklık: ");
  Serial.print(data.temperature);
  Serial.print(" °C | Fan: ");
  Serial.println(fanOn ? "AÇIK" : "KAPALI");

  delay(1000);
}
