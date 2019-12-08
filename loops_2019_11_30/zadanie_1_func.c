#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "zadanie_1_func.h"

void print_result(int n)
{
  printf("%2d %6.0lf\n", n, pow(2,n));
}

void generate_result(char const *number[])
{
    int limit = atoi(number[1]);

  printf("Potegi liczby 2 nieprzekraczajace %d to:\n", limit);

  for(int i = 0; pow(2,i) <= limit; i++)
  {
    print_result(i);
  }
}