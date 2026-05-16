#include "DHTesp.h"

#define DHT_PIN 15
#define FAN_LED 2
#define HUMIDITY_LIMIT 65.0

DHTesp dht;

void setup() {
  Serial.begin(115200);
  pinMode(FAN_LED, OUTPUT);
  dht.setup(DHT_PIN, DHTesp::DHT22);
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();
  bool fanOn = data.humidity >= HUMIDITY_LIMIT;

  digitalWrite(FAN_LED, fanOn ? HIGH : LOW);

  Serial.print("Nem: ");
  Serial.print(data.humidity);
  Serial.print(" % | Havalandırma: ");
  Serial.println(fanOn ? "AÇIK" : "KAPALI");

  delay(1000);
}
