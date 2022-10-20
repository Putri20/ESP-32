const int trigPin = 5;
const int echoPin = 18;


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
 int bacasensor=analogRead(15);
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
  Serial.print("Distance (cm): ");
  Serial.println(distanceCm);
  
  delay(500);
  
 if ( distanceCm < 3 ){
  Serial.print (" Jarak Dekat ");
  Serial.println (" ");
  }else if (distanceCm > 10 && distanceCm < 31 ){
    Serial.print ( " Jarak Sedang ");
    Serial.println( " " );
  }else {
    Serial.print ( " Jarak Jauh ");
    Serial.println (" ");
  }
}
