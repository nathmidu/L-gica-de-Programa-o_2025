int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 11;
int opcao;

void setup()
{
  Serial.begin(9600);

  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, HIGH);
  delay(500);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  delay(500);
}

void loop()
{
  do {
    Serial.println("Escolha uma opcao abaixo:\n");
    Serial.println("1 - Ligar Led Verde");
    Serial.println("2 - Desligar Led Verde");
    Serial.println("3 - Ligar Led Amarelo");
    Serial.println("4 - Desligar Led Amarelo");
    Serial.println("5 - Ligar Led Vermelho");
    Serial.println("6 - Desligar Led Vermelho");
    Serial.println("7 - Ligar Todos os Leds");
    Serial.println("8 - Desligar Todos os Leds");
    Serial.println("0 - Sair...");

    while (Serial.available() == 0) {
      
    }

    opcao = Serial.parseInt();

    switch (opcao)
    {
      case 1:
        digitalWrite(ledVerde, HIGH);
        Serial.println(" O led verde esta ligado ");
        break;
      case 2:
        digitalWrite(ledVerde, LOW);
        Serial.println(" O led verde esta desligado ");
        break;
      case 3:
        digitalWrite(ledAmarelo, HIGH);
        Serial.println(" O led amarelo esta ligado ");
        break;
      case 4:
        digitalWrite(ledAmarelo, LOW);
        Serial.println(" O led amarelo esta desligado ");
        break;
      case 5:
        digitalWrite(ledVermelho, HIGH);
        Serial.println(" O led vermelho esta ligado ");
        break;
      case 6:
        digitalWrite(ledVermelho, LOW);
        Serial.println(" O led vermelho esta desligado ");
        break;
      case 7:
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledVermelho, HIGH);
        Serial.println(" Todos os Leds estao ligados. ");
        break;
      case 8:
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
        Serial.println(" Todos os Leds desligados. ");
        break;
      case 0:
        Serial.println(" Saindo... ");
        break;
      default:
        Serial.println(" bruh escolha errada, Tenta novamente\n");
        break;
    }

    delay(500); 

  } while (opcao != 0);

  while(true);
}