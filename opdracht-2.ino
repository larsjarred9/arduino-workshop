const int pins[] = {12, 11, 10, 9, 8, 7, 6};

void setup() {
  // Defineer pins
  for(int pin : pins) {
    pinMode(pin, OUTPUT);
  }
  
}

void loop() {
  // Roep blinkLight functie op met 0.25 seconden delay en 0.15 seconden delay
  blinkLights(250, 150);
}

void blinkLights(int on, int off) {
  
  // Postitieve loop
  for(int pin : pins) {
    digitalWrite(pin, HIGH);
    delay(on);
    digitalWrite(pin, LOW);
    delay(off);
  }

  // Negatieve loop
  for (int y = 7; y > 0; y--) {
    digitalWrite(pins[y], HIGH);
    delay(on);
    digitalWrite(pins[y], LOW);
    delay(off);
  }
 
}
