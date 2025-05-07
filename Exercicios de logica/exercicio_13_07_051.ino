/*Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.*/
//Variáveis

int numero;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Digite um numero inteiro:");

  while (!Serial.available()); // Espera entrada
  numero = Serial.readString().toInt(); // Converte direto para int

  if (numero % 2 == 0) {
    Serial.print("Numero PAR: ");
    Serial.println(numero);
  }

  while (true); // trava o loop
}
