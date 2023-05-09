const int pins[] = {12, 11, 10, 9, 8, 7, 6};
const int pins2[] = {6, 7, 8, 9, 10, 11, 12};

void setup() {
  // Defineer pins
  for(int pin : pins) {
    pinMode(pin, OUTPUT);
  }
  
}

void loop() {
  // Roep blinkLights aan
  blinkLights(250, 150);
}

// Blinklights functie
void blinkLights(int on, int off) {
  // Loop door de pins heen
  for(int pin : pins) {
    digitalWrite(pin, HIGH);
    delay(on);
    digitalWrite(pin, LOW);
    delay(off);
  }

  // Loop door de pins heen
  for(int pin : pins2) {
    digitalWrite(pin, HIGH);
    delay(on);
    digitalWrite(pin, LOW);
    delay(off);
  }
}
