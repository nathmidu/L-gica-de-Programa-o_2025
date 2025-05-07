/*Faça um programa receba dois valores e imprima qual é o maior número
digitado.*/
//variáveis 

float valor1, valor2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Digite o primeiro valor:");
  while (!Serial.available());
  valor1 = Serial.readString().toFloat();

  delay(300); // pequena pausa para limpar o buffer

  Serial.println("Digite o segundo valor:");
  while (!Serial.available());
  valor2 = Serial.readString().toFloat();

  if (valor1 > valor2) {
    Serial.print("O maior valor digitado foi: ");
    Serial.println(valor1);
  } else if (valor2 > valor1) {
    Serial.print("O maior valor digitado foi: ");
    Serial.println(valor2);
  } else {
    Serial.println("Os dois valores sao iguais.");
  }

  while (true); // trava para não repetir
}
