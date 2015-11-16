//Tom McClintock
//PHYS 105
//to compile: $gcc randomwalk.c -o randomwalk.exe
//to run: $randomwalk.exe

#include <stdio.h>
#include <stdlib.h> //The random number generator is here
#include "philsplot.h"

int main(){
  int N = 10;//Total number of steps
  int p = 0;//Position. Starts at 0
  int n = 0;//number of steps taken so far
  int R; //Will hold the random numbers

  //Below is all of the philsplot stuff for setting up
  //the plotting region
  float xLo = 0, xHi = N, yLo = -N, yHi = +N;
  float expand = 1.1;
  int boxcolor = 1, linecolor=2, linestyle=1, linewidth=3;
  open_plot("700x700");
  box_plot(xLo,xHi,yLo,yHi,expand,boxcolor,"steps","position","","");


  //Begin by putting the pen/particle at the origin
  locate_plot(0,0);

  //Take N steps
  for(n=1; n<=N; n++){
    //Draw a random number that is either -1 or +1
    R = (rand()%2)*2-1;

    //Add the step to the position
    p = p + R;

    //Draw to the new position
    drawto_plot(n,p, linecolor,linestyle,linewidth);
  }
  
  //Flush the plot to the screen
  flush_plot();

  //Close the program
  close_plot();
}
