# Arduino Projects completed using the Arduino Starter Kit, English Projects Book!
## Overview 
###### As part of my training at the Center for Neural Science at New York University, I have been following the instructions from the Arduino Starter Kit (linked in the "helpful links" section) to create very fun projects! Arduino makes it very easy to program microcontrollers, which are essentially tiny computers. First, the Arduino board reads inputs such as light on a sensor or the pressing of a switch. Then it turns it into an output, such as activating a motor. Each of the projects I have been working on can be found in their separate section below. In addition, I highlighted what is necessary for the Arduino board circuitry to work, the code uploaded to generate the function, and the personal lessons that I have learned (if any) from each project along the way! 

#### Disclaimer:

###### All the instructions I provide for the projects are obtained from the book included in the Starter Kit (linked in the helpful links section below.)

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
###### After powering the Arduino (connecting to power and ground), place the two red LEDs and one green on the breadboard. Next, connect the cathode (short leg) of each LED to ground using the correct resistor (220 ohms). Then, connect the anode (long leg) of each LED to pins 3, 4, and 5, respectively, to communicate with the board. It is essential to verify the resistor's voltage because they ensure that the component receives the right amount of energy to function and reduces the chances of burning the component if it receives a higher voltage than it can take. Finally, you place the switch by attaching one leg to power and the other to pin 2. 

##### Code: 
###### In the setup of this code, the focus is on configuring the digital pins to be inputs or outputs. In the case of this project, the only input is coming from the switch, which is digital pin 2. The other three pins are outputs since they will give the result (light) depending on whether the switch is pressed. The loop first checks the pins for voltage using the function digitalRead(). When this function is called, the initialized variable for the switch will receive the value HIGH if there is a voltage or LOW if there is no voltage. Another essential part of the code is the if statements. If statements are used when comparing two things and telling the program what to do in each condition. We need to communicate to the board that if the button is not pressed, the green light needs to be on, and the red lights off. If the switch is pressed, the green light has to turn off and the red LEDs on. 

##### Lessons Learned: 
###### The LEDs convert electrical energy into light. They are essential in many different situations because they are diodes, which means they only allow electricity to flow in one direction. A uni-directional flow is beneficial in many circumstances because it protects the board.

###### In terms of debugging the circuits (this applies to all projects), I learned that the best way is first to check the circuit and trace it from power to ground using the image in the book to check that everything is running correctly. Next, check that all the components are connected to power and communicating with the board by making sure that they are touching the bottom of the board (push them as far down as you can.)  It might seem obvious, but I came across this problem building my first projects. Once you check that the circuit works well, check your code to ensure no issues. Remember that the positions on the board need to match the code precisely in order for it to work because they are directly connected. For example, if you wrote in the code that the switch is connected to digital pin 2, ensure that it is physically connected to 2 and not 3 or 1. 

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
###### Phototransistors are components that generate a current depending on the amount of light they absorb. In this project, we use three phototransistors, each with a different assigned color gel (red, blue, and green), to send a signal to a tri-color LED. The purpose is to simulate a lamp that changes colors depending on external light conditions. For example, when placing a red gel over the phototransistor programmed to take its input, the LED will turn red. The same happens when using the blue and green gels. Keep in mind that your "lamp's" success in changing colors will depend on the light conditions of the testing environment.

##### Arduino Board: 
###### After powering the board and connecting it to ground, place the three phototransistors, with one leg on each side of the board. Connect the long end to the power and the short end to ground using a 10-kilohm resistor. On the same side as the resistor, connect the phototransistors to Analog in pins 0, 1, and 2. This will allow the board to read specific colors at those locations. The color you place on each phototransistor matters because you are coding each phototransistor to receive that specific wavelength of color. In this case, place the red over the one connected to A0, the green over A1, and the blue over A2. The LED that we are using is a tri-colored LED, also known as RGB led. This means that it has separate red, green, and blue elements inside and one common ground. Connect the longest pin of the LED to ground. Connect the remaining three LED legs to digital pins 9, 10, and 11 with 220-ohm resistors.

