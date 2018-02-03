#ifndef Led_H
#define Led_H

#include "Arduino.h"

class Led {
  public:
    Led(int pin);    
    void on();
    void off();
  
  private:
    int pin;
};

#endif
