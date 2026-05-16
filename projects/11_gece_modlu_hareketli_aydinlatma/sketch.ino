#define LED 2
#define PIR 4
#define LDR 34
#define DARK_LIMIT 1800

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop() {
  int light = analogRead(LDR);
  bool motion = digitalRead(PIR) == HIGH;
  bool isDark = light < DARK_LIMIT;

  digitalWrite(LED, (motion && isDark) ? HIGH : LOW);

  Serial.print("Hareket: ");
  Serial.print(motion);
  Serial.print(" | Işık: ");
  Serial.println(light);
  delay(200);
}
