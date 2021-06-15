//calibrate the sensor
int sensorValue; 
int sensorLow = 1023; 
int sensorHigh = 0; 

const int ledPin = 13; //constant for the calibration indicator 

void setup() {
  pinMode(ledPin, OUTPUT); 
  digitalWrite(ledPin, HIGH);//sets ledPin to output and turns the light on

  //calibration
  while(millis() < 5000) {
    sensorValue = analogRead(A0); 
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue; //if the value is more than sensorHigh which is initially 0, update value
    }
    if (sensorValue < sensorLow){
      sensorLow = sensorValue; //if the value is less than sensorLow which is initially 1023, update value
    }
  }

  digitalWrite(ledPin, LOW);//turns light off to indicate that calibration has finished

}

void loop() {
  sensorValue = analogRead(A0); //reads value on A0 and stores it in sensorValue 
  int pitch = 
    map(sensorValue, sensorLow, sensorHigh, 50, 4000); //mapped from sensorValue
    tone(8, pitch, 20); //plays the frequency, the 8 is the pin to play it on, and the 20 is how many ms

    delay(10); //gives the sound more time to play

}
