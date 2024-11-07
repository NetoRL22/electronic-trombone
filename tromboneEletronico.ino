// essa constante define razao da progressão geométrica entre as frequencias das notas musicais
const double razao = 1.05946320547;
// essa constante define de quanto em quanto do valor recebido do potenciometro que uma nota musical será mudada (640 que é o total do meu potenciometro / 43)
const double fracaoPotenciometro = 14.8837209302;
// essa constante define qual a frequencia da nota mi1, que é a primeira do nosso instrumento
const double miUm = 82.406876;

// essa funcao é executada sempre no inicio da execucao do arduino
void setup() {
  // inicia o monitor serial
  Serial.begin(9600);
  // botão
  pinMode(2, INPUT_PULLUP);
  // buzzer
  pinMode(9, OUTPUT);
  // potenciometro
  pinMode(A1, INPUT);
}

// essa funcao é executada repetidamente enquanto o arduino estiver ligado
void loop() {
  // identifica se o botão NÃO está pressionado
  if(digitalRead(2)){
      noTone(9);
  } // identifica se o botão ESTÁ pressionado
  else{
    // gera barulho no buzzer com base na frequencia da mi multiplicado pela razao da pg das notas elevado a qual das 43 notas o potenciometro indica (literalmete um an de PG)
    tone(9, miUm * pow(razao, getPitch()));
  }
// registra a acao do potenciometro para Debugging
Serial.println(getPitch());
}

// funcao executada para obter em que nota o potenciometro indica
double getPitch(){
  // verifica se o valor lido na porta analogica do potenciometro corresponde a cada uma das notas existentes
  if(analogRead(A1)<fracaoPotenciometro*1){
    return 0;
  }
  else if(analogRead(A1)<fracaoPotenciometro*2){
    return 1;
  }
  else if(analogRead(A1)<fracaoPotenciometro*3){
    return 2;
  }
  else if(analogRead(A1)<fracaoPotenciometro*4){
    return 3;
  }
  else if(analogRead(A1)<fracaoPotenciometro*5){
    return 4;
  }
  else if(analogRead(A1)<fracaoPotenciometro*6){
    return 5;
  }
  else if(analogRead(A1)<fracaoPotenciometro*7){
    return 6;
  }
  else if(analogRead(A1)<fracaoPotenciometro*8){
    return 7;
  }
  else if(analogRead(A1)<fracaoPotenciometro*9){
    return 8;
  }
  else if(analogRead(A1)<fracaoPotenciometro*10){
    return 9;
  }
  else if(analogRead(A1)<fracaoPotenciometro*11){
    return 10;
  }
  else if(analogRead(A1)<fracaoPotenciometro*12){
    return 11;
  }
  else if(analogRead(A1)<fracaoPotenciometro*13){
    return 12;
  }
  else if(analogRead(A1)<fracaoPotenciometro*14){
    return 13;
  }
  else if(analogRead(A1)<fracaoPotenciometro*15){
    return 14;
  }
  else if(analogRead(A1)<fracaoPotenciometro*16){
    return 15;
  }
  else if(analogRead(A1)<fracaoPotenciometro*17){
    return 16;
  }
  else if(analogRead(A1)<fracaoPotenciometro*18){
    return 17;
  }
  else if(analogRead(A1)<fracaoPotenciometro*19){
    return 18;
  }
  else if(analogRead(A1)<fracaoPotenciometro*20){
    return 19;
  }
  else if(analogRead(A1)<fracaoPotenciometro*21){
    return 20;
  }
  else if(analogRead(A1)<fracaoPotenciometro*22){
    return 21;
  }
  else if(analogRead(A1)<fracaoPotenciometro*23){
    return 22;
  }
  else if(analogRead(A1)<fracaoPotenciometro*24){
    return 23;
  }
  else if(analogRead(A1)<fracaoPotenciometro*25){
    return 24;
  }
  else if(analogRead(A1)<fracaoPotenciometro*26){
    return 25;
  }
  else if(analogRead(A1)<fracaoPotenciometro*27){
    return 26;
  }
  else if(analogRead(A1)<fracaoPotenciometro*28){
    return 27;
  }
  else if(analogRead(A1)<fracaoPotenciometro*29){
    return 28;
  }
  else if(analogRead(A1)<fracaoPotenciometro*30){
    return 29;
  }
  else if(analogRead(A1)<fracaoPotenciometro*31){
    return 30;
  }
  else if(analogRead(A1)<fracaoPotenciometro*32){
    return 31;
  }
  else if(analogRead(A1)<fracaoPotenciometro*33){
    return 32;
  }
  else if(analogRead(A1)<fracaoPotenciometro*34){
    return 33;
  }
  else if(analogRead(A1)<fracaoPotenciometro*35){
    return 34;
  }
  else if(analogRead(A1)<fracaoPotenciometro*36){
    return 35;
  }
  else if(analogRead(A1)<fracaoPotenciometro*37){
    return 36;
  }
  else if(analogRead(A1)<fracaoPotenciometro*38){
    return 37;
  }
  else if(analogRead(A1)<fracaoPotenciometro*39){
    return 38;
  }
  else if(analogRead(A1)<fracaoPotenciometro*40){
    return 39;
  }
  else if(analogRead(A1)<fracaoPotenciometro*41){
    return 40;
  }
  else if(analogRead(A1)<fracaoPotenciometro*42){
    return 41;
  }
  else{
    return 42;
  }
}
