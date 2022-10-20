const int trigPin = 5;
const int echoPin = 18;
int SensorLDR = 13;


//define sound speed in cm/uS
#define SOUND_SPEED 0.034

long duration;
float distanceCm;
float distanceInch;

void setup() {
  Serial.begin(115200); // Starts the serial communication
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
}

void loop() {
 int bacasensor=analogRead(SensorLDR);
 Serial.print(" nilaiLDR : ");
 Serial.print(bacasensor );
 Serial.println(" ");
 /*int bacaultrasonik = digitalRead ( trigPin, echoPin);*/
 
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance
  distanceCm = duration * SOUND_SPEED/2;
  
  // Convert tonches
  
  // Prints the distance in the Serial Monitor
  Serial.print(" Jarak : ");
  Serial.println(distanceCm);
  
  delay(500);

  if ( bacasensor > 0 && bacasensor < 401 ){
    Serial.print ( " Kondisi : " );
    Serial.print ( " terang banget ");
    Serial.println();
  }
  else if (bacasensor > 401 && bacasensor < 801 ){
    Serial.print ( " Kondisi : " );
    Serial.print ( " terang ");
    Serial.println();
  }
  else if ( bacasensor >801 && bacasensor < 1201 ){
    Serial.print ( " Kondisi : " );
    Serial.print ( " redup ");
    Serial.println();
  }
  else {
    Serial.print ( " Kondisi : " );
    Serial.print (" Gelap ");
    Serial.println ();
  }
}
