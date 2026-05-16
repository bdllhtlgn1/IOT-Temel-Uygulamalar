#define LED 2

void setup() {
  ledcAttachPin(LED, 0);
  ledcSetup(0, 5000, 8);
}

void loop() {
  for (int duty = 0; duty <= 255; duty++) {
    ledcWrite(0, duty);
    delay(8);
  }

  for (int duty = 255; duty >= 0; duty--) {
    ledcWrite(0, duty);
    delay(8);
  }
}
