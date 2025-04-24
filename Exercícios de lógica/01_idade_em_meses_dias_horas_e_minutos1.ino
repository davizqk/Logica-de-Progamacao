//Faça um programa que receba a idade de uma pessoa em anos e 
//imprima essa idade em: Meses, Dias, Horas, Minutos. 

void setup()
{
  Serial.begin(9600);
}

//Variáveis - criação e inicialização
int idade = 0;
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;

void loop()
{
  //cabeçalho
  Serial.println ("|------------------------------|");//primeira linha
  Serial.println ("|                              |");//segunda linha
  Serial.println ("|        LOPAL - EX_01         |");//terceira linha
  Serial.println ("|                              |");//quarta linha
  Serial.println ("|------------------------------|");//quinta linha
  
  //entrada
  Serial.println ("Digite sua idade");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  idade = Serial.parseInt();//resposta do usario
  
  //processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idadeDias * 24;
  idadeMinutos = idadeHoras * 60;
  
  //saida
  Serial.println("Sua idade em meses: " + String(idadeMeses) );
  Serial.println("Sua idade em dias: " + String(idadeDias) );
  Serial.println("Sua idade em horas: " + String(idadeHoras) );
  Serial.println("Sua idade em minutos: " + String(idadeMinutos) );
  
}