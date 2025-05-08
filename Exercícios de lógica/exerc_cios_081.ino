/*

Faça um programa que receba o nome, cargo e salário de um funcionário. 
Se o  funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.  
Ao final exiba o nome, o cargo e o salário desse funcionário. 

*/
//Variáveis

void setup()
{
  Serial.begin(9600);
}

String nome = "";
String cargo = "";
float salario = 0;
float acrescido = 0;

void loop()
{
  //entrada
  Serial.println ("Digite seu nome: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  nome = Serial.readStringUntil('\n');//resposta de nome do usuario
  nome.trim();
  
  Serial.println ("Digite seu cargo: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  cargo = Serial.readStringUntil('\n');//resposta de nome do usuario
  cargo.trim();
  
  Serial.println ("Digite seu salario: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  salario = Serial.parseInt();//resposta do usario
  
  //acrescido
  acrescido = salario * 0.10;
  
  if(salario <1000){
    salario = salario + acrescido;
  } else {
    salario = salario;
  }
  
  //saida - formatada
  Serial.println("Relatorio:");
  Serial.println();
  Serial.println("---------------------------");
  Serial.println();
  Serial.print ("nome: ");
  Serial.println (nome);
  Serial.print ("cargo: ");
  Serial.println (cargo);
  Serial.println ("Seu salario atual sera: " + String(salario) );
  Serial.println ();
  Serial.println("---------------------------");
  
  Serial.println("Digite uma letra + <Enter> para continuar...");//gambi para fazer o programa parar
  while (! Serial.available());
  Serial.println ();
  Serial.println ();
  Serial.read ();//limpa o cache do /n - o <Enter>
  
}