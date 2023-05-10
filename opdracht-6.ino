const int roodPin = A3;
const int groenPin = A4;
const int blauwPin = A5;


void setup()
{
  pinMode(roodPin, INPUT); // Rood
  pinMode(groenPin, INPUT); // Groen
  pinMode(blauwPin, INPUT); // Blauw
}

void loop() {
  // 3 for loops om door alle kleuren heen te gaan
  for(int rood = 0; rood < 256; rood++) {
    for(int groen = 0; groen < 256; groen++) {
      for(int blauw = 0; blauw < 256; blauw++) {
        analogWrite(roodPin, rood);
        analogWrite(groenPin, groen);
        analogWrite(blauwPin, blauw);
        delay(5);  // 0.005 seconden delay (want er zijn 16581375 combinaties mogenlijk)
      }
    }
  }
}
