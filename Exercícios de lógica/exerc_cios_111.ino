/*

Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.

*/ 
//Variaveis
int numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println ("Digite um numero: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  numero = Serial.parseInt();//resposta do usario 
  
  if (numero > 0){
    Serial.println ("Seu numero eh positivo");
  } else {
    Serial.println ("Seu numero eh negativo");
  }
}