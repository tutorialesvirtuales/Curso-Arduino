int Led = 13;
int Sensor = 3;
bool val ;
void setup () {
  pinMode (Led, OUTPUT);
  pinMode (Sensor, INPUT);
}
void loop () {
  val = digitalRead (Sensor);
  if (val == HIGH) {
    digitalWrite (Led, HIGH);
  }
  else {
    digitalWrite (Led, LOW);
  }
}
