//Tom McClintock
//PHYS 105
//to compile: $gcc string_test.c -o string_test.exe
//to run: $string_test.exe

#include <stdio.h>

int main()
{
  printf("What is your name?\n");
  char name[20];
  scanf("%s",&name);
  printf("Hello %s!\n",name);
}
