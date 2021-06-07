// to create a variable, you need to declare what type it is, in this case the int type will hold a whole number
int switchState = 0; 

// setup runs once when the Arduino is first powered on, this is where you configure the digital pins to be either inputs or outputs 
// the pins connected to the LED are outputs and the switch pin is the input
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

// the loop runs continously and checks for voltage, in this case it checks the state of pin 2 and stores the value in switchState
void loop() {
  switchState = digitalRead(2);

//if the switchState is Low (the button is not pressed), turn the green LED on and the red LEDS off
  if (switchState == LOW) {
    digitalWrite(3, HIGH); //green LED
    digitalWrite(4, LOW); //red LED
    digitalWrite(5, LOW); //red LED
  }

//if the switchState is HIGH, turn the green LED off, turn the red LEDs on
  else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH); 

//After setting the lights to a certain state, the following code makes the Arduino pause for a moment before changing them back to help me perceive the changes
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
  }
} // goes back to the beginning of the loop
