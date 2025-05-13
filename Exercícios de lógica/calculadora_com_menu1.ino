/*

Calculadora com menu

*/
//Variáveis

float numero1 = 0.0;
float numero2 = 0.0;
float soma, subtracao, multiplicacao, divisao;
int escolhaDaOperacao;
int contador = 0;


void setup()
{
  Serial.begin(9600);



  do{
    Serial.println ("Bem-vindo(a) a calculadora dos 00's!!!☺ ");//pergunta 
    Serial.println("-----------------------------------------");
    Serial.println();
    Serial.println("Escolha uma das opcoes/operacoes a seguir: ");
    Serial.println("-----------------------------------------");
    Serial.println();
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Dividir");
    while(! Serial.available() );//espera o usuario digitar e precionar <Enter>
    escolhaDaOperacao = Serial.parseInt();//Armazena o que o usuário digitou na variável
    Serial.println();

    Serial.println("Ei 00! Para iniciar a operacao digite o 1º numero: ");
    while(! Serial.available() );//espera o usuario digitar e precionar <Enter>
    numero1 = Serial.parseFloat();//resposta do usario
    Serial.println();
    Serial.println("--------------------------------------");
    Serial.println();

    Serial.println("Boa 00! Agora digite o 2º numero: ");
    while(! Serial.available() );//espera o usuario digitar e precionar <Enter>
    numero2 = Serial.parseFloat();//resposta do usario
    Serial.println();
    Serial.println("--------------------------------------");
    Serial.println();

    if(escolhaDaOperacao == 1){
      soma = numero1 + numero2;
      Serial.println("CARAMBA 00! O resultado da sua soma foi: " + String(soma));
      Serial.println("--------------------------------------");
      Serial.println();
    } else if(escolhaDaOperacao == 2){
      subtracao = numero1 - numero2;
      Serial.println("CARAMBA 00! O resultado da sua subtracao foi: " + String(subtracao));
      Serial.println("--------------------------------------");
      Serial.println();
    } else if(escolhaDaOperacao == 3){
      multiplicacao = numero1 * numero2;
      Serial.println("CARAMBA 00! O resultado da sua multiplicacao foi: " + String(multiplicacao));
      Serial.println("--------------------------------------");
      Serial.println();
    } else if(escolhaDaOperacao == 4){
      divisao = numero1 / numero2;
      Serial.println("CARAMBA 00! O resultado da sua divisao foi: " + String(divisao));
      Serial.println("--------------------------------------");
      Serial.println();
    } 
    
    Serial.println("Eai 00, deseja continuar operando?? se sim, digite [sim], se nao digite [nao]");
    while(! Serial.available() );
    
    
    if(Serial.readString() == "sim"){
      contador++;
      Serial.println();
    }
    else{
      contador = 0;
      Serial.println("Fecho 00, obrigado por usar a calculadora, ate mais!! ");
      Serial.println("--------------------------------------");
      Serial.println("00, quando quiser usar novamente, reinicie o sistema!");
      Serial.println();
    }

  } 
  while(contador != 0);

  delay(2000);
  
}

void loop()
{
  //sem código
}