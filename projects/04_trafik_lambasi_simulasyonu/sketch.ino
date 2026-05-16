#define RED 2
#define YELLOW 4
#define GREEN 5

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void setLights(bool r, bool y, bool g) {
  digitalWrite(RED, r);
  digitalWrite(YELLOW, y);
  digitalWrite(GREEN, g);
}

void loop() {
  setLights(true, false, false);
  delay(3000);

  setLights(false, false, true);
  delay(3000);

  setLights(false, true, false);
  delay(1000);
}
