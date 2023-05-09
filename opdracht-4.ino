int potMetric = 0;

void setup() {
  // LED pins vanaf 6 tot 12 defineren als output
  for (int i = 6; i <= 12; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  potmeter();
}

void potmeter() {
  // Lees de potmeter uit
  potMetric = analogRead(A5);

  // Map de potmeter values op de leds
  int value = map(potMetric, 0, 1023, 0, 7);

  // Zet de led's aan op basis van de value
  for (int i = 6; i <= (6 + value); i++) {
    digitalWrite(i, HIGH);
  }

  // Zet de led's uit op basis van de value
  for (int i = (6 + value + 1); i <= 12; i++) {
    digitalWrite(i, LOW);
  }

  delay(50);
}

