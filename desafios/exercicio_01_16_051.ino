// C++ code
/*Tentativa de conta com repetição - Faça um programa que pede ao usuário o
resultado de uma conta simples, como &quot;Quanto é 2 + 2?&quot;.
a. Se a resposta estiver errada, exiba &quot;Tente novamente!&quot; e pergunte se ele quer
tentar de novo.
b. Se a resposta estiver certa, exiba &quot;Parabéns!&quot;.*/


void setup() {
  Serial.begin(9600);
  Serial.println("Quanto é 2 + 2?");
}

void loop() {
  if (Serial.available() > 0) {
    String resposta = Serial.readStringUntil('\n');
    resposta.trim();

    if (resposta == "4") {
      Serial.println("Parabéns!");
      while (true);  // trava o loop após acerto
    } else {
      Serial.println("Tente novamente!");
      Serial.println("Quanto é 2 + 2?");
    }
  }
}
