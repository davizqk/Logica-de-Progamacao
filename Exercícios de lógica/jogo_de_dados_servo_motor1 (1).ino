//Variáveis Globais
int ledsAzuis[3] = {4, 3, 2};
int acertos;
int ledVerde = 9;
int ledVermelho = 8;
bool ledAceso[3] = {false, false, false};

#include <Servo.h>
Servo meuServo;//Cria um objeto/variável do motor servo

void cabecalho()
{
  Serial.println();
  Serial.println("----------------------------------------------------------------");
  Serial.println ("|                Fala meu mano! esta comecando                 |");//pergunta 
  Serial.println("|                               o                              |");
  Serial.println("|                  --Programa Jogo De Dados--                  |");
  Serial.println("----------------------------------------------------------------");
  Serial.println();
}//fim do cabecalho

void pontilhado()
{
  Serial.print("Jogando o dado");
  for( int ponto = 0; ponto <= 3; ponto++){
    Serial.print(".");
    delay(700);
  }//fim do for

}//fim do pontilhado

void pontilhado2()
{
  Serial.print("Reiniciando o jogo ");
  for( int ponto = 0; ponto <= 3; ponto++){
    Serial.print(".");
    delay(700);
  }//fim do for

}//fim do pontilhado

void setup()
{
  Serial.begin(9600);//configura o monitor
  
  meuServo.attach(12);////configura o motor na porta 13
  meuServo.attach(0);//configura o motor na posição inicial em 0 graus
}

void loop()
{
  cabecalho();//chama a função

  Serial.println("Digite um numero de 1 a 6: ");
  while(! Serial.available () ){}//solicita um número para o usuário e aguarda o próprio dar <Enter>
  int numeroSolicitado = Serial.parseInt();

  Serial.println("Seu palpite: " + String(numeroSolicitado));

  pontilhado();//chama a função

  Serial.println();//pula linha

  //jogar dado
  int numeroSorteado = random(1, 7); //sorteia um número randomico/aleatório de 1 até 7 - 1, ou seja, 67
  Serial.println("Numero sorteado: " + String(numeroSorteado));


  if (numeroSolicitado == numeroSorteado){
    Serial.println("Boa meu mano, voce acertou!!");
    digitalWrite(ledVerde, HIGH);
    delay(1000);
    digitalWrite(ledVerde, LOW);
    delay(700);

  } 
  if (acertos < 3) {
    digitalWrite(ledsAzuis[acertos], HIGH);
    ledAceso[acertos] = true;
    acertos++;

  } 
  if (acertos == 3) {
    Serial.println("Parabens chefe, voce conseguiu o acesso para o mundo novo!! ");
    
    meuServo.write(0);//move para 0 graus
    delay(1500);//espera 1.5 segundos

    meuServo.write(180);//move para 180 graus
    delay(1500);//espera 1.5 segundos


  } else {
    Serial.println("Que pena, voce errou, tente outra vez!");
    digitalWrite(ledVermelho, HIGH);
    delay(1000);
    digitalWrite(ledVermelho, LOW);
    delay(700);

  } //fim do if




  pontilhado2();//chama a função

  delay(2000);

}//fim do loop 
