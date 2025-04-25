//faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses,Dias,Horas,Minutos

//Declaração de Variáveis
int idade = 0;
int idadeMeses = 0;
int idadeDias = 0;
int idadeMinutos = 0;
int idadeSegundos = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite sua idade em anos");
  while( !Serial.available() );//espera o usuário dar <Enter>
  idade = Serial.parseInt();//transforma a idade digitada em número
  
  //Processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeMinutos = idade* 100915200;
  idadeSegundos = idade * 86400;
  
  
  
  
  //Saída
    Serial.println("Idade em meses: " + String(idadeMeses) );//imprime o texto
    Serial.println("Idade em dias: " + String(idadeDias) );
    Serial.println("Idade em minutos: " + String(idadeMinutos) );
    Serial.println("Idade em segundos: " + String(idadeSegundos) );

 
  delay(1000);
}