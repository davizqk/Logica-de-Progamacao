/*

Uma empresa decide dar aumento de 30% aos funcionários cujo salário é  inferior a 500 reais. 
Escreva um programa que receba o salário de um  funcionário e imprima o valor do salário reajustado 
ou uma mensagem caso o  funcionário não tenha direito a aumento.

*/
//Variáveis
float salario = 0;
float acrescido = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println ("Digite seu salario: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  salario = Serial.parseInt();//resposta do usario
  
  //acrescido
  acrescido = salario * 0.30;
    
  if(salario <500){
    salario = salario + acrescido;
    Serial.println("Seu salario novo eh: " + String(salario) );
  } else {
    salario = salario;
    Serial.println("Seu salario nao teve alteracao");
   }
  Serial.println ();
  delay(2000);     
}