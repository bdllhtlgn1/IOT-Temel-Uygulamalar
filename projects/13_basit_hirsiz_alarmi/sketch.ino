#define LED 2
#define PIR 4
#define BUZZER 5

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  bool motion = digitalRead(PIR) == HIGH;

  digitalWrite(LED, motion ? HIGH : LOW);
  digitalWrite(BUZZER, motion ? HIGH : LOW);

  if (motion) {
    Serial.println("ALARM: Hareket algılandı!");
  }
  delay(100);
}
