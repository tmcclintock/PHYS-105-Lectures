//Tom McClintock
//PHYS 105
//to compile: $pc projectile.c -o projectile.exe
//to run: $projectile.exe
#include <stdio.h>
#include <math.h>
#include "philsplot.h"

//Prototypes for the force in the X and Y directions
float ForceX(float m, float t, float x, float y, float vx, float vy, float v);
float ForceY(float m, float t, float x, float y, float vx, float vy, float v);

int main(){
  //Start by setting up the philsplot region
  float xLo = 0, xHi = 10, yLo=0, yHi = 10;
  open_plot("700x700");
  setlim_plot(xLo,xHi,yLo,yHi);

  //Draw the "floor"
  int linecolor=3, linestyle=1, linewidth=3;
  locate_plot(xLo,yLo);
  drawto_plot(xHi,yLo,linecolor,linestyle,linewidth);

  //These variables are for the ball
  float expand = 4.0;
  int pColor=2, pVertex=10, pStyle=1, pMem=1;

  //Define variables and initial conditions
  float x=0,y=0; //m
  float v = 10; //m/s
  float angle = M_PI/4; //45 degrees
  float vx=v*cos(angle), vy=v*sin(angle);
  float dy, dx, dvy, dvx; //change variables
  float ax, ay; //m/s^2
  float m = 1; //kg
  float Fx, Fy; //kg m/s^2
  float t=0, dt=0.01; //seconds

  //Draw the initial point
  putpoint_plot(x,y, pVertex, pStyle, pColor, expand,pMem);

  int i; //a loop variables
  int N = 300; //Take N steps
  for( i = 0; i < N; i++){
    Fx = ForceX(m,t,x,y,vx,vy,v);
    Fy = Forcey(m,t,x,y,vx,vy,v);
    ax = Fx/m;
    ay = Fy/m;
    dvx = ax*dt;
    dvy = ay*dt;
    dx = vx*dt;
    dy = vy*dt;
    x = x + dx;
    y = y + dy;
    vx = vx + dvx;
    vy = vy + dvy;
    v = sqrt(vx*vx+vy*vy;
    //Draw the point and flush
    putpoint_plot(x,y,pVertex,pStyle,pColor,expand,pMem);
    flush_plot();
    delay_plot(30);
    delpoint_plot();
  }
  //Close
  close_plot();
}

//Here are our force equations
float ForceX(float m,float t, float x, float y, float vx, float vy, float v){
  return 0;
}
float ForceY(float m,float t, float x, float y, float vx, float vy, float v){
  float g = 9.81;
  return -m*g;
}
