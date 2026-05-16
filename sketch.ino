
//# 01. LED Yak-Söndür Temel Uygulaması
//
// ## Kısa açıklama
// ESP32 üzerinde GPIO2 pinine bağlı LED 500 ms aralıklarla yanıp söner. Dijital çıkış ve delay mantığı öğretilir.
//
#define LED 2
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
