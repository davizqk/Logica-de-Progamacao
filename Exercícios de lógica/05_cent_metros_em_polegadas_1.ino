//Faça um programa que receba a medida em centímetros e exiba esse número em polegadas. OBS: Uma polegada equivale a 2.54 
//centímetros. 

void setup()
{
  Serial.begin(9600);
}

float centimetros = 0;
float polegadas = 0;


void loop()
{
  //entrada
  Serial.println ("Digite os centimetros: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  centimetros = Serial.parseInt();//resposta do usario
  
  
  //processamento
  polegadas = centimetros / 2.54;
  
  //saida
  Serial.println ("o valor em polegadas eh: " + String(polegadas,4) );
  Serial.println();//pula linha 
  delay(2000);
  
}