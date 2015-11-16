//Tom McClintock
//PHYS 105
//to compile: $pc draw_gaussian.c -o draw_gaussian.exe
//to run: $draw_gaussian.exe
#include <stdio.h>
#include <math.h>
#include "philsplot.h"

float gaus(float x); //This is the prototype

int main()
{
  //First set up the plotting window
  float xLo = -5, xHi = +5, yLo = -0, yHi = +1;
  float expand = 1.1;
  int boxcolor = 1;
  int linecolor=2, linestyle=1, linewidth=3;
  open_plot("700x700");
  box_plot(xLo,xHi,yLo,yHi,expand,boxcolor,"","","","");
  locate_plot(xLo,yLo);
  
  float x = xLo; //Start at -5
  float y; //This will hold the gaussian
  
  //Declare the number of steps and find the step size
  int N = 100;
  float step = (xHi-xLo)/N; //step size

  int i; //loop counter
  for(i = 0; i < 100; i++){
    y = gaus(x);
    drawto_plot(x,y,linecolor,linestyle,linewidth);
    
    x = x + step; //increment x
  }
  //Flush to screen and close
  flush_plot();
  close_plot();
}

//Now write our function
float gaus(float x){
  return exp(-x*x);
}
