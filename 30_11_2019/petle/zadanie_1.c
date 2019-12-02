#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void print_result(int n)
{
  printf("\t%2d %6.0lf\n", n, pow(2,n));
}

int main(int argc, char const *argv[])
{
  int limit = atoi(argv[1]);

  printf("wypisz potegi liczby 2 nieprzekraczajace %d.\n", limit);

  for(int i = 0; pow(2,i) <= limit; i++)
  {
    print_result(i);
  }
/*
 lub
  int i = 0;

  while(pow(2,i) <= limit)
  {
    print_result(i);
    i++;
  }
*/
}