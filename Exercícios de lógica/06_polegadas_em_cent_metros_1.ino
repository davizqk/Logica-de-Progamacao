// Faça um programa que receba a medida em polegadas e exiba esse número em  centímetros. 

void setup()
{
  Serial.begin(9600);
}

float polegadas = 0;
float centimetros =0;

void loop()
{
  //cabeçalho
  Serial.println ("|------------------------------|");//primeira linha
  Serial.println ("|                              |");//segunda linha
  Serial.println ("|        LOPAL - EX_06         |");//terceira linha
  Serial.println ("|                              |");//quarta linha
  Serial.println ("|------------------------------|");//quinta linha
  
  //entrada
  Serial.println ("Digite as polegadas: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  polegadas = Serial.parseInt();//resposta do usario
  
  //processamneto
  centimetros = polegadas * 2.54;
  
  //saida
  Serial.println ("O valor em centimetros eh: " + String(centimetros) );
  Serial.println ();
  delay(2000);
  
}