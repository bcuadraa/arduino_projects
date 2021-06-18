<<<<<<< HEAD
int notes[] = {262, 294, 330, 349};  //sets up an array of four notes, using four different frequencies

void setup() {
  Serial.begin(9600); //opens the serial port (starts communication with computer)

}

void loop() {
  int keyVal = analogRead(A0); //reads the analog value from the switches
  Serial.println(keyVal); //sends value to the serial monitor

  //determine what notes to play using an if else statement
  if(keyVal == 1023){
    tone(8, notes[0]);
  }
  else if(keyVal >= 990 & keyVal <= 1010){
    tone(8, notes[1]);
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <= 10){
    tone(8, notes[3]);
  }
  else{
    noTone(8); //stops playing tones when no buttons are being pressed
  }
  

}
=======
int notes[] = {262, 294, 330, 349};  //sets up an array of four notes, using four different frequencies

void setup() {
  Serial.begin(9600); //opens the serial port (starts communication with computer)

}

void loop() {
  int keyVal = analogRead(A0); //reads the analog value from the switches
  Serial.println(keyVal); //sends value to the serial monitor

  //determine what notes to play using an if else statement
  if(keyVal == 1023){
    tone(8, notes[0]);
  }
  else if(keyVal >= 990 & keyVal <= 1010){
    tone(8, notes[1]);
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <= 10){
    tone(8, notes[3]);
  }
  else{
    noTone(8); //stops playing tones when no buttons are being pressed
  }
  

}
>>>>>>> b75dc8a1914f3a2b6983a5931e84a86d3bfbed06
