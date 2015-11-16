//Tom McClintock
//PHYS 105
//to compile: $pc drawing.c -o drawing.exe
//to run: $drawing.exe
#include "philsplot.h"

int main(){
  //The first step is to set up the plotting region
  //The variables below  are the bounds of the plot
  float xLo = -10, xHi = +10, yLo = -5, yHi = +5;
  //We also have to give philsplot some other info
  //Just forget about this part for now
  float expand = 1.1;
  int boxcolor = 1;
  int linecolor=2, linestyle=1, linewidth=3;

  //open_plot() opens a graphical window with 
  //some pixel dimensions that you control
  open_plot("700x700");
  //If you wanted to save your picture, you could have 
  //used this pair of commands instead
  //char filename[] = "first_plot.png";
  //png_plot("700x700",filename);

  //With the window open, box_plot() will put down plot axes
  box_plot(xLo,xHi,yLo,yHi,expand,boxcolor,"","","","");
  
  //Now we can draw!
  //locate_plot() puts a "pencil" down on the page
  //while drawto_plot draws to the new location
  float x1 = -3.0, y1 = -2.0;
  float x2 = +3.0, y2 = +2.0;
  locate_plot(x1, y1);
  drawto_plot(x2, y2, linecolor,linestyle,linewidth);
  
  //More drawing!
  float x3 = -3.0, y3 = +2.0;
  drawto_plot(x3, y3, linecolor,linestyle,linewidth);

  //At this point the picture is still in the computer
  //We have to flush it from the 
  //graphics card (aka push it) to the screen
  flush_plot();

  //Once we are done, we close_plot()
  close_plot();
  //Note: the program won't end until we hit Enter
  //in the terminal
}
