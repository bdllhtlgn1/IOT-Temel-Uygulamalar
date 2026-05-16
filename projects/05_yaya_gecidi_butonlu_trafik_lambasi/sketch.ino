#define RED 2
#define YELLOW 4
#define GREEN 5
#define BUTTON 18

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void setLights(bool r, bool y, bool g) {
  digitalWrite(RED, r);
  digitalWrite(YELLOW, y);
  digitalWrite(GREEN, g);
}

void normalTraffic() {
  setLights(false, false, true);
}

void pedestrianMode() {
  setLights(false, true, false);
  delay(1000);
  setLights(true, false, false);
  delay(5000);
}

void loop() {
  normalTraffic();
  if (digitalRead(BUTTON) == LOW) {
    pedestrianMode();
  }
}
