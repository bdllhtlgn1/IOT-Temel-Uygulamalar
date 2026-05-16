#define LED 2
#define PIR 4
#define BUZZER 5

String password = "1234";
bool alarmActive = false;

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.println("Komutlar: 1234 -> alarm durumunu değiştirir");
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input == password) {
      alarmActive = !alarmActive;
      Serial.println(alarmActive ? "Alarm aktif." : "Alarm pasif.");
    } else {
      Serial.println("Hatalı şifre.");
    }
  }

  bool danger = alarmActive && digitalRead(PIR) == HIGH;
  digitalWrite(LED, danger ? HIGH : LOW);
  digitalWrite(BUZZER, danger ? HIGH : LOW);
}
