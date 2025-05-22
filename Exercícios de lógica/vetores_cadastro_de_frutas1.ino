// C++ code
//
void setup()
{
  Serial.begin(9600);

  Serial.println("***SACOLAO DO WALYZAO***");
  Serial.println();
  //vetor tamanho 6: vai de 0 até 5
  String frutas [6];//cria um vetor tamanho 6 (preenchendo as posições)

  Serial.println("Oh WALYZAO, bora cadastrar as frutas!");

  Serial.println();

  for(int i = 0; i <= 5; i++){
    //pega a fruta do usuário
    Serial.println("Informe a " + String(i + 1) + "a Fruta:" );
    while(! Serial.available() ){}
    String fruta = Serial.readString();

    //põe a fruta na sacola / cadastra a fruta no array/vetor
    frutas[i] = fruta;//guarda a resposta do usuário
    
  }//fim do for
  Serial.println();
  
  //imprime os valores do array/vetor
  for(int i = 0; i <= 5; i++){
  Serial.println(String(i + 1) + "a fruta: " + frutas[i]);//imprime o valor atual (variável: i)
  }
  
}//fim do setup

void loop()
{

}