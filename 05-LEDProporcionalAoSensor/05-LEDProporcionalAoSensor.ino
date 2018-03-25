int sensor = 1; //Pino analógico em que o sensor está
conectado
int led = 3; // Pino em que o led está conectado
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  //Lendo o valor do sensor.
  int valorSensor = analogRead(sensor);
  //Exibindo o valor do sensor no serial monitor.
  Serial.println(valorSensor);
  //Acionando o LED: quanto menos luz externa, mais
  forte o LED
  //map(valor,deEscalaAnt,ateEscalaAnt,deNovaEscala,ateNo
  vaEscal)
  analogWrite(led, map(valorSensor, 0, 1023, 255, 0));
  delay(50);
}
