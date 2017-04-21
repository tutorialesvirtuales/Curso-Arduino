void setup() {
  // put your setup code here, to run once:
  pinMode( 2, OUTPUT) ;
  pinMode( 3, OUTPUT) ;
  pinMode( 4, OUTPUT) ;
  pinMode( 5, OUTPUT) ;
}

void loop() {
  for ( int i = 2 ; i <= 5 ; i++) // Definimos la variable i sobre la marcha
  {
    digitalWrite( i , HIGH) ;
    delay (500) ;
    digitalWrite( i , LOW);
    delay (500) ;
  }
  for ( int i = 4 ; i >= 3 ; i--) // Definimos la variable i sobre la marcha
  {
    digitalWrite( i , HIGH) ;
    delay (500) ;
    digitalWrite( i , LOW);
    delay (500) ;
  }

}
