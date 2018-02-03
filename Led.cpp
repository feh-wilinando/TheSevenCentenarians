#include "Led.h"


Led::Led(int pin){
  pinMode(pin, OUTPUT);
  this->pin = pin;
}

void Led::on(){
  digitalWrite(pin, HIGH);    
}

void Led::off(){
  digitalWrite(pin, LOW);   
}

