int sensor = A1; // Pino analógico em que o sensor
está conectado
void setup(){
Serial.begin(9600);
}
void loop(){
// Lendo o valor do sensor.
int valorSensor = analogRead(sensor);
// Exibindo o valor do sensor no serial monitor.
Serial.println(valorSensor);
delay(500);
}
