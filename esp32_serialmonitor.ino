void setup() {
  Serial.begin(9600);
 

}

void loop() { 
  int nilai=90;
  if(nilai>70 && nilai<80){
    Serial.println ("Lulus");
  }
  else if (nilai>80){
    Serial.println ("Nilai Bagus");
  }
  else {
    Serial.println ("tidak lulus");
  }
  
}
