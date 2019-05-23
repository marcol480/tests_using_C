#include <stdio.h>
#include <math.h>
#include "functions.h"

int main(){

  int a, b, s;

  a=100;
  b=5;
  
  printf("before exchange a %d b %d\n", a, b);

  exchange(&a, &b);
  
  s = sum(&a, &b);

  printf("after exchange a %d b %d\n", a, b);

  printf("sum %d\n", s);
  
 return 0;
}

