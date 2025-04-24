//Faça um programa que receba o nome, o peso e a altura de uma 
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso / (altura * altura).
// Variáveis

void setup()
{
  Serial.begin(9600); // Inicia a comunicação serial
}

String nome = "";
float peso = 0;
float altura = 0;
float imc = 0;

void loop()
{
  // Entrada
  Serial.println("Digite seu nome:");
  while (!Serial.available()) {}      
  nome = Serial.readStringUntil('\n'); 
  nome.trim();                         
  delay(500);

  Serial.println("Digite seu peso em kg (ex: 70.5):");
  while (!Serial.available()) {}
  peso = Serial.parseFloat();          
  delay(500);

  Serial.println("Digite sua altura em metros (ex: 1.75):");
  while (!Serial.available()) {}
  altura = Serial.parseFloat();        
  delay(500);

  // Processamento
  imc = peso / (altura * altura);      

  // Saída
  
  Serial.print("Nome: ");
  Serial.println(nome);
  Serial.print("IMC: ");
  Serial.println(imc, 2);              

  delay(3000); 
}