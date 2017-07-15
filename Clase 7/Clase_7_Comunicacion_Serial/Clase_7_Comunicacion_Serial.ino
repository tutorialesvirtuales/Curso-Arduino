void setup() {
  Serial.begin(57600);                 // Inicializa el Puerto seria 9600 bits por segundo
}

void loop()
{
  /*String s = "El contador es: " ;
  for (int i = 0; i <= 50; i++) {
    Serial.println(s + String( i )); //ASCII
    delay(500); // 500ms
  }*/
  char c = ' ' ;
    String mensaje = "" ;
    if (Serial.available()) //Comprobamos si hay algo esperando
    {
    while ( c != '\n') //Si lo hay, lo leemos hasta el intro
    {
      mensaje = mensaje + c ; // Añadimos lo leído al mensaje
      c = Serial.read(); //Leer 1 carácter
      delay(10);
    }
    Serial.println( mensaje); //Al salir imprimir el mensaje
    mensaje = "" ; //Bórralo para la próxima vez
    }
}

