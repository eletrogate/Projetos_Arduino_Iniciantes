void setup() {
  Serial.begin(115200); //inicializa a comunicação serial
}

void loop() {
  Serial.println(analogRead(A1)); //imprime a leitura analogica
  delay(500);
}
