// Pin 13 has an LED connected on most Arduino boards.
int led = 13;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}
// the loop routine runs over and over again forever:
void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(led, HIGH);
  delay(1000); // wait for a second
  // turn the LED off by making the voltage LOW
  digitalWrite(led, LOW);
  delay(1000); // wait for a second
}
