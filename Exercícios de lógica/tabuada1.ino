// Variaveis
int n1 = 0;
int res;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println ("Digite a tabuada desejada: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  n1 = Serial.parseInt();//resposta do usario
  Serial.read(); // limpa o buffer
  
  
  for(int contador = 0; contador <= 10; contador++){
    res = (n1 * contador);
    Serial.println(String(n1) + " x " + String(contador) + "= " + String(res));
  } 
  delay (1200);
  Serial.println();
}