##### Code: 
###### We have many pins that we need to keep track of using the code, so it is important to be tedious when initializing the variables before setting up:
###### 1. You need three constant integers for each of the different colored pins, connected to 9, 10, and 11 according to how you built the circuit.
###### 2. You also need three constant integers for the sensor value of each sensor pin, which we connected to A0, A1, and A2.
###### 3. You need to add variables for the incoming sensor values and the output values you will use to fade the LED, set them all equal to 0. 

###### In the setup(), begin serial communication and set the direction of the digital pins. All the pins (green, red, and blue) will be outputs. In the loop(), read the sensor values of A0, A1, and A2, and store them in the right location. Then, use the function Serial.print() to print the sensors on the serial monitor. Convert the sensor reading from 0-1023 to a value between 0-25 by dividing it by 4. Then print the new values on another line. 

#### Project 5: "Mood Cue"
##### Main Idea: 
###### We use a potentiometer for this project, which is essentially a knob that divides voltage. It has three pins; one is connected to power, the other to ground, and the middle communicates with the Arduino. As you turn the knob, the potentiometer registers the angle and sends the message to the board. The board then sends the angle to the servo motor, indicating where to move its branch. The project aims to use the servo motor to point out what mood you are in that day. You could create a cutout indicating what each angle means. For instance, if you turn it to 0, you are outraged, and 1023 could be very happy, but that is up to you!

##### Arduino Board: 
######  After connecting the Arduino to power and ground, place the potentiometer on the breadboard. Connect one side to power and the other to ground. Then, connect the middle pin to analog pin 0. This will send the message to the board of where you want the motor to turn. The servo motor has three wires, and the order in which these are connected is important. The kit includes male headers, which you will need to plug into the end of the servo wires to connect it to the breadboard. The red wire needs to be connected to power, the black to ground, and the white is the control that receives the input from the Arduino. Connect the white wire to pin 9. Place two 100uf capacitors, one across from the potentiometer and the other across from the male headers. The purpose is to reduce changes caused by the rest of the components of the circuit. You need to be very careful when connecting the capacitors and make sure you are connecting the cathode to ground and the anode to power. A black stripe usually signals the cathode down the side. If you plug them in backward, they can explode. 

##### Code:
###### At the beginning of the code, import the servo library, which allows you to use all necessary functions. Create the servo object and declare your variables. In the setup, you need to tell the Arduino that the servo motor is attached to pin nine and begin the serial communication with the computer. In loop(), you need to use the map() function to change the values between 0-1023 to the servo values, which are between 0-179 (because the motor can only move 180 degrees.) Store this new value in your angle variable and print out the mapped value to the monitor. Then, to move the servo, use the command servo.write() to move it to the angle your desired angle, which will be automatically specified by moving the potentiometer. 

##### Lessons Learned:
###### The most important lesson that I learned from this project is that the serial monitor is your best friend when debugging. The best way to check if your circuit is running correctly is to check for extreme values. For instance, my circuit was not working, so we moved the potentiometer to each extreme while simultaneously checking if the values were chancing. It should have given values 0 on one side and 1023 on the other, but they remained in the range of 330-340. That was the first red flag to knowing that something was wrong. Using this information, I was able to debug the code and fix the circuit. I followed the steps that I have mentioned for the other projects: drawing the circuit, checking if every component was properly connected, and finally checking the code for errors (making sure that it matches the physical circuit.

######  I also was able to further appreciate the real-world application of Arduino after completing this project. The servo motor is special because it does not spin around in a circle; it moves to a specific position and stays there until you tell it to move again. They usually only rotate 180 degrees. If you wanted to build a robot that simulates human walking, you could use a servo motor to move its feet. Our feet cannot turn 360 degrees. They often only turn 180, which is why it would be a perfect simulation. It is nice to think of the real-world application of the projects because then you can start exploring the value of Arduino.

