/*Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.*/
//Variáveis

int numero;

void setup(){
  Serial.begin(9600);
  
}

void loop(){
  Serial.println("digite um numero inteiro: ");
  while(!Serial.available());
  numero = Serial.readString().toInt();
  
  if(numero > 0){
    Serial.println("o numero e positivo.");
  } else if (numero < 0) {
    Serial.println("O numero e negativo.");
  } else {
     Serial.println("O numero e zero.");
    
   }
    while (true); // trava para não repetir
}

