/*

Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.

*/
//Variaveis
int numero = 0;

void setup()
{
  Serial.begin(9600);;
}

void loop()
{
  Serial.println ("Digite um numero: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  numero = Serial.parseInt();//resposta do usario 
  
  if (numero % 2 == 0){
    Serial.println("Numero digitado eh par");
  } else {
    Serial.println("Numero nao encontrado"); 
  }
}