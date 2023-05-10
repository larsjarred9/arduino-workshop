void setup() {
  // Zet de serial output aan
  Serial.begin(9600);
  pinMode(A5, INPUT);
}

void loop() {
  // Lees de LM35 sensor uit
  int sensor = analogRead(A5);

  // Zet de LM35 meting om naar voltage naar celcius
  float temperature = (sensor/1023) * 500;
  

  // Print de temperatuur
  Serial.print("Temperatuur in Celcius: ");
  Serial.print(temperature);

  // Wacht 2.5 seconden met doorgaan
  delay(2500);
}
