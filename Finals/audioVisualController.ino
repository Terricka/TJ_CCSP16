
#include <Wire.h>
#include <ZX_Sensor.h>

// Constants
const int ZX_ADDR = 0x10;    // ZX Sensor I2C address

// Global Variables
ZX_Sensor zx_sensor = ZX_Sensor(ZX_ADDR);
GestureType gesture;
uint8_t gesture_speed;

int buttonPin = 12;
int buttonRead;

// accelerometer pin
int x, y, z;

void setup() {
  uint8_t ver;

  // Initialize Serial port
  Serial.begin(9600);

  if ( zx_sensor.init() ) {
    Serial.println("ZX Sensor initialization complete");
  } else {
    Serial.println("Something went wrong during ZX Sensor init!");
  }
}

void loop() {

  buttonRead = digitalRead(buttonPin);

  Serial.print("button: ");
  Serial.println(buttonRead);

  // accelerometer
  x = analogRead(0);       // read analog input pin 0
  y = analogRead(1);       // read analog input pin 1
  z = analogRead(2);       // read analog input pin 1
  Serial.println(x);    // print the acceleration in the X axis
//  Serial.print(",");       // prints a space between the numbers
//  Serial.print(y);    // print the acceleration in the Y axis
//  Serial.print(",");       // prints a space between the numbers
//  Serial.println(z);  // print the acceleration in the Z axis
//  delay(100);              // wait 100ms for next reading

    
  
  // Gesture sensing
    if ( zx_sensor.gestureAvailable() ) {
    gesture = zx_sensor.readGesture();
    gesture_speed = zx_sensor.readGestureSpeed();
    switch ( gesture ) {
      case NO_GESTURE:
        Serial.println("No Gesture");
        break;
      case RIGHT_SWIPE:
        Serial.print("Right Swipe. Speed: ");
        Serial.println(gesture_speed, DEC);
        break;
      case LEFT_SWIPE:
        Serial.print("Left Swipe. Speed: ");
        Serial.println(gesture_speed, DEC);
        break;
      case UP_SWIPE:
        Serial.print("Up Swipe. Speed: ");
        Serial.println(gesture_speed, DEC);
        break;
      default:
        break;
    }

  }
}
