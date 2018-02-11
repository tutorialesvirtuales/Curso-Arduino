int Sensor = 3;
int LED = 13;
bool flag = true;
void setup ()
{
  Serial.begin(9600);
  pinMode (Sensor, INPUT);
  pinMode (LED, OUTPUT);
}

void loop ()
{
  bool val = digitalRead (Sensor) ;

  if (val == HIGH) {
    if (flag) {
      Serial.println("LineTracker en linea");
      flag = false;
    }
    digitalWrite(LED, LOW);
  }
  else {
    if(!flag){
    Serial.println("Linetracker fuera de linea");
    flag = true;
    }
    digitalWrite(LED, HIGH);
  }
  delay(500);
}

