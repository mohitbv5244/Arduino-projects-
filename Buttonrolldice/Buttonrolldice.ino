/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * LCD is connected to the I2C 

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.

The numbers are displayed form 1 to 6 in fast manner, when the button is
pressed the number is displayed on the screen for 2 seconds and it continues.

 */
 #include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
const int colorR = 255;
const int colorG = 05;
const int colorB = 15;
// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
int counter = 0000;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:

  
  lcd.begin(16, 2);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void call()
{
  //;
  counter= counter+1;
  delay(0300);
    lcd.setCursor(0, 1);
    delay(010);
  
   if(counter >= 7)
    {
    counter = 1;
    return;
    
    }
}




void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
 
    call();
    lcd.print(counter);
   
   
 
  if(buttonState == HIGH) {
    
    lcd.setCursor(1, 0);

     lcd.print("pressed");

     call();

     delay(2000);
     
     lcd.clear();
    
  }
  else {
    
 
    lcd.print(" not pressed");

    call();
    
     lcd.clear();
  }
}
