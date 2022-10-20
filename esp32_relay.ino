int relay = 15;
int LDR = 13;

void setup() {
  Serial.begin (115200);
  pinMode( relay,OUTPUT);
  pinMode( LDR ,INPUT);
}

void loop() {
  int bacasensor=analogRead(LDR);
  
  if ( bacasensor<700){
    digitalWrite(relay,LOW);
    delay(500);
  }else if (bacasensor>700 && bacasensor<700){
    digitalWrite(relay,HIGH);
    delay(500);
    }

  }
