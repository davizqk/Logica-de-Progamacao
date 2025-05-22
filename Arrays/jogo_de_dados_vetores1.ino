//Variáveis Globais


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
  
}

void loop()
{
  cabecalho();//chama a função

  Serial.println("Quantas vezes voce quer jogar? ");
  while(! Serial.available () ){}
  int rodadas = Serial.parseInt();
  Serial.println();
  
  //Criar os vetores de estatísticas para o relatório final
  //os Vetores do tamanho da quantidade de rodadas
  int vetPalpites[rodadas];//tamanho do vetor? R: Depende de quantas vezes vai rodar
  int vetResultados[rodadas];//mesmo tamanho
  
  //processamento do jogo
  for(int r = 0; r < rodadas; r++){//aqui dentro, o jogo todo!!!

    //Solicita o palpite dp usuário
    Serial.println();
    Serial.println("Digite um numero de 1 a 6: ");
    while(! Serial.available () ){}//solicita um número para o usuário e aguarda o próprio dar <Enter>
    int numeroSolicitado = Serial.parseInt();//guarda o palpite
    
    int numeroSorteado = random(1, 7); //sorteia um número randomico/aleatório de 1 até 7 - 1, ou seja, 6

    Serial.println("Seu palpite: " + String(numeroSolicitado));
    
    //guardar os dados para estatísticas
    vetPalpites[r] = numeroSolicitado;
    vetResultados[r] = numeroSorteado;

    pontilhado();//chama a função

    Serial.println();//pula linha

    //jogar dado
    
    Serial.println("Numero sorteado: " + String(numeroSorteado));

    if (numeroSolicitado == numeroSorteado){
      Serial.println("Parabens, voce acertou!!");
    } else {
      Serial.println("Que pena, voce errou, tente outra vez!");
    }
    

  }//fim do for da rodada
  
  Serial.println();
  Serial.println("_________________________________________");
  Serial.println("Estatisticas: ");
  Serial.println();

  for(int i = 0; i < rodadas; i++){
    Serial.println("Rodada " + String(i + 1) + ":" );
    Serial.println("Palpite: " + String(vetPalpites[i]));
    Serial.println("Dado: " + String(vetResultados[i]));
    Serial.println("Resultado: " + String(vetResultados[i] == vetPalpites[i] ? "Acertou!" : "Errou burro! kkkkk"));
    Serial.println("_________________________________________");
    Serial.println();
  }//fim do for que exibe o relatório final
  
  Serial.println("GAME OVER, REINICIANDO O SISTEMA!!!");
  pontilhado2();//chama a função
  Serial.println();//pula linha

  delay(4000);//espera 4 segundos

}//fim do loop 
