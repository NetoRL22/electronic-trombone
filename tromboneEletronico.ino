const double razao = 1.05946320547;
const double fracaoPotenciometro = 14.8837209302;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(9, OUTPUT);
  pinMode(A1, INPUT);
}

void loop() {
  if(digitalRead(2)){
      noTone(9);
  }
  else{
    tone(9, 82.406876 * pow(1.05946320547, getPitch()));
  }
// Serial.println(analogRead(A1));
Serial.println(getPitch());
}

double getPitch(){
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
