#define LED 2
#define LDR 34

void setup() {
  Serial.begin(115200);
  ledcAttachPin(LED, 0);
  ledcSetup(0, 5000, 8);
}

void loop() {
  int light = analogRead(LDR);
  int brightness = map(light, 0, 4095, 255, 0);
  brightness = constrain(brightness, 0, 255);

  ledcWrite(0, brightness);

  Serial.print("Işık: ");
  Serial.print(light);
  Serial.print(" | LED parlaklık: ");
  Serial.println(brightness);
  delay(200);
}
