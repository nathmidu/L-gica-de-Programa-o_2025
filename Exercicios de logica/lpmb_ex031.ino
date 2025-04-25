int numero;
int dobro;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite um número:");
}

void loop() {
  if (Serial.available() > 0) {
    numero = Serial.parseInt();       // Lê o número digitado
    dobro = numero * 2;               // Calcula o dobro

    Serial.print("O dobro de ");
    Serial.print(numero);
    Serial.print(" é ");
    Serial.println(dobro);

    // Impede de repetir automaticamente
    while (true) {}
  }
}