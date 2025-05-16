int numero = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite um numero para ver a tabuada (entre 1 e 10):");
}

void loop() {
  if (Serial.available() > 0) {
    numero = Serial.parseInt();  // Lê número digitado pelo usuário
    Serial.read(); // Limpa o buffer do Serial após parseInt

    if (numero >= 1 && numero <= 10) {
      Serial.print("Tabuada do ");
      Serial.println(numero);
      for (int contadortabu = 1; contadortabu <= 10; contadortabu++) {
        Serial.print(numero);
        Serial.print(" x ");
        Serial.print(contadortabu);
        Serial.print(" = ");
        Serial.println(numero * contadortabu);
      }
    } else {
      Serial.println("Número inválido. Digite um número entre 1 e 10.");
    }
    Serial.println("Digite outro número para ver outra tabuada:");
  }
}
