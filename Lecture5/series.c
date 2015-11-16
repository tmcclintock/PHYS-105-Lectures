#include <stdio.h>

int main(){
  int i,n;
  scanf("%i",&n);
  float my_array[n];
  float sum=0;
  for(i=0; i<n; i++){
    my_array[i] = i;
    sum = sum + i;
  }
  printf("sum = %f\n",sum);
  printf("n(n-1)/2 = %f\n",n*(n-1)/2.0);
}
