#define LED 2
#define DOOR 4
#define BUZZER 5

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(DOOR, INPUT_PULLUP);
}

void loop() {
  bool doorOpen = digitalRead(DOOR) == LOW;

  digitalWrite(LED, doorOpen ? HIGH : LOW);
  digitalWrite(BUZZER, doorOpen ? HIGH : LOW);

  if (doorOpen) {
    Serial.println("Uyarı: Kapı açık!");
  }
  delay(300);
}
