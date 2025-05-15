// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int contador = 5; contador >= 0; contador--){
  Serial.println("Contando " + String(contador));
  }delay(2000);
}