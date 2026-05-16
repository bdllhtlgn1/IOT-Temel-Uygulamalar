#define PIR 4
#define STATUS_LED 2

void setup() {
  Serial.begin(115200);
  pinMode(PIR, INPUT);
  pinMode(STATUS_LED, OUTPUT);
}

void loop() {
  bool occupied = digitalRead(PIR) == HIGH;

  digitalWrite(STATUS_LED, occupied);

  Serial.print("Oda durumu: ");
  Serial.println(occupied ? "DOLU" : "BOŞ");

  delay(500);
}
