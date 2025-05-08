/*

Faça um programa que receba 4 notas de um aluno, calcule e imprima a média
aritmética das notas e a mensagem de APROVADO para média superior ou igual a
7,0 RECUPERAÇÃO para notas entre 5.0 e 7,0 ou a mensagem de REPROVADO
para média inferior a 5,0.

*/ 
//Variaveis
int n1, n2, n3, n4, media;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println ("Digite a primeira nota: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  n1 = Serial.parseInt();//resposta do usario
  
  Serial.println ("Digite a segunda nota: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  n2 = Serial.parseInt();//resposta do usario
  
  Serial.println ("Digite a terceira nota: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  n3 = Serial.parseInt();//resposta do usario
  
  Serial.println ("Digite a quarta nota: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  n4 = Serial.parseInt();//resposta do usario
  
  media = (n1 + n2 + n3 + n4) /4;
  
  Serial.println();
  
    if (media >= 7){
    Serial.println ("A media do aluno eh: " + String (media) );
    Serial.println ("O aluno foi APROVADO!!!");
  } else if (media >= 5 && media < 7){
    Serial.println ("A media do aluno eh: " + String (media) );
    Serial.println ("O aluno esta de RECUPERACAO!!");   
  } else if (media < 5){
    Serial.println ("A media do aluno eh: " + String (media) );
    Serial.println ("O aluno esta REPORVADO!");
  }
  Serial.println();
  
  delay(2000);
}