#include <WiFi.h>
#include <WebServer.h>

#define LED 2

const char* ssid = "Wokwi-GUEST";
const char* password = "";

WebServer server(80);

void handleRoot() {
  String html = "<h1>ESP32 Web LED Kontrol</h1>";
  html += "<p><a href='/on'>LED AC</a></p>";
  html += "<p><a href='/off'>LED KAPAT</a></p>";
  server.send(200, "text/html", html);
}

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);

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
  server.on("/on", []() {
    digitalWrite(LED, HIGH);
    server.sendHeader("Location", "/");
    server.send(303);
  });
  server.on("/off", []() {
    digitalWrite(LED, LOW);
    server.sendHeader("Location", "/");
    server.send(303);
  });

  server.begin();
}

void loop() {
  server.handleClient();
}
