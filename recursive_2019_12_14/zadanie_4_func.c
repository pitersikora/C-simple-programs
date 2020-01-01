#include <stdio.h>
#include "zadanie_4_func.h"

// function for calculating Greatest Common Factor recursively by using modulo
int calculate_GCF(int first_number, int second_number)
{
/* calculate "first number % second number", result put into next calculation which will be
"second number % result", repeat till modulo result is 0,
then GCF is second number taken into calculation */
  if(first_number % second_number == 0)
  {
    return second_number;
  } else {
    return calculate_GCF(second_number, first_number % second_number);
  }
}