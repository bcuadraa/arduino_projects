# Arduino Projects completed using the Arduino Starter Kit, English Projects Book!
## Overview 
###### As part of my training at the Center for Neural Science at New York University, I have been following the instructions from the Arduino Starter Kit (linked in the "helpful links" section) to create very fun projects! Arduino makes it very easy to program microcontrollers, which are essentially tiny computers. First, the Arduino board reads inputs such as light on a sensor or the pressing of a switch. Then it turns it into an output, such as activating a motor. Each of the projects I have been working on can be found in their separate section below. I highlighted what is necessary for the Arduino board circuitry to work, the code uploaded to generate the function, and the personal lessons that I have learned from each project along the way! 

#### Disclaimer:
###### In the sections labeled "code," I mainly explain and go over the parts that I think are important to highlight. If you want a more detailed explanation of each part of the code, please check the corresponding project's comments.

#### Project 1: "Get to Know Your Tools"
###### The first project does not include code because it is meant to help you get to know the different components and tools that the Arduino Kit includes and the basic principles of electricity, so it is not included in the repository.

##### Basics:
###### The breadboard needs to be connected to the Arduino's 5V and ground connections. It is recommended to keep the colors the same for consistency purposes, using the red wire to connect to power and the black wire to connect to the ground. These two wires give power to the board! Then you place the other components and follow the instructions. 

###### In terms of code, the void setup() and the void loop () must be included in every script. The setup() runs once when the Arduino is powered. It is used to initialize variables, pin modes, or libraries. The loop() runs continuously after the setup() has been completed. It is the main body of the program and is responsible for controlling the Arduino. Two other vital functions to keep in mind included in the loop are digitalRead(), which checks the pins for voltage, and digitalWrite(), which sends power to the board.

#### Project 2: "Spaceship Interference"
##### Main Idea:
###### For my second project, I created a simulation of the control panel of a spaceship to have a default green light when everything is under control and pressing a switch to turn on two red lights to express that there is an emergency. 

##### Arduino Board: 
###### After powering the Arduino, you place the two red LEDs and one green on the breadboard. Connect the cathode (short leg) of each LED to ground using the correct resistor (220 ohms). Then, connect the anode (long leg) of each LED to pins 3, 4, and 5, respectively, to communicate with the board. It is essential to verify the resistor's voltage because they ensure that the component receives the right amount of energy to function and reduces the chances of burning the component if it receives a higher voltage than it can take. Finally, you place the switch by attaching one leg to power and the other to pin 2. 

##### Code: 
###### In the setup of this code, the focus is on configuring the digital pins to be inputs or outputs. In the case of this project, the only input is coming from the switch, which is digital pin 2. The other three pins are outputs since they will give the result (light) depending on whether the switch is pressed. The loop first checks the pins for voltage using the function digitalRead(). When this function is called, the initialized variable for the switch will receive the value HIGH if there is a voltage or LOW if there is no voltage. Another essential part of the code is the if statements. If statements are used when comparing two things and telling the program what to do in each condition. We need to communicate to the board that if the button is not pressed, the green light needs to be on, and the red lights off. If the switch is pressed, the green light has to turn off and the red LEDs on. 

##### Lessons Learned: 
###### The LEDs convert electrical energy into light. They are essential in many different situations because they are diodes, which means they only allow electricity to flow in one direction. A uni-directional flow is beneficial in many circumstances because it protects the board.

###### In terms of debugging the circuit, today, I learned that the best way is first to check the circuit and trace it from power to ground using the image in the book to check that everything is running correctly. Check that all the components are connected to power and communicating with the board by making sure that they are touching the bottom of the board (push them as far down as you can.)  It might seem obvious, but I came across this problem building my first projects. Once you check that the circuit works well, check your code to ensure no issues. Remember that the positions on the board need to match the code precisely in order for it to work because they are directly connected. For example, if you wrote in the code that the switch is connected to digital pin 2, ensure that it is physically connected to 2 and not 3 or 1. 

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

