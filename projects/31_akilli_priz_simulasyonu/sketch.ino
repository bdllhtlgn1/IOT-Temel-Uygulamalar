#define RELAY 2
#define LOAD_LED 15
#define BUTTON 4

bool plugOn = false;
bool lastButton = HIGH;

void setup() {
  Serial.begin(115200);
  pinMode(RELAY, OUTPUT);
  pinMode(LOAD_LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  bool current = digitalRead(BUTTON);

  if (lastButton == HIGH && current == LOW) {
    plugOn = !plugOn;
    digitalWrite(RELAY, plugOn);
    digitalWrite(LOAD_LED, plugOn);
    Serial.println(plugOn ? "Akıllı priz AÇIK" : "Akıllı priz KAPALI");
    delay(250);
  }

  lastButton = current;
}
