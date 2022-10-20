void setup() {
  Serial.begin(9600);
  pinMode (13,INPUT);
  pinMode (15,OUTPUT);

}

void loop() {
  int datasensor = analogRead(13);
  /*Serial.print("nilai : ");
  Serial.print(datasensor);
  Serial.println();*/
  
  if (datasensor<700){
    digitalWrite(15,LOW);
    Serial.println("terang");
  }
  else{
    digitalWrite(15,HIGH);
    Serial.println("gelap");
  }

}
