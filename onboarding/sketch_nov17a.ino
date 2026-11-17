float readSensor() {
  return 20.0 + random(0, 100) / 10.0;   // fake temperature, 20.0 to 29.9 C
}

void setup() {
  Serial.begin(9600);        // runs once at startup
  randomSeed(analogRead(A0));
}

void loop() {                // runs forever after setup
  float temp = readSensor();
  if (temp > 27){
    Serial.print("Reading: ");
    Serial.print(temp);
    Serial.println(" C(Warning! over 17 C)");
    delay(1000);               // wait 1 second
  } else{
    Serial.print("Reading: ");
    Serial.print(temp);
    Serial.println(" C");
    delay(1000);  // wait 1 second
  }
}





