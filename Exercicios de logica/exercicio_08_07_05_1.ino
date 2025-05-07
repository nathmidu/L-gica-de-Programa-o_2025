// C++ code
//Variáveis

String nome, cargo;
float salario;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite o nome do funcionario");
  while(!Serial.available());//pausa o programa até o usuário teclar (Enter>
  nome = Serial.readString();//guarda o texto digitado na variável
  
  Serial.println("Digite o cargo do funcionario");
  while(!Serial.available());//pausa o programa até o usuário teclar (Enter>
  nome = Serial.readString();//guarda o texto digitado na variável
  
  Serial.println("Digite o salário do funcionario");
  while(!Serial.available());//pausa o programa até o usuário teclar (Enter>
  nome = Serial.readString();//guarda o texto digitado na variável
  
  //processamento
    
  if(salario<1000){salario = salario + (salario *0.10);
     Serial.println("salario: " + String(salario));
     } else{
    Serial.println("Salario:  " + String(salario));
  }
  //saída
   
    Serial.println("Nome: " + nome);//imprimir o nome 
    Serial.println("Cargo: " + cargo);//imprimir o cargo  
    Serial.println("Salario: " + String(salario));//imprimir o salário  
  
  
  
  Serial.println (salario);
  
  
  delay(2000);
 }