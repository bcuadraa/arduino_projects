# Arduino Projects completed using the Arduino Starter Kit, English Projects Book!
## Overview 
###### As part of my training at the Center for Neural Science at New York University, I have been following the instructions from the Arduino Starter Kit (linked in the "helpful links" section) to create very fun projects! Arduino makes it very easy to program microcontrollers, which are essentially tiny computers. First, the Arduino board reads inputs such as light on a sensor or the pressing of a switch. Then it turns it into an output, such as activating a motor. Each of the projects I have been working on can be found in their separate section below. I highlighted what is necessary for the Arduino board circuitry to work, the code uploaded to generate the function, and the personal lessons that I have learned (if any) from each project along the way! 

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
###### After powering the Arduino (connecting to power and ground), place the two red LEDs and one green on the breadboard. Connect the cathode (short leg) of each LED to ground using the correct resistor (220 ohms). Then, connect the anode (long leg) of each LED to pins 3, 4, and 5, respectively, to communicate with the board. It is essential to verify the resistor's voltage because they ensure that the component receives the right amount of energy to function and reduces the chances of burning the component if it receives a higher voltage than it can take. Finally, you place the switch by attaching one leg to power and the other to pin 2. 

##### Code: 
###### In the setup of this code, the focus is on configuring the digital pins to be inputs or outputs. In the case of this project, the only input is coming from the switch, which is digital pin 2. The other three pins are outputs since they will give the result (light) depending on whether the switch is pressed. The loop first checks the pins for voltage using the function digitalRead(). When this function is called, the initialized variable for the switch will receive the value HIGH if there is a voltage or LOW if there is no voltage. Another essential part of the code is the if statements. If statements are used when comparing two things and telling the program what to do in each condition. We need to communicate to the board that if the button is not pressed, the green light needs to be on, and the red lights off. If the switch is pressed, the green light has to turn off and the red LEDs on. 

##### Lessons Learned: 
###### The LEDs convert electrical energy into light. They are essential in many different situations because they are diodes, which means they only allow electricity to flow in one direction. A uni-directional flow is beneficial in many circumstances because it protects the board.

###### In terms of debugging the circuits (this applies to all projects), I learned that the best way is first to check the circuit and trace it from power to ground using the image in the book to check that everything is running correctly. Check that all the components are connected to power and communicating with the board by making sure that they are touching the bottom of the board (push them as far down as you can.)  It might seem obvious, but I came across this problem building my first projects. Once you check that the circuit works well, check your code to ensure no issues. Remember that the positions on the board need to match the code precisely in order for it to work because they are directly connected. For example, if you wrote in the code that the switch is connected to digital pin 2, ensure that it is physically connected to 2 and not 3 or 1. 

#### Project 3: "Love-o-Meter"
##### Main Idea:
###### This project uses a temperature sensor to measure how warm your skin is. You set the ambient temperature as a threshold in the code. When you touch the sensor, since your skin is possibly warmer than the baseline temperature, the sensor transforms heat to electrical energy and sends a change in voltage to the board, turning on LED lights. How many lights turn on depends on how much warmer than the baseline temperature your skin is. For instance, if your skin temperature is two degrees higher than the baseline but less than four degrees, it turns only one light. If it is six degrees above baseline, it turns all three lights on.

##### Arduino Board: 
###### After connecting the board to power and ground, you need to attach the cathode of each LED to ground using a 220-ohm resistor and the anodes to pins 2 through 4, respectively. Then place the temperature sensor (TMP 36) on the breadboard with the round part facing away from the Arduino. Keep in mind that the order of the legs of the sensor is important. The left pin needs to be connected to power and the right pin to ground. The center pin will communicate directly with the Arduino by being connected to A0. 

##### Code: 
###### A very important part of the code is to use the correct baseline temperature. The suggested temperature in the book is 20 degrees, but I had to change my default temperature because the sensor was not reading it well. Try and see which temperature works best for you as the baseline. It is essential to use an adequate baseline temperature to determine whether the board can sense the temperature changes. To tell the board which temperature is the baseline, initialize it as a constant float before the setup. You also need to tell the board that the sensor pin sends inputs to A0 by initializing the variable as a constant integer. The setup() of this project consists of establishing communication between the board and the serial monitor, setting your pins as outputs, and turning off the lights to begin. You a serial port by using the command Serial. begin().  In the loop(), you initialize a variable to store the reading from your sensor and call the analogRead() function in which you will explicitly state what pin it should take a voltage reading on. The Serial.print() function then sends the value that it reads to the serial monitor, allowing you to view the values in the computer. Arduino has a built-in Analog-to-Digital Converter that reports values between 0 to 1023. However, we need the values in voltage and degrees celsius. We use two different formulas that the book gave us and convert and print these values. Then we finish the code by using if statements to describe when to turn on which lights. For instance, one LED is turned on for a low temperature, two for a medium, and three for a high temperature. You set your standards of what classifies as "low," "medium," and "high" in the conditions of the statements. 

##### Lessons Learned: 
###### Checking the values on the serial monitor is the first step to debugging in this case because it will automatically tell you if the circuit is working like it is supposed to. If the sensor is reading the values correctly, then the serial monitor should receive the correct values. 

#### Project 4: "Color Mixing Lamp"
##### Main Idea:
###### Phototransistors are components that generate a current depending on the amount of light they absorb. In this project, we use three phototransistors, each with a different assigned color gel (red, blue, and green), to send a signal to a tri-color LED. The purpose is to simulate a lamp that changes colors depending on external light conditions. When placing a red gel over the phototransistor programmed to take its input, the LED will turn red. The same happens when using the blue and green gels. Keep in mind that your "lamp's" success in changing colors will depend on the light conditions of the testing environment.

##### Arduino Board: 
###### After powering the board and connecting it to ground, place the three phototransistors, with one leg on each side of the board. Connect the long end to the power and the short end to ground using a 10-kilohm resistor. On the same side as the resistor, connect the phototransistors to Analog in pins 0, 1, and 2. This will allow the board to read specific colors at those locations. The color you place on each phototransistor matters because you are coding each phototransistor to receive that specific wavelength of color. Place the red over the one connected to A0, the green over A1, and the blue over A2. The LED that we are using is a tri-colored LED, also known as RGB led. This means that it has separate red, green, and blue elements inside and one common ground. Connect the longest pin of the LED to ground. Connect the remaining three LED legs to digital pins 9, 10, and 11 with 220-ohm resistors.

##### Code: 
###### In the setup(), begin serial communication and set the direction of the digital pins. All the pins (green, red, and blue) will be outputs. In the loop(), read the sensor values of A0, A1, and A2, and store them in the right location. Then, use the function Serial.print() to print the sensors on the serial monitor. Convert the sensor reading from 0-1023 to a value between 0-25 by dividing it by 4. Then print the new values on another line. 

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

