#define LED 2
#define LDR 34
#define DARK_LIMIT 1800

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  int light = analogRead(LDR);
  bool isDark = light < DARK_LIMIT;

  digitalWrite(LED, isDark ? HIGH : LOW);

  Serial.print("Işık seviyesi: ");
  Serial.println(light);
  delay(300);
}
