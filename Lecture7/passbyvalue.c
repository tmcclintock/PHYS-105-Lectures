//Tom McClintock
//PHYS 105
//to compile: $gcc passbyvalue.c -o passbyvalue.exe
//to run: $passbyvalue.exe
#include <stdio.h>

//This will be a short function that
//adds one to the variables
void add_one(int i, int*p);

int main()
{
  //Declare some variables we will use
  int i = 2, j = 77;
  int* p = &j;

  printf("Before function call: ");
  printf("i = %i  j = %i\n",i,j);

  add_one(i,p);

  printf("After function call:  ");
  printf("i = %i  j = %i\n",i,j);
}

void add_one(int i, int*p){
  i = i + 1;  // Add 1 to i
  *p = *p + 1;// Add 1 to the number at p
  printf("Inside function call: ");
  printf("i = %i  j = %i\n",i,*p);
  return;
}
