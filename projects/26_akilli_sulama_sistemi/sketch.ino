#define SENSOR 34
#define ALERT_LED 2
#define BUZZER 5
#define LIMIT 1800

void setup() {
  Serial.begin(115200);
  pinMode(ALERT_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int value = analogRead(SENSOR);
  bool alarm = value < LIMIT;

  digitalWrite(ALERT_LED, alarm ? HIGH : LOW);
  digitalWrite(BUZZER, alarm ? HIGH : LOW);

  Serial.print("Toprak nemi: ");
  Serial.print(value);
  Serial.print(" | Durum: ");
  Serial.println(alarm ? "Toprak kuru: sulama aktif." : "Normal");

  delay(500);
}
