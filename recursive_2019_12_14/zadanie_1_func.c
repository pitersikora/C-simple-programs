#include <stdio.h>
#include "zadanie_1_func.h"

long unsigned int generate_result(long unsigned int base,long unsigned int exponent)
{
  /* function for calculating power of a number recursively
  multiply base number with exponent reduced by 1, put the result into next execution of
  function, repeat till exponent is reduced to 1 or 0 */
  if(exponent <= 1)
  {
    return base;
  } else {
    return base *= generate_result(base, exponent - 1);
  }
}