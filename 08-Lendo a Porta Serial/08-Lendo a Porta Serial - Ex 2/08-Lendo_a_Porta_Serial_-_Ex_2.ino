const int LED = 3;
char nextChar = 0;
String valor;
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    // lê o byte disponível na porta serial
    nextChar = Serial.read();
    if (nextChar == 'B') {
      //Lê o próximo inteiro vindo da serial
      int valor = Serial.parseInt();
      //Atenção: em caso de erro o valor lido será 0
      analogWrite(LED, valor);
      Serial.println(String("Potencia do LED: ") +
                     valor);
    }
  }
}
