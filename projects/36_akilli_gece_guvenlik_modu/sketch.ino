#define PIR 4
#define LDR 34
#define NIGHT_LED 2
#define BUZZER 5
#define DARK_LIMIT 1800

void setup() {
  Serial.begin(115200);
  pinMode(PIR, INPUT);
  pinMode(NIGHT_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  ledcAttachPin(NIGHT_LED, 0);
  ledcSetup(0, 5000, 8);
}

void loop() {
  int light = analogRead(LDR);
  bool motion = digitalRead(PIR) == HIGH;
  bool dark = light < DARK_LIMIT;

  if (motion && dark) {
    ledcWrite(0, 40);    // düşük gece ışığı
    digitalWrite(BUZZER, HIGH);
    Serial.println("Gece güvenlik modu: hareket algılandı.");
  } else {
    ledcWrite(0, 0);
    digitalWrite(BUZZER, LOW);
  }

  delay(300);
}
