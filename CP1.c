int buzzerPin = 8;//Alarme ligado ao pino 8
int gPin = 7;//Led verde ligada no pino 7
int yPin = 4;//Led amarela ligada no pino 4
int rPin = 2;//Led vermelha ligada no pino 2
int LDR = A0; //LDR ligado ao pino A0

int mediaMovel[10];
void setup(){
  
//Define os pinos como saída  
  pinMode(buzzerPin,OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(yPin, OUTPUT);
  pinMode(rPin, OUTPUT);
//Define os pinos de saída
  pinMode(LDR, INPUT);
//Inicia o Serial do Arduino
  Serial.begin(9600);
  
}
void loop(){
  
  int LDR_in = analogRead(LDR);  // Lê o valor do LDR

  // Atualiza a média móvel
  for (int i = 9; i > 0; i--) {
    mediaMovel[i] = mediaMovel[i - 1];
  }

  mediaMovel[0] = map(LDR_in, 0, 1023, 0, 100);
  
  int media = 0;
  for (int i = 0; i < 10; i++) {
    media += mediaMovel[i];
  }
  media /= 10;

  Serial.println(media); // Mostra esse valor no Monitor Serial
  delay(300);
//Se a média do LDR for maior ou igual que 25
  if(media >=25){
    digitalWrite(rPin, HIGH);//Led vermelho liga
    digitalWrite(yPin, LOW);//Led amarelo desliga
    digitalWrite(gPin, LOW);//Led verde desliga
    tone(buzzerPin, 600);//Define o tom do alarme
    delay(3000);//Tempo para o alarme tocar de 3 segundos
    noTone(buzzerPin);
    
//Se a média do LDR for maior ou igual que 15 e menor que 25
  }else if(media >= 15 && media < 25){
    digitalWrite(yPin, HIGH);//Led amarela liga
    digitalWrite(rPin, LOW);//Led vermelho desliga
    digitalWrite(gPin, LOW);//Led verde desliga
    
//Se a média do LDR for menor que 15
  }else{
    digitalWrite(gPin, HIGH);//Led verde liga
    digitalWrite(yPin, LOW);//Led amarelo desliga
    digitalWrite(rPin, LOW);//Led vermelho delisga
  }
  
}

/* 
				EXPLICAÇÃO DO CÓDIGO
 1 - O LDR mede a intensidade da luz e fornece um valor analógico
 (Quanto mais luminosidade, menos resistência e vice-versa)

 2 - Se a média for maior ou igual a 25, o led vermelho
 fica ligado, o led amarelo desligado e o verde desligado,
 enquanto o alarme toca.
  
 3 - Se a média do LDR estiver entre 15 e 25,
 o LED amarelo acende, e os LEDs vermelho e verde apagam.
  
 4 - Se a média do LDR for menor que 15, o LED verde acende,
 e os LEDs amarelo e vermelho apagam.
 
*/
