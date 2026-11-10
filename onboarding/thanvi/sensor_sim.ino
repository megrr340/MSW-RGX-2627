float readSensor() {
  return 20.0 + random(0, 100) / 10.0;   // fake temperature, 20.0 to 29.9 C
}

void setup() {
  Serial.begin(9600);        // runs once at startup
  randomSeed(analogRead(A0));
}

void loop() {
  /*
  * Checks the temperature for out of range
  * Prints the temperature. If out of range, 
  * prints a warning beside reading
  */
  float temp = readSensor();
  if (temp > 27){
    Serial.print("Reading: ");
    Serial.print(temp);
    Serial.println(" C (Warning! over 27 C)");
    delay(1000);              // wait 1 second
  } else{
    Serial.print("Reading: ");
    Serial.print(temp);
    Serial.println(" C");
    delay(1000);               // wait 1 second
  }
  
}
