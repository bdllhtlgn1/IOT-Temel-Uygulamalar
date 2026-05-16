#define PIR 4
#define LIGHT 2
#define DEVICE 15

unsigned long lastMotion = 0;
const unsigned long timeoutMs = 8000;

void setup() {
  Serial.begin(115200);
  pinMode(PIR, INPUT);
  pinMode(LIGHT, OUTPUT);
  pinMode(DEVICE, OUTPUT);
}

void loop() {
  if (digitalRead(PIR) == HIGH) {
    lastMotion = millis();
  }

  bool roomOccupied = millis() - lastMotion < timeoutMs;

  digitalWrite(LIGHT, roomOccupied);
  digitalWrite(DEVICE, roomOccupied);

  Serial.println(roomOccupied ? "Oda dolu: cihazlar aktif" : "Oda boş: tasarruf modu");
  delay(500);
}
