/*
tipoDeRetorno nomeDaVariavel


*/
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));// inicia e normaliza a porta randomica para evitar o mesmo valor
}


void desenhaCabecalho()
{

  Serial.println(" ");
  Serial.println(" ");
  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println(" ");//pula linha
  Serial.println(" ");

}//fim da funcao


String devolveTexto(){

  String texto = "Uma linha de texto \n";
  texto += "Mais uma linha de texto \n";
  texto += "Terceira linha de texto \n";
  return texto;
}

void loop()
{
  // String meuTexto = devolveTexto();//captura o retorno da funcao com as 3 linhas de texto
  //Serial.println(meuTexto);//exibe a variavel com o texto retornado da funcao



  desenhaCabecalho();

  Serial.println("Quantas vezes voce quer jogar? \n");
  while(! Serial.available());
  int qtdRodadas = Serial.parseInt();//quantas vezes o usuario quer jogar

  int vetPalpites[qtdRodadas];//tamanho do vetor é o tamanho da quantidade de rodadas
  int vetResultado[qtdRodadas];//mesmo tamanho

  for(int r = 0; r < qtdRodadas; r++)
  {

    //pedir o palpite do usuario
    Serial.println("Digite um palpite de 1 a 6 \n");
    while(! Serial.available());
    int palpite = Serial.parseInt(); 


    //sortear o dado
    int numeroSorteado = random(1, 7); //gera um numero aleatorio entre 1 e 6


    //mostrar resultado
    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero do dado: " + String(numeroSorteado));


    //guardar os dados nos vetores para posteriormente montar o relatorio
    vetPalpites[r] = palpite;
    vetResultado[r] = numeroSorteado;


    //se acertou dar os parabéns, senão que pena ...
    if(palpite == numeroSorteado){
      Serial.println("Parabens, voce acertou \n");
    } else {
      Serial.println("Que pena, tente novamente! \n");
    }  
  }// fim do for

  //exibindo os dados do jogo no final - relatorio
  Serial.println();
  Serial.println("ESTATISTICA DO JOGO");
  Serial.println();


  for(int i = 0; i < qtdRodadas; i++)
  {
    Serial.println("Rodada" + String(i) + ":");//rodada 1, rodada 2
    Serial.println("    Palpite:" + String(vetPalpites[i]));//mostra o palpite da rodada atual
    Serial.println("    Dado: " + String(vetResultado[i]));//mostra o resultado daquela rodada
    Serial.println("-----------------------");//separador de linhas entre os resultados
    Serial.println();//pula uma linha
  }
  
  //Serial.println("Resultado: " + String( vetPalpites[i] == vet Resultados[i] ? "Acertou");
  //Serial.println("");
  //Serial.println("");

 Serial.println("FIM DO JOGO, REINICIANDO OS SISTEMA!!");
 delay(700);

}