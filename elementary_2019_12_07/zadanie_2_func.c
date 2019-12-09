#include <stdio.h>
#include <math.h>
#include "zadanie_2_func.h"

int jest_pierwsza(int num_for_test)
{
  int limit = sqrt(num_for_test);
  int divider = 2;

  while(divider <= limit)
  {
    if(num_for_test % divider++ == 0)
    {
      return 0;
    } else {
      continue;
    }
  }
  return 1;
}