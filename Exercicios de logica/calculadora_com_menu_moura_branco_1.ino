int escolhaDaOperacao;
 float resultado;


//Estrutura: tipoRetorno nomeDaFuncao parametros
float somar(float numero1Param, float numero2Param = 0){
  resultado = numero1Param + numero2Param; // ; indica que é o final da instrucao
  return resultado;
  //Serial.println("Boom!! seu resultado eh: " + String(resultado));//concatenano
  
  
}

float dividir(float numero1Param, float numero2Param = 0){
  resultado = numero1Param / numero2Param; // ; indica que é o final da instrucao
  return resultado;
  //Serial.println("Boom!! seu resultado eh: " + String(resultado));//concatenano
  
}

float subtrair(float numero1Param, float numero2Param = 0){
  resultado = numero1Param - numero2Param; // ; indica que é o final da instrucao
  return resultado;
  //Serial.println("Boom!! seu resultado eh: " + String(resultado));//concatenano
  
}

float multiplicar(float numero1Param, float numero2Param = 0){
  resultado = numero1Param * numero2Param; // ; indica que é o final da instrucao
  return resultado;
  //Serial.println("Boom!! seu resultado eh: " + String(resultado));//concatenano
}


void setup()
{
 Serial.begin(9600);
  
  int contador = 0;
  float numero1;
  float numero2;
 
  
  do{
     Serial.println("Bem-vindo(a) a  calculadora !!!");
     Serial.println("Escolha uma opreracao:");
     Serial.println("1 - Somar");
     Serial.println("2 - Subtrair");
     Serial.println("3 - Multiplicar");
     Serial.println ("4 - Dividir");
     while (!Serial.available()){}
     escolhaDaOperacao = Serial.parseInt();
    
    
    
     Serial.println("Para conseguirmos fazer a operacao matematica na calculadora,precisamos que voce digite 2 numeros");
     Serial.println ("Digite o primeiro numero:");
     while(!Serial.available()){}
     numero1 = Serial.parseFloat();
    
     Serial.println ("Digite o segundo numero:");
     while(!Serial.available()){}
     numero2 = Serial.parseFloat();
    
     switch(escolhaDaOperacao){
       case 1://SOMAR
           //somar(numero1, numero2);//estou passando os valores que o usuario digitou via parametro
          // somar(numero1);//estou passando os valores para o parametro
       
          float retornoFuncaoSomar;
          retornoFuncaoSomar = somar(numero1, numero2);
          Serial.println(retornoFuncaoSomar);
       
          break;
       
       case 2:
         resultado = numero1 - numero2;
         Serial.println("Seu resultado eh " + String(resultado));
          break;
       
       case 3:
         resultado = numero1 * numero2;
         Serial.println("Boom!! seu resultado eh " + String(resultado));
          break;
       
       case 4:
         resultado = numero1 / numero2;
         Serial.println("Boom!! seu resultado eh " + String(resultado));
          break;
       
       default:
         Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4. ;)");
     }
    
     Serial.println("Voce deseja voltar ao menu? Digite sim ou nao ( em minusculo, por favor).");
     while (!Serial.available()){}
     
    if(Serial.readString()=="sim"){
     contador = 1;
    }
    else{
     contador = 0;
      Serial.println("Até breve prr prr patapim");
      Serial.println("Caso queira voltar ao menu do, reinicie o programa ;");
     
    }
    
     
  }
  while(contador != 0);
}

void loop()
{
 // sem instruções
}