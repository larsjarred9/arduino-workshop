void setup() {
  // Defineer pins
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // Roep blinkLight functie aan met een delay van 1 seconden
  blinkLight(1000);
}


void blinkLight(int del) {
  // Zet pin 12 to HIGH en pin 11 to LOW
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(del);
  
  // Zet pin 12 to LOW en pin 11 to HIGH
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(del);
}
