int pulsador = 22;      //Pin donde se encuentra el pulsador, entrada
int pulsador_1 = 22;      //Pin donde se encuentra el pulsador, entrada
int pulsador_2 = 23;      //Pin donde se encuentra el pulsador, entrada
int pulsador_3 = 24;      //Pin donde se encuentra el pulsador, entrada
int pulsador_4 = 25;      //Pin donde se encuentra el pulsador, entrada
int led = 21;          //Pin donde se encuentra el LED, salida
int led_1 = 21;          //Pin donde se encuentra el LED, salida
int led_2 = 20;          //Pin donde se encuentra el LED, salida
int led_3 = 19;          //Pin donde se encuentra el LED, salida
int led_4 = 18;          //Pin donde se encuentra el LED, salida
void setup() {
  // put your setup code here, to run once:
  pinMode( 21, OUTPUT) ;
  pinMode( 20, OUTPUT) ;
  pinMode( 19, OUTPUT) ;
  pinMode( 18, OUTPUT) ;
  pinMode( 22, INPUT) ;
  pinMode( 23, INPUT) ;
  pinMode( 24, INPUT) ;
  pinMode( 25, INPUT) ;
  //DDRD = 0XFF;
  //DDRA = 0X00; // Puerto A como entrada
}

void loop() {
  //PORTD = PINA;
  /*
if (digitalRead(pulsador_1) == HIGH)
    {
     //Pulsador oprimido
     digitalWrite(led_1, HIGH); //Enciende el LED
    }
    else
    {
     //Pulsador NO oprimido
     digitalWrite(led_1, LOW); //Apaga el LED
    }
    if (digitalRead(pulsador_2) == HIGH)
    {
     //Pulsador oprimido
     digitalWrite(led_2, HIGH); //Enciende el LED
    }
    else
    {
     //Pulsador NO oprimido
     digitalWrite(led_2, LOW); //Apaga el LED
    }
    if (digitalRead(pulsador_3) == HIGH)
    {
     //Pulsador oprimido
     digitalWrite(led_3, HIGH); //Enciende el LED
    }
    else
    {
     //Pulsador NO oprimido
     digitalWrite(led_3, LOW); //Apaga el LED
    }
    if (digitalRead(pulsador_4) == HIGH)
    {
     //Pulsador oprimido
     digitalWrite(led_4, HIGH); //Enciende el LED
    }
    else
    {
     //Pulsador NO oprimido
     digitalWrite(led_4, LOW); //Apaga el LED
    }
    */

  for ( int i = 0 ; i <= 3 ; i++) // Definimos la variable i sobre la marcha
  {
    if (digitalRead(pulsador + i) == HIGH) {
      digitalWrite(led - i, HIGH);
    } else {
      digitalWrite(led - i, LOW);
    }
  }

}
