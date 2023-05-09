int state = false; // Button status variable
int count = 0; // Aan of uit

void setup() {
  pinMode(4, INPUT); // Defineer btn
  pinMode(11, OUTPUT); // Defineer led pin
}

void loop() {
  int button = digitalRead(4); // Lees btn uit


  if(button == HIGH) { // Als btn ingedrukt is
    if(state == false) { // Check of button momenteel niet ingedrukt is


      if(count == 0) { // Als led uit staat (zet naar aan)
          count = 1;
          digitalWrite(11, HIGH);

        }
        else { // Als led aan staan (zet naar uit)
          count = 0;
          digitalWrite(11, LOW);
        }
      }
      
      state = true; // Zet state op true
      delay(50);
    }

    if(state == true) { // Check of de button ingedrukt was
      if(button == LOW) { // Als btn niet langer ingedrukt is
        state = false;
        delay(50);
      }
    }

}

