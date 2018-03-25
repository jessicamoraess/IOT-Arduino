int inPin = 8; //entrada digital na porta 8
int val = 0;
void setup() {
  Serial.begin(9600);
  pinMode(inPin, INPUT_PULLUP); // porta 8 vira entrada
}
void loop() {
  val = digitalRead(inPin); // read the input pin
  Serial.println(val);
  delay(2000);
}
