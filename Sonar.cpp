#include "Sonar.h"

Sonar::Sonar(int triggerPin, int echoPin, long minValue){
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  this->triggerPin = triggerPin;
  this->echoPin = echoPin;
  this->minValue = minValue;
}


bool Sonar::isNear(){
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  auto duration = pulseIn(echoPin, HIGH); 

  auto distance = duration*0.034/2;

  return distance <= minValue;
}

