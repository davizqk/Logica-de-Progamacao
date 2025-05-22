//Variáveis
//vetor tamanho 6: vai de 0 até 5
String frutas [6];//cria um vetor tamanho 6 (preenchendo as posições)
float precosFrutas [6];

void setup()
{
  Serial.begin(9600);

  Serial.println("*** SACOLAO DO WALYZAO ***");
  Serial.println();
  Serial.println("Oh WALYZAO, bora cadastrar as frutas!");

  Serial.println();

  for(int i = 0; i <= 5; i++){
    //pega a fruta do usuário
    Serial.println("Informe a " + String(i + 1) + "a Fruta:" );
    while(! Serial.available() ){}
    String fruta = Serial.readString();

    //pega o preço da fruta
    Serial.println("Qual o preco de: " + fruta + "?");
    while(! Serial.available() ){}
    float precoDigitado = Serial.parseFloat();

    //põe a fruta na sacola / cadastra a fruta no array/vetor
    frutas[i] = fruta;//guarda a resposta do usuário
    precosFrutas[i] = precoDigitado;

  }//fim do for

  Serial.println();
  Serial.println("-----------------------------------------");
  Serial.println("Exibindo os valores cadastrados: ");
  Serial.println();

  //imprime os valores do array/vetor
  for(int i = 0; i <= 5; i++){
    Serial.println(String(i + 1) + "a Fruta: " + frutas[i]);
    Serial.println("Preco da Fruta: " + String(precosFrutas[i]) + " R$");
    Serial.println("-----------------------------------------");
  }

}//fim do setup

void loop()
{

}