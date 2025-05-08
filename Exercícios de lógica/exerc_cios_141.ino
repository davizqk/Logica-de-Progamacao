/*

Faça um programa receba dois valores e imprima qual é o maior número
digitado.

*/ 
//Variaveis
int numero1 = 0;
int numero2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println ("Digite o primerio numero: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  numero1 = Serial.parseInt();//resposta do usario
  
  Serial.println ("Digite o segundo numero: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  numero2 = Serial.parseInt();//resposta do usario
  
  if (numero1 > numero2){
    Serial.println ("O maior numero eh: " + String(numero1) );
  } else {
    Serial.println ("O maior numero eh: " + String(numero2) );
  }
}