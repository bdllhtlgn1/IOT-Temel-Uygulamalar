#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "DHTesp.h"

#define DHT_PIN 15
#define LDR_PIN 34
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

DHTesp dht;
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  dht.setup(DHT_PIN, DHTesp::DHT22);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED başlatılamadı.");
    while (true);
  }
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();
  int light = analogRead(LDR_PIN);

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Ortam Izleme");
  display.print("Sicaklik: ");
  display.println(data.temperature);
  display.print("Nem: ");
  display.println(data.humidity);
  display.print("Isik: ");
  display.println(light);
  display.display();

  delay(1000);
}
