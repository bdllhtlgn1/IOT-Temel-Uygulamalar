#include <WiFi.h>
#include <WebServer.h>
#include "DHTesp.h"

#define DHT_PIN 15

const char* ssid = "Wokwi-GUEST";
const char* password = "";

DHTesp dht;
WebServer server(80);

void handleRoot() {
  TempAndHumidity data = dht.getTempAndHumidity();

  String html = "<h1>ESP32 Ortam Izleme Paneli</h1>";
  html += "<p>Sicaklik: " + String(data.temperature, 1) + " C</p>";
  html += "<p>Nem: " + String(data.humidity, 1) + " %</p>";
  html += "<meta http-equiv='refresh' content='3'>";

  server.send(200, "text/html", html);
}

void setup() {
  Serial.begin(115200);
  dht.setup(DHT_PIN, DHTesp::DHT22);

  WiFi.begin(ssid, password);
  Serial.print("Wi-Fi baglaniyor");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("IP adresi: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.begin();
}

void loop() {
  server.handleClient();
}
