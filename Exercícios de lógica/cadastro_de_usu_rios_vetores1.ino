String convidados[4];
String emailConvidados[4];//Camel Case
int idadeConvidados[4];

//Fuções
void desenhaCabecalho()
{
  Serial.println();
  Serial.println("---------------------------------------------------------------");
  Serial.println ("Fala meu mano! voce foi convidado pro churrascao dos crias!!! ");//pergunta 
  Serial.println();
  Serial.println();
  Serial.println("---------------------------------------------------------------");
  Serial.println();
}


void setup()
{
  Serial.begin(9600);//inicia a comunicação serial
}

void loop()
{
  //fazer um cabeçalho bonitinho para o programa
  desenhaCabecalho();//chama a função para desenhar o cabeçalho
  
  //cadastrar os dados
  for(int i = 0; i < 4; i++){
    //solocitar o nome do usuário
    Serial.println("informe " + String(i + 1) + "o nome para o cadastro: ");
    while(! Serial.available () ){}
    convidados[i] = Serial.readString();
    
    //solicitar a idade 
    Serial.println("informe a idade de " + convidados[i] + ":");
    while(! Serial.available () ){}
    idadeConvidados[i] = Serial.parseInt();
    
    //solicitar o email
    Serial.println("informe o email de " + convidados[i] + ":");
    while(! Serial.available () ){}
    emailConvidados[i] = Serial.readString();
    Serial.println();
    
  }//fim do for
  
  //exibir a lista de convidados
  //obs: só vai na festa quem for maior de idade >= 18
  
  Serial.println();
  Serial.println("-----------------------------------------");
  Serial.println("Lista de convidados: ");
  Serial.println();

  for(int i = 0; i < 4; i++)
  {
      Serial.println("Nome: " + convidados[i]);
      Serial.println("Idade: " + String(idadeConvidados[i]));
      Serial.println("Email: " + String(emailConvidados[i]));
      
    
    Serial.println("Permissao para ir a festa: " + String(idadeConvidados[i] >= 18 ? "Pode entrar" : "Nao pode pois eh de menor"));
    
    Serial.println("-----------------------------------------");
    
  }//fim do for
  
  
  
  delay(2000);
  
}//fim do loop