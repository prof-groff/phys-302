// Text following double forward slashes are comments in C++.
// There is an example built into the Arduino IDE very similar to this called "blink.ino".

// In C++, variables must be declared with a data type (we will learn more about data types later).
// They must also be initialized, which means a value is assigned to it.
// This can happen at the same time like below or later in the setup or loop functions.
int LEDPin = 13;

// All Arduino sketches have a setup function like the following. This function runs exactly once
// when the Arduino powers up. It is used to set up the device and initialize certain 
// functions and processes. 
// NOTE: In general variables defined inside a function are not available outside of the funciton. 
// This is referred to as variable "scope". A variable defined outside of the setup and loop functions.
// like LEDPin above has global scope, which means it can be accessed anywhere.

void setup() {
  // initiallize LEDPin, which is a digital pin, as an output. 
  // Outputs can safely source or sink up to 20 mA of electric current.
  pinMode(LEDPin, OUTPUT); 
}

// All Arduino sketches have a loop function like the following. This function runs 
// over and over again until the Arduino loses power.

void loop() {
  // digitalWrite() is a built-in function that sets digital pins on the Arduino to high voltage
  // or low voltage. Here this translates to turning the LED connected to pin 13 on or off.
  digitalWrite(LEDPin, HIGH); // turn the LED on by setting the voltage level HIGH (5V)
  delay(1000); // wait 1000 ms or 1 s
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by setting the voltage level LOW (0V)
  delay(1000); // wait another 1 s
}
