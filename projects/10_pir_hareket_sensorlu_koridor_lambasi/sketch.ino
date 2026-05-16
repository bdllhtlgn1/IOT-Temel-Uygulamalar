#define LED 2
#define PIR 4

unsigned long lastMotion = 0;
const unsigned long holdTime = 5000;

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop() {
  if (digitalRead(PIR) == HIGH) {
    lastMotion = millis();
    Serial.println("Hareket algılandı.");
  }

  bool lightOn = millis() - lastMotion < holdTime;
  digitalWrite(LED, lightOn ? HIGH : LOW);
}
