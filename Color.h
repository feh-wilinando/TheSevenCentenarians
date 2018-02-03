#ifndef Color_H
#define Color_H

struct RGB {
  
    unsigned char red;
    unsigned char green; 
    unsigned char blue;
    
    RGB(unsigned char red, unsigned char green, unsigned char blue){
      this->red = red;
      this->green = green;
      this->blue = blue;
    }   

    bool equals(RGB other){
      return red == other.red &&
             green == other.green &&
             blue == other.blue;
    }
   
};


#define RED RGB(255,0,0)
#define GREEN RGB(0,255,0)
#define BLUE RGB(0,0,255)

#endif
