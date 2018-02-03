#ifndef LedStrip_H
#define LedStrip_H

#include "Arduino.h"
#include "Color.h"

class LedStrip {

  public:
    LedStrip( int redPin, int greenPin, int bluePin );
    void setColor(RGB color);
    void off();
  private: 
    int redPin; 
    int greenPin;
    int bluePin;    
};

#endif
