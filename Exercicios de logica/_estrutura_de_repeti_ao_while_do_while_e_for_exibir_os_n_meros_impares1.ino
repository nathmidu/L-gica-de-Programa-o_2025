/*
While - E uma estrutura de repetiçao que so eecuta a
repetiçao quando e verdadeira
*/

//A funçao SETUP() tem como objetivo de iniciar o sistema, serve como
//uma configuraçao
void setup()
{
  Serial.begin(9600);
  
  /*Tipos de dados (Principais)
   -int(numeros inteiros)
    -long(numeros inteiros- é um int com maior capacidade de armazenamento)
    -string(caracteres: alfanumerios e especiais)
    -float(Números com casas decimais)
    -bool(true e false)
    */
    //Váriavel inicializadora
    int contadorwhile = 1; //variavel local
    
  while(contadorwhile <= 100){
    Serial.println(contadorwhile);
    contadorwhile += 2;
  
  }
  
  /*operadores
  
  aritméticos:=,-,*,/,%
  lógicos: 
  - || (PIPI - OU)
  - && (E COMERCIAL - E)
  -! (PONTO DE EXCLAMAÇAO - NEGAÇAO/INVERTE)
  
   relacional:
   - == (COMPARAÇAO)
   - >= (MAIOR QUE E IGUAL)
   - > (MAIOR QUE)
   - <= (MENOR QUE E IGUAL)
   - != (DIFERENTE DE)
   - < (MENOR QUE)
   */
  
}

//A funçao LOOP() tem como objetivo de repitir varias vezes o programa
void loop()
{
   //sem instruçoes
}