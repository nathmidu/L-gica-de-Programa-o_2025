int anoNascimento;
int anoAtual;
int idade;
int idadeSemanas;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite o ano de nascimento:");
}

void loop() {
  if (Serial.available() > 0) {
    anoNascimento = Serial.parseInt();

    Serial.println("Digite o ano atual:");
    while (Serial.available() == 0) {
      // espera entrada do ano atual
    }

    anoAtual = Serial.parseInt();

    idade = anoAtual - anoNascimento;
    idadeSemanas = idade * 52;

    Serial.print("Idade: ");
    Serial.print(idade);
    Serial.println(" anos");

    Serial.print("Idade em semanas: ");
    Serial.print(idadeSemanas);
    Serial.println(" semanas");

    // Impede de repetir automaticamente
    while (true) {}
  }
}


  
   
