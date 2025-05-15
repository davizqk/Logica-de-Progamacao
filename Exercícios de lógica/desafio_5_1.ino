// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int contador = 60; contador <= 80; contador += 2){
  Serial.println("Contando numeros pares: " + String(contador));
  }delay(2000);
  
  for(int contador2 = 81; contador2 <= 101; contador2 += 2){
  Serial.println("Contando numeros impares: " + String(contador2));
  }delay(2000);
}