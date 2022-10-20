int sensor = 13;

void setup() {
  Serial.begin ( 9600);
  pinMode( sensor , INPUT);
}

void loop() {
  int bacaSensor = digitalRead (sensor);
  Serial.println(bacaSensor);
}
