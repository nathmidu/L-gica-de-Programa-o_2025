// C++ code
//Variáveis
int idade = 15;

void setup()
{
  Serial.begin(9600);
  
}
  
void loop()
{
  Serial.println();
  Serial.print("Qual a sua idade?: ")
  while( !Serial.availabe() );
  idade = Serial.parseInt();
  Serial.println();
  
  Serial.println("Idade: " + String(idade) );
  
  if( idade >= 16){//se retornar verdadeiro - losango sim
    Serial.println("Voto obrigatorio");
  } else {//falso - losango não
    Serial.println("Sem idade para votar");
  }
  
  delay(2000);
}