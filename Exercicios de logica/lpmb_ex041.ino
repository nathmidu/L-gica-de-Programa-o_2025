String nome = "";
float peso = 0;
float altura = 0;
float imc = 0;
int etapa = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite o nome da pessoa:");
}

void loop() {
  if (Serial.available()) {
    if (etapa == 0) {
      nome = Serial.readStringUntil('\n');
      nome.trim();
      Serial.println("Digite o peso (em kg):");
      etapa = 1;
    }
    else if (etapa == 1) {
      peso = Serial.parseFloat();
      Serial.println("Digite a altura (em metros):");
      etapa = 2;
    }
    else if (etapa == 2) {
      altura = Serial.parseFloat();

      // Cálculo do IMC
      imc = peso / (altura * altura);

      // Exibição do resultado
      Serial.println("=========================");
      Serial.print("Nome: ");
      Serial.println(nome);
      Serial.print("IMC: ");
      Serial.println(imc, 2); // mostra com 2 casas decimais
      Serial.println("=========================");

      // Para o loop
      while (true) {}
    }
  }
}