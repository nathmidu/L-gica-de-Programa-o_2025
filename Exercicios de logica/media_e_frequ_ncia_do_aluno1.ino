/*Calcule a média entre DUAS notas.
Verifique se o aluno foi APROVADO.
Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequência É MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota
Exiba se foi REPROVADO por frequência.
Exiba se foi REPROVADO*/

float nota1;
float nota2;
float frequencia = 75.0;// em porcentagem (%)
float media;


void setup(){
  Serial.begin(9600); 
}

  void loop(){
    media = (nota1 + nota2) / 2;
  
  Serial.print("nota1: ");
  Serial.println(nota1);
  Serial.print("nota2: ");
  Serial.println(nota2);
  Serial.print("media: ");
  Serial.println(media);
  Serial.print("frequencia: ");
  Serial.println(frequencia);
  Serial.println("%");
 }
 
 if(media >= 6 && frequencia >= 75){ 
    Serial.println("Resultado: APROVADO");
  } else {
  if (media < 6){ 
      Serial.println("Resultado: REPROVADO por nota");
  } 
    if (frequencia < 75) {
      Serial.println("Resultado: REPROVADO por frequencia");
    }


  
      
  
  
  
   
  
  
                  

  
