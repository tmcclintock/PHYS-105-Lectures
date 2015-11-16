//Tom McClintock
//PHYS 105
//to compile: $pc bounce.c -o bounce.exe
//to run: bounce.exe
#include <stdio.h>
#include "philsplot.h"

//This is a prototype for the force
//This is overkill here, but is useful in general
//since the force can in general be more complicated
float Force(float m,float t, float x, float y, float v);

int main(){
  //Start by defining the philsplot regions
  float xLo = -5, xHi = 5, yLo = 0, yHi = 5;
  open_plot("700x700");
  setlim_plot(xLo,xHi,yLo,yHi);
  
  //Draw the "floor"
  int linecolor=3, linestyle=1, linewidth=3;
  locate_plot(xLo,yLo+0.1);
  drawto_plot(xHi,yLo+0.1,linecolor,linestyle,linewidth);

  //These variables are for the ball
  float expand = 4.0;
  int pColor = 2, pVertex=10, pStyle=1, pMem=1;

  //Define physical variables, and our
  //initial conditions
  float y = +5.0, x = 0; //meters
  float m = 1.0; //kg
  float v = 0; //m/s
  float a; //m/s^2
  float dv, dy;
  float F; //kg m/s^2
  float t = 0, dt = 0.01; //seconds


  int i; //a loop variable
  int N = 200; //take N steps
  for( i = 0; i < N; i++){
    //The equations of motions
    F = Force(m,t,x,y,v);
    a = F/m;
    dy = v*dt;
    dv = a*dt;
    y = y + dy;
    v = v + dv;
    t = t + dt;
    //put the plot and draw
    putpoint_plot(x,y, pVertex, pStyle, pColor, expand,pMem);
    flush_plot();
    delay_plot(30);
    delpoint_plot();//This deletes the last point drawn
  }

  //Close
  close_plot();
}

//Here is our force equation
float Force(float m,float t, float x, float y, float v){
  float g = 9.81;
  return -m*g;
}
