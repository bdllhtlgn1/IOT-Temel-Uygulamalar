#define LED 2
#define POT 34

void setup() {
  Serial.begin(115200);
  ledcAttachPin(LED, 0);
  ledcSetup(0, 5000, 8);
}

void loop() {
  int raw = analogRead(POT);
  int duty = map(raw, 0, 4095, 0, 255);
  ledcWrite(0, duty);

  Serial.print("Analog: ");
  Serial.print(raw);
  Serial.print(" | PWM: ");
  Serial.println(duty);
  delay(100);
}
