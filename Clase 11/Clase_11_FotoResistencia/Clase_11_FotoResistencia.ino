// This code is for the Photo resistor Module.

int sensorPin = A0 ;
int ledPin = 13 ;
int sensorValue = 0 ;
String mensaje= " ";
void setup ( ) {
  pinMode ( ledPin , OUTPUT ) ;
  Serial.begin ( 9600 ) ;
}

void loop ( )  {
  sensorValue = analogRead (sensorPin) ;
  if ( sensorValue < 512) {
    digitalWrite ( ledPin , LOW ) ;
    mensaje = "El valor del LDR es: ";
    Serial.println(mensaje + sensorValue);
    delay ( 1000 ) ;
  } else {
    digitalWrite ( ledPin , HIGH ) ;
    mensaje = "El valor del LDR es: ";
    Serial.println(mensaje + sensorValue);
    delay ( 1000 ) ;
  }

}
