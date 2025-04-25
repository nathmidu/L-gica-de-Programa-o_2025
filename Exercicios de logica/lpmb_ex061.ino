float polegadas = 0;
float centimetros = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite a medida em polegadas:");
}

void loop() {
  if (Serial.available() > 0) {
    polegadas = Serial.parseFloat();          // Lê o valor em polegadas
    centimetros = polegadas * 2.54;           // Converte para centímetros

    Serial.print(polegadas);
    Serial.print(" polegadas equivalem a ");
    Serial.print(centimetros, 2);             // Exibe com 2 casas decimais
    Serial.println(" centímetros.");

    // Para o loop após uma conversão
    while (true) {}
  }
}