#### Project 6: "Light Theremin"
##### Main Idea:
###### A Theremin is an instrument that the artist controls without physical contact. It operates using electromagnetic fields between two antennae, one that controls pitch and the other volume. We are simulating this instrument with our Arduino in a very simplified manner. We will use a phototransistor, which are the components that detect light that we used for the "Color-Mixing Lamp" project. Moving our hands over the sensor, we will change the amount of light that falls on the phototransistor, creating a change in voltage, determining the frequency of the note to play. This change in voltage will be sent to the Arduino, which will deliver it to the piezo, which we can think of as our tiny sound machine.

##### Arduino Board: 
###### In terms of building the circuit, this is one of the simplest projects since it only has two components, the phototransistor and the piezo. First, connect the Arduino to power and ground. Then connect one end of the piezo to ground and the other end to digital pin eight on the Arduino. Finally, place the phototransistor on the breadboard and connect the long leg to power and the shorter leg to analog pin 0, using a 10-kilohm resistor. 

##### Code: 
###### Before the setup(), create a variable to hold the values from the sensor. Next, we need to initialize variables to calibrate the sensor in the setup() section. To do the actual calibrating, we will use a while loop, by creating a timer in which the board will readjust the values. We need to calibrate because our readings do not range from 0 to 1023. After all, the resistor limits the low end, and the brightness of the light limits the high end. We want to set the low value to 1023 and the high value to 0. We also need a calibration indicator to signal when the calibration is over. LED pin 13 is built into the board. We have to declare it as an integer before the setup and specify when it will be on and off in the while loop. In loop(), we need to call the function analogRead on pin A0, which will read the sensor value. We also need to create a variable named pitch that will be mapped from sensor value to be transformed into a frequency. Next, we call the tone function, which serves to play a sound. We have to specify what pin to play the sound on, what frequency to play, and how long to play the sound. We connected our piezo to pin 8 and received input from the pitch variable directly connected to the sensor, so we only have to decide how long to play the note (in ms). Finally, call delay() to give the sound more time to play. 

#### Project 7: "Keyboard Instrument" 

##### Main Idea: 
###### We will continue creating sound for this project, this time trying to simulate a keyboard. We are using a resistor ladder, which means that we connect all the switches' outputs. However, a different voltage level passes through each pin (because they have different resistors allowing different levels of energy to pass), sending different messages that will be interpreted as different sounds. 

##### Arduino Board:
###### First, connect your breadboard to power and ground. Then, place the piezo and connect one end to ground and the other to pin 8. Then, place the switches on the breadboard. The first switch is connected directly to power. The second, third, and fourth are connected to power through different level resistors (this gives them different sounds because they receive different amounts of energy). Connect the switches' outputs in a junction that needs to be connected to analog 0 and to ground through a resistor. 

##### Code: 
###### For this project, we will need to create an array of the four notes we want to use for each of our switches. Declare the array before the setup() to make it a global variable. Then, in the setup, start the serial communication with the computer. The last step is the loop, where we will use if statements to determine which note to play for each switch. We tell the Arduino to play the notes corresponding to the specified analog value and stop playing the tone when nothing is pressed. 

#### Project 8: "Digital Hourglass"

##### Main Idea: 
###### This project serves as a timer. Our main character is a tilt sensor, which is a switch that opens or closes depending on its orientation. The switch provides an input to the board in the form of how many milliseconds have passed since the last time an LED turned on. The purpose is to have a light turn on every 10 minutes, and since we have ten lights, it is a timer that works for up to an hour. 

##### Arduino Board:
###### Once the board is connected to power and ground, connect the longer leg of the six LEDs to digital pins 2-7 and the shorter legs to ground using 220-ohm resistors. Then, connect one side of the tilt to power and the other side to ground using a 10-kilohm resistor. Finally, connect the tilt switch to digital pin 8. 

#### Helpful Links:
##### * [Arduino Starter Kit: English Projects Book](https://www.amazon.com/Arduino-Starter-Kit-English-Official/dp/B009UKZV0A/ref=sr_1_4?dchild=1&keywords=arduino+starter+kit&qid=1623788219&sr=8-4)

