String nome = "";
String cargo = "";
float salario = 0;
float novoSalario = 0;
int etapa = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite o nome do funcionário:");
}

void loop() {
  if (Serial.available()) {
    if (etapa == 0) {
      nome = Serial.readStringUntil('\n');
      nome.trim();
      Serial.println("Digite o cargo do funcionário:");
      etapa = 1;
    }
    else if (etapa == 1) {
      cargo = Serial.readStringUntil('\n');
      cargo.trim();
      Serial.println("Digite o salário do funcionário:");
      etapa = 2;
    }
    else if (etapa == 2) {
      salario = Serial.parseFloat();
      novoSalario = salario * 1.10;

      // Exibição final
      Serial.println("==============================");
      Serial.print("Nome: ");
      Serial.println(nome);
      Serial.print("Cargo: ");
      Serial.println(cargo);
      Serial.print("Novo salário: R$ ");
      Serial.println(novoSalario, 2);
      Serial.println("==============================");

      while (true) {} // Pausa após exibir
    }
  }
}

