// C++ code
/*Menu simples de informações - Faça um programa que simula um robô de
atendimento. Ele deve mostrar o seguinte menu:

1 - Ver telefone
2 - Ver endereço
3 - Sair */

void setup() {
  Serial.begin(9600);
  Serial.println("Menu do Robô:");
  Serial.println("1 - Telefone");
  Serial.println("2 - Endereço");
  Serial.println("3 - Sair");
}

void loop() {
  if (Serial.available() > 0) {
    char escolha = Serial.read();
    Serial.print("Você escolheu: ");
    Serial.println(escolha);

    switch (escolha) {
      case '1':
        Serial.println("Telefone: (11) 7070-7070");
        break;
      case '2':
        Serial.println("Endereço: Rua Niterói 180 – São Caetano");
        break;
      case '3':
        Serial.println("Encerrando programa. Até logo!");
        while (true) {} // Para o programa
        break;
      default:
        Serial.println("Opção inválida");
        break;
    }
  }
}
