//Tom McClintock
//PHYS 105
//to compile: $gcc randomnumbers.c -o randomnumbers.exe
//to run: $randomnumbers.exe

#include <stdio.h>
#include <stdlib.h> //The random number generator is here

int main(){
  int i;
  i = rand();
  printf("Random number = %i\n",i);

  i = rand();
  printf("Random number = %i\n",i);

  i = rand();
  printf("Random number = %i\n",i);
}
