//Tom McClintock
//PHYS 105
//to compile: $make
//to run: $gaussian.exe
#include <stdio.h>
//Include your own header files here!
#include "function.h"
int main()
{
  int i, N = 20;
  float xLo = -5, xHi = 5,x = xLo, y;
  float step = (xHi-xLo)/N;
  for(i = 0; i < N; i++){
    y = gaussian(x);
    printf("x = %f   y = %e\n",x,y); 
    x = x + step; //increment x
  }
}
