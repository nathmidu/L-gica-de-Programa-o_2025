/*Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.*/
//Variáveis

float salario;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite o salario do funcionario");
  while (!Serial.available());//aguarda entrada do usuario
  salario = Serial.readString().toFloat(); // Lê e converte para float
  
  if(salario <500){
     salario += salario * 0.30; // Aplica aumento de 30%
     Serial.print("Salario reajustado: R$ ");
     Serial.println(salario, 2); // Mostra com 2 casas decimais
   } else {
      Serial.println("Funcionário não tem direito a aumento.");
    
}
  
   while (true); // Pausa o programa (impede repetição do loop)
}