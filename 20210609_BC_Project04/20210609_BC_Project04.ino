// set constants to keep track of which sensor pairs with which color n the LED
const int greenLEDPin = 9; 
const int redLEDPin = 10; 
const int blueLEDPin = 11;

//these variables store the sensor reading and the light level of each LED
const int redSensorPin = A0; 
const int greenSensorPin = A1;
const int blueSensorPin = A2; 

int redValue = 0; 
int greenValue = 0; 
int blueValue = 0; 

int redSensorValue = 0; 
int greenSensorValue = 0; 
int blueSensorValue = 0;

//sets up the serial port to see the values of the sensors in the serial monitor
void setup() {
  Serial.begin(9600);

  //define LED pins as outputs
  pinMode(greenLEDPin, OUTPUT); 
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT); 

}

void loop() {

  //reads the value of each light sensor
  redSensorValue = analogRead(redSensorPin); 
  delay(5); 
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);

  //reports the sensor readings to the computer 
  Serial.print("Raw Sensor Values \t red: ");
  Serial.print(redSensorValue); 
  Serial.print("\t green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t blue: "); 
  Serial.println(blueSensorValue);

  //converts the sensor readings from a value between 0-1023 to a value between 0-255
  //allows to change LED's brightness via pulse width modulation
  redValue = redSensorValue/4; 
  greenValue = greenSensorValue/4; 
  blueValue = blueSensorValue/4;

  //print the new values
  Serial.print("Mapped sensor values \t red: ");
  Serial.print(redValue); 
  Serial.print("\t green: "); 
  Serial.print(greenValue); 
  Serial.print("\t blue: "); 
  Serial.println(blueValue); 

  //set the LED light levels 
  analogWrite(redLEDPin, redValue); 
  analogWrite(greenLEDPin, greenValue); 
  analogWrite(blueLEDPin, blueValue); 

}
