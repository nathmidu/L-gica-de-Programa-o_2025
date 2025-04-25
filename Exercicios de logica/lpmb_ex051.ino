float centimetros = 0;
float polegadas = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite a medida em centímetros:");
}

void loop() {
  if (Serial.available() > 0) {
    centimetros = Serial.parseFloat();          // Lê o valor em cm
    polegadas = centimetros / 2.54;             // Converte para polegadas

    Serial.print(centimetros);
    Serial.print(" cm equivalem a ");
    Serial.print(polegadas, 2);                 // Mostra com 2 casas decimais
    Serial.println(" polegadas.");

    // Para a execução após uma conversão
    while (true) {}
  }
}