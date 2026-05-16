#include "DHTesp.h"

#define DHT_PIN 15
#define GAS_PIN 34
#define SMOKE_PIN 35
#define ALERT_LED 2
#define BUZZER 5

DHTesp dht;

void setup() {
  Serial.begin(115200);
  dht.setup(DHT_PIN, DHTesp::DHT22);
  pinMode(ALERT_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();
  int gas = analogRead(GAS_PIN);
  int smoke = analogRead(SMOKE_PIN);

  bool danger = data.temperature > 55 || gas > 2500 || smoke > 2500;

  digitalWrite(ALERT_LED, danger);
  digitalWrite(BUZZER, danger);

  Serial.print("T:");
  Serial.print(data.temperature);
  Serial.print(" Gaz:");
  Serial.print(gas);
  Serial.print(" Duman:");
  Serial.print(smoke);
  Serial.print(" | Durum:");
  Serial.println(danger ? "TEHLIKE" : "Normal");

  delay(1000);
}
