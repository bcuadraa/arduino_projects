const int switchPin = 8; //name of the pin where the tilt switch is on 
unsigned long previousTime = 0; //old te time an LED was last changed 
int switchState = 0; //holds the current state of the switch
int prevSwitchState = 0; //holds the previous switch state, used to compare the switch's position 
int led = 2; //used to count which LED is the one to be turned on, starting with pin 2
long interval = 600000; //set the time that you want to pass between each led turning on 


void setup() {
  for(int x = 2; x < 8; x++){ //declares LEDpins 2-7 as outputs
    pinMode(x, OUTPUT);
  }

  pinMode(switchPin, INPUT); //declares switch pin as input
}

void loop() {
  unsigned long currentTime = millis(); //gets the amount of time the Arduino has been running (in ms)

  //evaluates the amount of time that has passed since the previous loop()
  if(currentTime - previousTime > interval){
    previousTime = currentTime; 
    digitalWrite(led, HIGH); //turns on the LED
    led++; //prepares for next one

    if(led == 7){ //checks to see if all lights are on
    }
  }
    
    switchState = digitalRead(switchPin); //read the value of switch

    //see if the switch is in a different position, if they are different turn the LEDs off
    if(switchState != prevSwitchState){
      for(int x = 2; x < 8; x++){
        digitalWrite(x, LOW); 
      }

      led = 2; //return the LED variable to the first pin
      previousTime = currentTime; //reset timer for LEDS
    }

    prevSwitchState = switchState; //save value so you can compare it to the value you get in the next loop()

}
