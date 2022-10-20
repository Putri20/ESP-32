void setup() {
  Serial.begin (115200);
  pinMode (13, INPUT);

}

void loop() {
  int datasensor = analogRead (13);

  if (datasensor <800){
    digitalWrite (15,LOW);
    Serial.println ( "terang" );
  }
  else {
    digitalWrite (15,HIGH);
    Serial.println ( "gelap" );
  }
}
