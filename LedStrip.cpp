#include "LedStrip.h"

LedStrip::LedStrip(int redPin, int greenPin, int bluePin){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  this->redPin = redPin;
  this->greenPin = greenPin;
  this->bluePin = bluePin;
}

void LedStrip::setColor( RGB color ){


  unsigned char red  = analogRead(redPin);
  unsigned char green = analogRead(greenPin);
  unsigned char blue = analogRead(bluePin);

  RGB previous(red, green, blue);

  if ( previous.equals(color) ){    
    return;
  }

  
  analogWrite(redPin, color.red);
  analogWrite(greenPin, color.green);
  analogWrite(bluePin, color.blue);
  delay(250);


}


void LedStrip::off(){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(250);
}

