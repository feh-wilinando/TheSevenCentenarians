#include "TheSevenCentenarians.h"


//Definition Pins to Bind
#define sonar_green_trigger_pin 3
#define sonar_green_echo_pin    2
#define led_green_pin           4

#define sonar_blue_trigger_pin  7
#define sonar_blue_echo_pin     6
#define led_blue_pin            5

#define ledstrip_red_pin    10
#define ledstrip_green_pin  11
#define ledstrip_blue_pin   12 



// Initial Objects 
Sonar greenSonar(sonar_green_trigger_pin, sonar_green_echo_pin, DEFAULT_MIN_DISTANCE);
Sonar blueSonar(sonar_blue_trigger_pin, sonar_blue_echo_pin, DEFAULT_MIN_DISTANCE);

Led blueLed(led_blue_pin);
Led greenLed(led_green_pin);

LedStrip ledStrip(ledstrip_red_pin, ledstrip_green_pin, ledstrip_blue_pin);


// Bind board
void setup() {     
  Serial.begin(9600);
}

void loop() {
  
  if (greenSonar.isNear()){
    greenLed.on();
    ledStrip.setColor(GREEN);   
  }else{
    greenLed.off();
  }

  if (blueSonar.isNear()){
    blueLed.on();
    ledStrip.setColor(BLUE);    
  }else{
    blueLed.off();
  }

  
  ledStrip.off();
}


