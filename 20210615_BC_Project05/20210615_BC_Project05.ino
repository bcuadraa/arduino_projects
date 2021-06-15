#include <Servo.h> //import servo library

Servo myServo; //creates the servo object 

int const potPin = A0; 
int potVal; 
int angle;


void setup() {
  myServo.attach(9); //associates servo object with Arduino pin

  Serial.begin(9600); //intializes serial port

}

void loop() {
  potVal = analogRead(potPin); //reads the potentiometer value 
  Serial.print("potVal: "); 
  Serial.print(potVal); //prints out the value to the serial monitor 

  //Map() function used to change the scale of the value coming from the potentiometer because
  //the analog input goes from 0-1023, and the servo only rotates 180 degrees
  angle = map(potVal, 0, 1023, 0, 179); //# to be scaled, min val of in, max val of in, min val of out, max val of out
  Serial.print(", angle: "); 
  Serial.println(angle);

  myServo.write(angle); //moves the motor to the angle you specify 
  
  delay(15); //gives the motor time to return to its position

}
