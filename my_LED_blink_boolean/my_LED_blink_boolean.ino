byte analogPin = 5; 
byte digitalPin = 7; 
int analogValue = 0; 
float analogVolts = 0; 

boolean toggleLED = false; // declare and initialize a boolean variable to remember the current state of the LED, on or off

void setup() {
  pinMode(digitalPin, OUTPUT);
  Serial.begin(9600); 
}

void loop(void) {

  // write an if-else statement that turns the LED off if toggleLED is false and turns the LED on if toggleLED is true
  
  // REPLACE WITH YOUR CODE

  readAndPrintVoltage();
  delay(2000);

  toggleLED = !toggleLED; // The ! notation means “not” so this sets toggleLED to true if it was false and false if it was true.
}

void readAndPrintVoltage() {
  // paste your function from my_LED_blink here
  
  // REPLACE WITH YOUR CODE
}
