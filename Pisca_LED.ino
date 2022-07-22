void setup() {
  pinMode(13, OUTPUT);
}
void loop() {
  digitalWrite(13, HIGH);   // Acende o led
  delay(1000);                       // Aguarda um segundo
  digitalWrite(13, LOW);    // Apaga o led
  delay(1000);                       // Aguarda 1 segundo
}
