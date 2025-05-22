//Variãveis Globais
int ledInterno = 13;
int ledInterno2 = 12;

void setup()
{
  pinMode(ledInterno, OUTPUT);
  pinMode(ledInterno2, OUTPUT);
}

void loop()
{
  digitalWrite(ledInterno, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledInterno, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledInterno2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledInterno2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}