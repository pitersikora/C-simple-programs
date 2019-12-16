#include <stdio.h>
#include "zadanie_1_func.h"

long unsigned int generate_result(long unsigned int base,long unsigned int exponent)
{
  if(exponent <= 1)
  {
    return base;
  } else {
    return base *= generate_result(base, exponent - 1);
  }
}