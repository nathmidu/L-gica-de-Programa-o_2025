/*Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.*/
//Variáveis

float compra, lucro, venda;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Entrada
  Serial.println("Preco de compra:");
  while (!Serial.available());
  compra = Serial.readString().toFloat();

  Serial.println("Percentual de lucro (%):");
  while (!Serial.available());
  lucro = Serial.readString().toFloat();

  // Cálculo
  venda = compra + (compra * lucro / 100);

  // Saída
  Serial.print("Preco de venda: R$ ");
  Serial.println(venda, 2);

  if (lucro < 50) {
    Serial.println("Margem de lucro muito pequena!");
  }

  while (true); // trava para não repetir
}