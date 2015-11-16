//Tom McClintock
//PHYS 105
//to compile: $pc draw_dot.c -o draw_dot.exe
//to run: $draw_dot.exe
#include <stdio.h>
#include "philsplot.h"

int main(){
  float xLo = -10, xHi = +10, yLo = -7, yHi = +7;
  open_plot("1000x700");
  setlim_plot(xLo,xHi,yLo,yHi); //this plots without axes

  //Variables for the dot
  float expand = 4.0;
  int pColor = 2, pVertex=10, pStyle=1, pMem=1;

  //Draw a dot at 0,0
  float x=0.0, y=0.0;
  putpoint_plot(x,y, pVertex, pStyle, pColor, expand,pMem);
  flush_plot();

  //Wait 3 seconds and erase
  delay_plot(3000);
  delpoint_plot();
  
  //Close
  close_plot();
}
