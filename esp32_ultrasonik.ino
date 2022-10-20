const int trigPin = 5;
const int echoPin = 18;
int merah = 15;
int LDR = 13;

//define sound speed in cm/uS
#define SOUND_SPEED 0.034
/*#define CM_TO_INCH 0.393701*/

long duration;
int distanceCm;
int distanceInch;

void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(merah,   OUTPUT);

  /*if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);*/
  }
  
  /*display.clearDisplay();*/

  /*display.setTextSize(2);
  display.setTextColor(WHITE);*/


void loop() {
  int bacaLDR = analogRead (13);
  
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
  
  // Convert to inches
  /*distanceInch = distanceCm * CM_TO_INCH;*/
  
  // Prints the distance in the Serial Monitor
  Serial.print("Distance (cm): ");
  Serial.println(distanceCm);
  Serial.print(" nilaiLDR : ");
  Serial.println(bacaLDR);
 /* Serial.print("Distance (inch): ");
  Serial.println(distanceInch);*/

  /*display.clearDisplay();
  display.setCursor(0, 25);
  //Display distance in cm
  display.print(distanceCm);
  display.print(" cm");
  
  // Display distance in inches
  /* display.print(distanceInch);
  display.print(" in");
  display.display(); */

  delay(500);  
  if (bacaLDR > 700 || distanceCm < 5){
      digitalWrite(merah,HIGH);
      delay(500);
      Serial.println ( " gelap ");
      Serial.println ();
      }
   else if (bacaLDR < 700 || distanceCm > 5){
    digitalWrite(merah,LOW);
    delay (500);
    Serial.println ( " terang ");
    Serial.println();
   }
   }
