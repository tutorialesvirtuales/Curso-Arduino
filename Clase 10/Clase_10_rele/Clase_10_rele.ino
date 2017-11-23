//Pin a utilizar
int Rele = 2;
 
void setup() {
  pinMode(Rele, OUTPUT); //modo salida
}
 
void loop() {
  digitalWrite(Rele, HIGH);   // Enciende el pin 6
  delay(2000);                   // Espera medio segundo
  digitalWrite(Rele, LOW);   // Apaga el pin 6
  delay(2000);                   // Espera medio segundo
}
