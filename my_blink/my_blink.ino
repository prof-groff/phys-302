
// Text following double forward slashes are comments in C++.
// There is an example built into the Arduino IDE very similar to this called "blink.ino".

// In C++, variables must be declared with a data type (we will learn more about data types later).
int LEDPin;

// Now, the variable can be initialized, which means a value can be assigned to it.
LEDPin = 13; // The Arduino Uno has an LED attached to digital i/o pin 13.

// Alternatively, a variable can be declared and initialized at the same time like this:
// int LEDPin = 13;

// All Arduino sketches have a setup function like the following. This function runs exactly once
// when the Arduino powers up. It is used to set up the device and initialize certain 
// functions and processes. Note that in general variables defined inside a function are not available
// outside of the funciton. 
void setup() {
  // initiallize LEDPin, which is a digital pin, as an output. 
  // Outputs can safely source or sink up to 20 mA of electric current.
  pinMode(LEDPin, OUTPUT); 
}

// All Arduino sketches have a loop function like the following. This function runs 
// over and over again until the Arduino loses power.
void loop() {
  // digitalWrite() is a builtin function that sets digital pins on the Arduino to high voltage
  // or low voltage. Here this translates to turning the LED connected to pin 13 on or off.
  digitalWrite(LEDPin, HIGH); // turn the LED on by setting the voltage level HIGH (5V)
  delay(1000); // wait 1000 ms or 1 s
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by setting the voltage level LOW (0V)
  delay(1000); // wait another 1 s
}
