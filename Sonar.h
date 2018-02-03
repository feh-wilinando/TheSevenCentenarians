#ifndef Sonar_H
#define Sonar_h

#include "Arduino.h"

#define DEFAULT_MIN_DISTANCE 15

class Sonar {

  public:
    Sonar(int triggerPin, int echoPin, long minValue);
    bool isNear();    
  
  private: 
    long minValue;
    int triggerPin;
    int echoPin;
};


#endif
