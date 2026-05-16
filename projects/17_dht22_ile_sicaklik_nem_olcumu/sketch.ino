#include "DHTesp.h"

#define DHT_PIN 15

DHTesp dht;

void setup() {
  Serial.begin(115200);
  dht.setup(DHT_PIN, DHTesp::DHT22);
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();

  Serial.print("Sıcaklık: ");
  Serial.print(data.temperature);
  Serial.print(" °C | Nem: ");
  Serial.print(data.humidity);
  Serial.println(" %");

  delay(1000);
}
