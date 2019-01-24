byte analogPin = 5; // decide which Arduino analog pin (here A5) you will use.
byte digitalPin = 7; // decide which Arduino digital pin (here 7) you will use. 

int analogValue = 0; // variable to store the value (0 to 1023) read by the analog to digital converter on the analogPin set above 
// forshadowing: this needs to be an int instead of a byte

float analogVolts = 0; // variable to store the voltage (0 to 5 V) corresponding to analogValue
// forshadowing: this needs to be a float instead of an int or byte

void setup() {
  // there is no need to configure analog pins, however digitalPin must be configured as an output
  // should you use pinMode(digitalPin, OUTPUT) or pinMode(digitalPin, INPUT) to configure digitalPin?

  // REPLACE WITH YOUR CODE

  Serial.begin(9600); // begin communication with the serial monitor
}

void loop(void) {

  // set digitalPin so the LED will initially be turned off
  // should you use digitalWrite(digitalPin, LOW) or digitalWrite(digitalPin, HIGH)?

  // REPLACE WITH YOUR CODE

  readAndPrintVoltage(); // call the function to read the voltage being supplied to the LED and print this value to the serial monitor

  delay(2000); // delay 2 seconds

  // turn the LED on
  // should you use digitalWrite(digitalPin, LOW) or digitalWrite(digitalPin, HIGH)?
  
  // REPLACE WITH YOUR CODE

  readAndPrintVoltage();

  delay(2000); 

}

void readAndPrintVoltage() {

  // use the Arduino function analogRead() to read the value of an analog input and represent this value as a number between 0 and 1023 (2^10-1)
  analogValue = analogRead(analogPin);

  // write a line of code below that converts the value of analogValue to the corresponding voltage between 0 and 5 V and stores this in analogVolts
  // essentially, this converts an integer number from 0 to 1023 to a floating point number on the range 0 to 5.

  // REPLACE WITH YOUR CODE

  // write two lines of code below that prints the value of analogValue and analogVolts to the serial terminal using Serial.println()
  
  // REPLACE WITH YOUR CODE

}

