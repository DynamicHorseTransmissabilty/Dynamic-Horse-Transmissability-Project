/*
  ADXL3xx

  Created 2 Jul 2008
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe
  Modified 21 Feb 2021
  by Dynamic Horse Transmissibility Group

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/ADXL3xx
*/

// these constants describe the pins. They won't change:
const int groundpin = 18;             // analog input pin 4 -- ground
const int powerpin = 19;              // analog input pin 5 -- voltage
const int x1pin = A0;                  // x-axis of the accelerometer
const int y1pin = A1;                  // y-axis
const int z1pin = A2;                  // z-axis (only on 3-axis models)

const int x2pin = A3;                  // x-axis of the accelerometer
const int y2pin = A4;                  // y-axis
const int z2pin = A5;                  // z-axis (only on 3-axis models)

void setup() {
  // initialize the serial communications:
  Serial.begin(9600);

  // Provide ground and power by using the analog inputs as normal digital pins.
  // This makes it possible to directly connect the breakout board to the
  // Arduino. If you use the normal 5V and GND pins on the Arduino,
  // you can remove these lines.
  //pinMode(groundpin, OUTPUT);
  //pinMode(powerpin, OUTPUT);
  //digitalWrite(groundpin, LOW);
  //digitalWrite(powerpin, HIGH);
}

void loop() {
  // print the sensor values:
  Serial.print(analogRead(x1pin));
  // print a tab between values:
  Serial.print(",");
  Serial.print(analogRead(y1pin));
  // print a tab between values:
  Serial.print(",");
  Serial.print(analogRead(z1pin));
  Serial.print(",");

  // print the sensor values:
  Serial.print(analogRead(x2pin));
  // print a tab between values:
  Serial.print(",");
  Serial.print(analogRead(y2pin));
  // print a tab between values:
  Serial.print(",");
  Serial.print(analogRead(z2pin));
  Serial.print(",");
  
  Serial.println();
  // delay before next reading:
  delay(1);
}
