//Tom McClintock
//PHYS 105
//to compile: $gcc ifelse.c -o ifelse.exe
//to run: $ifelse.exe

#include <stdio.h>

int main()
{
  int i;//Get an integer from the user
  printf("Please enter an integer:");
  scanf("%i",&i);
  
  if( i < 0 ){ //Here begins the if/else statements
    printf("your number is negative\n");
  }else if( i == 0 ){
    printf("your number is 0\n");
  }else{ // i > 0
    printf("your number is positive\n");
  }
}
