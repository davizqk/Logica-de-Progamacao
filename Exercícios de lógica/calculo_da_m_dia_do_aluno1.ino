/*

Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIoR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!

*/
//Variáveis
int n1, n2, n3, n4, media, semana1, semana2, frequencia;

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
  
  Serial.println ("Digite a frequencia da primeira semana: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  semana1 = Serial.parseInt();//resposta do usario
  
  Serial.println ("Digite a frequencia da segunda semana: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  semana2 = Serial.parseInt();//resposta do usario
  
  media = (n1 + n2 + n3 + n4) / 4;
  frequencia = (semana1 + semana2) / 2;
  Serial.println();
  
  if (media == 10 && frequencia == 100){
    Serial.print("Sua frequencia foi: " + String(frequencia) );
    Serial.println("%");
    Serial.println("Sua media foi: " + String(media) );
    Serial.println("Voce foi aprovado!");
    Serial.println("Parabens!! nota e frequencia MAXIMA!!!");
  } else if (media >= 6 && frequencia >= 75){
    Serial.print("Sua frequencia foi: " + String(frequencia) );
    Serial.println("%");
    Serial.println("Sua media foi: " + String(media) );
    Serial.println("Voce foi aprovado!");
  } else if (media < 6 && frequencia >= 75){
    Serial.print("Sua frequencia foi: " + String(frequencia) );
    Serial.println("%");
    Serial.println("Sua media foi: " + String(media) );
    Serial.println("Voce foi reprovado por sua nota baixa!");
  } else if (media >= 6 && frequencia < 75){
    Serial.print("Sua frequencia foi: " + String(frequencia) );
    Serial.println("%");
    Serial.println("Sua media foi: " + String(media) );
    Serial.println("Voce foi reprovado por sua frequencia baixa!");
  } else if (media < 6 && frequencia < 75){
    Serial.print("Sua frequencia foi: " + String(frequencia) );
    Serial.println("%");
    Serial.println("Sua media foi: " + String(media) );
    Serial.println("Voce foi reprovado por sua nota e frequencia baixa!");
  
  Serial.println();
}