/*

Código de origem            Procedência
1                            Sul
2                            Norte
3                            Leste
4                            Oeste
5 ou 6                       Nordeste
7, 8 ou 9                    Sudeste
10 até 20                    Centro-Oeste
acima de 20                  Código ainda sem definição

*/
//Variáveis
int codigo = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println ("Digite o codigo de origem do produto: ");//pergunta 
  while(! Serial.available() );//espera o usuario digitar/dar um <Enter>
  codigo = Serial.parseInt();//resposta do usario 
  
  if (codigo == 1){
   Serial.println ("A procedencia desse produto eh do Sul " );
  } else if (codigo == 2){
   Serial.println ("A procedencia desse produto eh do Norte " );
  } else if (codigo == 3){
   Serial.println ("A procedencia desse produto eh do Leste " );
  } else if (codigo == 4){
   Serial.println ("A procedencia desse produto eh do Oeste " );
  } else if (codigo == 5 || codigo == 6){
   Serial.println ("A procedencia desse produto eh do Nordeste " );
  } else if (codigo == 7 || codigo == 8 || codigo == 9){
   Serial.println ("A procedencia desse produto eh do Sudeste " );
  } else if (codigo == 10 && codigo < 20){
   Serial.println ("A procedencia desse produto eh do Centro-Oeste " );
  } else {
    Serial.println("Codigo ainda sem definicao");
  }
  delay(2000);
}