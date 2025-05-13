/*

Calculadora com menu

*/
//Variáveis


float resultado;
float soma, subtracao, multiplicacao, divisao;
int escolhaDaOperacao;
int contador = 0;

float somar(float numero1, float numero2, float numero3 = 10){
  
  return (numero1 + numero2 + numero3);
}

float subtrair(float numero1, float numero2, float numero3 = 10){
  
  return (numero1 - numero2 - numero3);
}

float multiplicar(float numero1, float numero2, float numero3 = 10){
  
  return (numero1 * numero2 * numero3);
}

float dividir(float numero1, float numero2, float numero3 = 10){
  
  return (numero1 / numero2 / numero3);
}


void setup()
{
  Serial.begin(9600);
  float numero1 = 0.0;
  float numero2 = 0.0;


  do{
    
    Serial.println ("Bem-vindo(a) a calculadora dos 00's!!! ");//pergunta 
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

    Serial.println("Ei 00! Para iniciar a operacao digite o 1o numero: ");
    while(! Serial.available() );//espera o usuario digitar e precionar <Enter>
    numero1 = Serial.parseFloat();//resposta do usario
    Serial.println();
    Serial.println("--------------------------------------");
    Serial.println();

    Serial.println("Boa 00! Agora digite o 2o numero: ");
    while(! Serial.available() );//espera o usuario digitar e precionar <Enter>
    numero2 = Serial.parseFloat();//resposta do usario
    Serial.println();
    Serial.println("--------------------------------------");
    Serial.println(); 
    
    switch(escolhaDaOperacao){
      case 1:
      resultado = somar(numero1, numero2);
      Serial.println("CARAMBA 00! O resultado da sua soma foi: " + String(resultado));
      Serial.println("--------------------------------------");
      Serial.println();
      break;

      case 2: 
      resultado = subtrair(numero1, numero2);
      Serial.println("CARAMBA 00! O resultado da sua subtracao foi: " + String(resultado));
      Serial.println("--------------------------------------");
      Serial.println();
      break;

      case 3:
      resultado = multiplicar(numero1, numero2);
      Serial.println("CARAMBA 00! O resultado da sua multiplicacao foi: " + String(resultado));
      Serial.println("--------------------------------------");
      Serial.println();
      break;

      case 4:
      resultado = dividir(numero1, numero2);
      Serial.println("CARAMBA 00! O resultado da sua divisao foi: " + String(resultado));
      Serial.println("--------------------------------------");
      Serial.println();
      break;

      default:
      Serial.println("Opcao invalida");
    }

    Serial.println("Eai 00, deseja continuar operando?? se sim, digite [Sim], se nao digite [Nao]");
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