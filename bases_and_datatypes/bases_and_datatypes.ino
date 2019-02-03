boolean a = true; 	// the boolean type stores true or false, // which are also the integer values 1 or 0
boolean b = false;

byte c = 255; 	// these "integral" types all store //integer values
int d = -32768;
long e = 2147483647;

char f = 'A'; 	// the char type stores ASCII characters, // each character is also equivalent to an // integer value

float g = 3.1415; 	// the float type allows you to store 
// numbers with decimal points, that is, 
// numbers that are not integers

unsigned int h = 65535; 	// unsigned integers do not reserve a 
// bit for a positive or negative sign 
// so they can store numbers of larger // magnitude
unsigned long i = 4294967295;

void setup() {
Serial.begin(9600); 	// begin serial communication via the // USB interface at a rate of 9600 
// bits per second
  delay(3000);
  Serial.println(a); 		// print a line to the serial monitor
  Serial.println(b);
  Serial.println(c);
  Serial.println(d);
  Serial.println(e);
  Serial.println(f);
  Serial.println(f,DEC); 	// print output as a decimal value
  Serial.println(g,4); 	// when the output is of type float, 
// the second argument specifies the 
// number of digits to the right of 
// the decimal point
  Serial.println(h);
  Serial.println(h,BIN); 	// print output as a binary value
  Serial.println(h,HEX); 	// print output as a hexadecimal value
  Serial.println(i);
}

void loop() {
// do nothing
}
