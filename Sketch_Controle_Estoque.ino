const byte infrapulse = 13;
const byte receptoron = 12;
const byte receptorsig = 14;
const byte buzzer = 27;
const byte btin = 26;
const byte btout = 25;
int qtpecas = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(receptoron, OUTPUT);
  digitalWrite(receptoron, HIGH);
  delay(50);

  pinMode(infrapulse, OUTPUT);
  digitalWrite(infrapulse, HIGH);
  delay(50);

  pinMode(btin, OUTPUT);
  digitalWrite(btin, HIGH);
  delay(50);

  pinMode(receptorsig, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(btout, INPUT_PULLDOWN);

  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  byte signalstate = digitalRead(receptorsig);

  byte btoutstate = digitalRead(btout);

  if(btoutstate == HIGH){
    Serial.println("CONTAGEM ZERADA!");
    tone(buzzer, 3000, 100);
    tone(buzzer, 1500, 100);
    tone(buzzer, 3000, 100);
    tone(buzzer, 1500, 100);
    delay(200);
    qtpecas = 0;
  }
  
  if(signalstate == LOW){
    Serial.println("PECA DETECTADA!");
    tone(buzzer, 4000, 200);
    tone(buzzer, 2000, 200);
    delay(500);
    qtpecas++;
  }

  Serial.println("CONTAGEM: " + String(qtpecas));
}
