//Tom McClintock
//PHYS 105
//to compile: $gcc whileloop.c -o whileloop.exe
//to run: $whileloop.exe
#include <stdio.h>

int main()
{
  int N = 100; // Declare an integer N
  int sum = 0; // The sum of all numbers from 0 to N
  int i = 0;   // This will be used as a counter
  
  while(i<N){
    sum+=i; // Add i to sum
    i++;    // Increment i by 1
  }
  
  //Print the results
  printf("With N = %i: Sum = %i\n",N,sum);
  printf("(N*(N-1))/2 = %i\n",(N*(N-1))/2);
}
