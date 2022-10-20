int sensorLDR = 12;

void setup() {
  Serial.begin (9600);
  pinMode ( sensorLDR, INPUT);
  

}

void loop() {
  int bacasensor = analogRead(sensorLDR);

  if (bacasensor <801 ){
    Serial.println (" terang ");
    Serial.println (" ");
  }
  else {
    Serial.println ( " gelap ");
    Serial.println (" ");
  }


}
