// C++ code
//
void setup()
{
  Serial.begin(9600);
}
int numero1 = 0;
int dobroDoNumero = 0;


void loop()
{
  //entradas
  Serial.println ("Digite um numero");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  numero1 = Serial.parseInt();//resposta do usario
  
  //processamento
  dobroDoNumero = numero1 * 2;
  
  //saida
  Serial.println ("o dobro desse numero: " + String(dobroDoNumero) );
}