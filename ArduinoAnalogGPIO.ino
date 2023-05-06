const int relayPin = 15; // A1 is digital pin 15

void setup() {
  pinMode(relayPin, OUTPUT); // Set the relayPin (A1) as an output
}

void loop() {
  digitalWrite(relayPin, HIGH); // Turn the relay on
  delay(1000);                  // Wait for 1 second
  digitalWrite(relayPin, LOW);  // Turn the relay off
  delay(1000);                  // Wait for 1 second
}
