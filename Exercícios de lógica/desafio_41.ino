// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int contador = 1; contador <= 99; contador += 2){
  Serial.println("Contando " + String(contador));
  }delay(2000);
}