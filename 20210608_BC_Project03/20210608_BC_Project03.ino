
const int sensorPin = A0;
const float baselineTemp = -13.0; //changed the baseline temperature, because mapping between analog and digital did not work

void setup() {
  Serial.begin(9600); //opens connection between Arduino and computer, to see the values from the analog input on computer screen.

  //sets some pins as outputs
  for(int pinNumber = 2; pinNumber<5; pinNumber++){
    pinMode(pinNumber, OUTPUT); 
    digitalWrite(pinNumber, LOW);
  }

}

void loop() {
  int sensorVal = analogRead(sensorPin); //reads the temperature sensor
  
  //sends the temperature sensor values to the computer
  Serial.print("Sensor Value: "); 
  Serial.print(sensorVal); 

  //convert sensor reading to voltage 
  float voltage = (sensorVal/1024.0) * 5.0; //converts the ADC reading to voltage
  Serial.print(" , Volts: "); 
  Serial.print(voltage); 

  //convert the voltage to temperature and send the value to the computer
  Serial.print(" , degrees C: "); 
  float temperature = (voltage - .5) * 100; 
  Serial.println(temperature); 

  //turn off LEDs for a low temperature
  if(temperature < baselineTemp + 2) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW); 

  //turn on one LED for a low temperature (2 degrees above baseline, less than 4 degrees above)
  }else if(temperature >= baselineTemp + 2 && temperature < baselineTemp+6){
    digitalWrite(2, HIGH); 
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);

  //turn on two LEDs for medium temperature (between 4-6 degrees above baseline)
  }else if(temperature >= baselineTemp + 4 && temperature < baselineTemp + 6){ 
    digitalWrite(2, HIGH); 
    digitalWrite(3, HIGH); 
    digitalWrite(4, LOW);

  //turn on three LEDs for high temperature (6 degrees above baseline)
  }else if(temperature >= baselineTemp + 6){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }

//  delay(1000); 
  

}
