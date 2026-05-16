#define LED 2
#define BUTTON 4

bool ledState = false;
bool lastButton = HIGH;
unsigned long lastChange = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  bool reading = digitalRead(BUTTON);
  if (reading != lastButton && millis() - lastChange > 50) {
    lastChange = millis();
    if (lastButton == HIGH && reading == LOW) {
      ledState = !ledState;
      digitalWrite(LED, ledState);
    }
    lastButton = reading;
  }
}
