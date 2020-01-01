#include <stdio.h>
#include <math.h>
#include "zadanie_2_func.h"

int jest_pierwsza(int num_for_test)
{
  /* if num_for_test divided by numbers from 2 to sqrt(num_for_test) doesnt give modulo
  then num_for_test is prime */
  int limit = sqrt(num_for_test);
  int divider = 2;

  while(divider <= limit)
  {
    if(num_for_test % divider++ == 0)
    {
      return 0;
    }
  }
  return 1;
}