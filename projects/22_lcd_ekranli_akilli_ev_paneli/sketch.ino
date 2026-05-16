#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHTesp.h"

#define DHT_PIN 15
#define LDR_PIN 34

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHTesp dht;

void setup() {
  Serial.begin(115200);
  dht.setup(DHT_PIN, DHTesp::DHT22);
  lcd.init();
  lcd.backlight();
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();
  int light = analogRead(LDR_PIN);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(data.temperature, 1);
  lcd.print("C H:");
  lcd.print(data.humidity, 0);

  lcd.setCursor(0, 1);
  lcd.print("Isik:");
  lcd.print(light);

  delay(1000);
}
