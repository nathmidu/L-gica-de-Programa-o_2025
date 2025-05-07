/*Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.*/
//Variáveis 

float numero;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Digite um numero:");

  // Espera entrada do usuário
  while (!Serial.available());
  numero = Serial.readString().toFloat(); // lê número como float

  // Converte e verifica se é par ou ímpar
  if (int(numero) % 2 == 0) {
    Serial.println("O numero e PAR.");
  } else {
    Serial.println("O numero e IMPAR.");
  }

  while (true); // trava o loop
}
