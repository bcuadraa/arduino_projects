# Arduino Projects completed using the Arduino Starter Kit, English Projects Book!
## Overview 
###### As part of my training at the Center for Neural Science at New York University, I have been following the instructions from the Arduino Starter Kit (linked in the "helpful links" section) to create very fun projects! Arduino makes it very easy to program microcontrollers, which are essentially tiny computers. First, the Arduino board reads inputs such as light on a sensor or the pressing of a switch. Then it turns it into an output, such as activating a motor. Each of the projects I have been working on can be found in their separate section below, highlighting what is necessary for the arduino board circuitry to work, the code that is uploaded to generate the function, and the personal lessons that I have learned from each project along the way! 

#### Disclaimer:
##### The explanations for each code will be mainly in pseudocode, not stating any actual code. In addition, I mostly go over the parts that I think are important to highlight. If you want a more detailed explanation of what each part of the code does individually, feel free to check the comments on each of the individual projects. 

#### Project 1: "Get to Know Your Tools"
###### The first project does not include code because it is meant to help you get to know the different components and tools that the Arduino Kit includes, as well as the basic principles of electricity, so it is not included in the repository.

##### Basics:
###### The breadboard needs to be connected to the Arduino's 5V and ground connections. It is recommended to keep the colors consistent, therefore use the red wire to connect to power, and the black wire to connect to ground. This gives power to the board! Then you place the other components and follow the instructions. 

###### In terms of code, the most important functions are the void setup() and the void loop (), these have to be included in every script. The setup() runs once when the Arduino is powered on. It is usually used to initialize variables, pin modes, or libraries. The loop() runs continously after the setup() has completed. This is the main body of the program and is responsible controlling the Arduino. Two other important functions to keep in mind, that are included in the loop, are digitalRead() which checks the pins for voltage and digitalWrite() which sends power to the board.

#### Project 2: "Spaceship Interference"
##### Main Idea:
###### For my second project, I created a simulation of the control panel of a spaceship, with the purpose of having a default green light when everything is under control, and pressing an "emergency switch" to turn on two red lights, to express that there is an emergency. 

##### Arduino Board: After powering the Arduino, you place the two red LEDs and one green on the breadboard, connecting one leg to ground using the resistor and one leg to pins 3, 4, and 5, which is how it will communicate with the board. Remember to use the correct resistor, since it uses up a specific amount of energy so the component you are using receives the right amount it needs to function. Resistors are very important because they remove the chances of burning the component (it if were to receive more than it needs.) Then you place the switch by attaching one side to power and the other to pin 2. 

##### Code: In the setup of this code, the focus is on configuring the digital pins to be inputs or outputs. In the case of this project, the only input is coming from the switch, which is digital pin 2. The other three pins are outputs since they will give the result once the switch is pressed, or not pressed in the case of the green light. The loop first checks the pins for voltage using the function digitalRead(). When this function is called, the variable that was initialized for the switch will get the variable HIGH if there is a voltage, or LOW if there is no voltage. Writing an if statement makes it easier to compare two things and performs actions to tell it what to do. If the button is not pressed and the green light is on and the red lights are off. If the switch is pressed, the green light is turned off and the red LEDs on. 

##### Lessons Learned:

#### Project 3: "Love-o-Meter"
##### Main Idea:

##### Arduino Board: 

##### Code:

##### Lessons Learned:

#### Project 4: "Color Mixing Lamp"
##### Main Idea:

##### Arduino Board: 

##### Code:

##### Lessons Learned:

#### Project 5: "Mood Cue"
##### Main Idea:

##### Arduino Board: 

##### Code:

##### Lessons Learned:

#### Project 6: "Light Theremin"
##### Main Idea:

##### Arduino Board: 

##### Code:

##### Lessons Learned:

#### Helpful Links:
##### * [Arduino Starter Kit: English Projects Book](https://www.amazon.com/Arduino-Starter-Kit-English-Official/dp/B009UKZV0A/ref=sr_1_4?dchild=1&keywords=arduino+starter+kit&qid=1623788219&sr=8-4)

