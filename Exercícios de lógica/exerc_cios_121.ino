/*

Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.

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
    Serial.println("Numero digitado eh impar"); 
  }
}